// Grammar for Python

// NOTE WELL: You should also follow all the steps listed at
// https://devguide.python.org/grammar/

// Start symbols for the grammar:
//      single_input is a single interactive statement;
//      file_input is a module or sequence of commands read from an input file;
//      eval_input is the input for the eval() functions.
// NB: compound_stmt in single_input is followed by extra NEWLINE!
%{
    extern int yylex();
    extern int yylineno;
    extern int yydebug;
    void yyerror(char * s){
    printf("Error! Line Number %d, message: %s\n", yylineno, s);
    }
    void yyerror(string s){
    printf("Error! Line Number %d, message: %s\n", yylineno, s.c_str());
    }
    extern stack<int> indents;
    #define YYDEBUG 1
%}


%code requires{
    #ifndef PARSER
    #include "node.hpp"
    #endif
}

%code top{
    #include "node.hpp"
    AST ast;
    #define PARSER
}
%define api.value.type {NODE}

%token NEWLINE // done
%token ENDMARKER
%token ASYNC // done
%token NAME // done
%token DEL // done
%token PASS // done
%token BREAK // done
%token CONTINUE // done
%token RETURN // done
%token RAISE // done
%token FROM // done
%token IMPORT // done
%token AS // done
%token GLOBAL // done
%token NONLOCAL // done
%token ASSERT // done
%token IF // done
%token ELIF // done
%token ELSE // done
%token FOR // done
%token IN // done
%token WHILE // done
%token TRY // done
%token FINALLY // done
%token WITH // done
%token EXCEPT // done
%token LAMBDA // done
%token NOT // done
%token OR // done
%token AND // done
%token AWAIT // done
%token IS // done
%token INDENT
%token DEDENT
%token YIELD // done
%token TRUE // done
%token NUMBER // done
%token STRING // done
%token FALSE // done
%token NONE // done
%token CLASS // done
%token DEF // done
%token ARROWOP // -> done
%token POW // ** done
%token ADDASSIGN // += done
%token SUBASSIGN // -= done
%token MULASSIGN // *= done
%token ATASSIGN // @= done
%token DIVASSIGN // /= done
%token MODASSIGN // %= done
%token ANDASSIGN // &= done
%token ORASSIGN // |= done
%token XORASSIGN // ^= done
%token LSASSIGN // <<= done
%token RSASSIGN // >>= done
%token POWASSIGN // **= done
%token IDIVASSIGN // //= done
%token ELLIPSIS // ...-
%token EQUAL // == done
%token GEQ // >= done
%token LEQ // <= done
%token LTORGT // <>
%token NEQ // != done
%token LEFTSHIFT // << done
%token RIGHTSHIFT // >> done
%token IDIV // // done
%start file_input
%%

file_input: nstatement ENDMARKER{
    $<ptr>$ = new node("nt", "file_input");
    cerr<<"nstatement - Parsing successful\n";
    cerr<<$<val>2<<" yoyoyoyo\n";
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.graphviz($<ptr>$);
    return 0;
}

single_input: NEWLINE {
    $<ptr>$ = new node("nt", "single_input");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}| simple_stmt {
    $<ptr>$ = new node("nt", "single_input");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}| compound_stmt NEWLINE{
    $<ptr>$ = new node("nt", "single_input");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

nstatement: nstatement NEWLINE {
    cerr<<"nstatement -> nstatement newline\n";
    $<ptr>$ = new node("nt", "nstatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | nstatement stmt {
    cerr<<"nstatement -> nstatement stmt\n";
    $<ptr>$ = new node("nt", "nstatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    cerr << "Null rpodsdsdsfds\n";
    $<ptr>$ = NULL;
}
eval_input: testlist multiline ENDMARKER {
    $<ptr>$ = new node("nt", "eval_input");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
multiline: multiline NEWLINE {
    $<ptr>$ = new node("nt", "multiline");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}

decorator: '@' dotted_name cond_brack_cond_arglist NEWLINE {
    $<ptr>$ = new node("nt", "decorator");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
cond_brack_cond_arglist: brack_cond_arglist {
    $<ptr>$ = $<ptr>1;    
} 
| {
    $<ptr>$ = NULL;
}
brack_cond_arglist: '(' cond_arglist ')' {
    $<ptr>$ = new node("nt", "enclosed arg list");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
cond_arglist: arglist {
    $<ptr>$ = $<ptr>1;
}
| {
    $<ptr>$ = NULL;
}
decorators: decorator {
    $<ptr>$ = $<ptr>1;
}
| decorators decorator{
    $<ptr>$ = new node("nt", "decorators");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

decorated: decorators defob {
    $<ptr>$ = new node("nt", "decorated");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
defob: classdef {
    $<ptr>$ = $<ptr>1;
} 
    | funcdef {
    $<ptr>$ = $<ptr>1;

} 
     | async_funcdef {
    $<ptr>$ = $<ptr>1;

     }
async_funcdef: ASYNC funcdef {
    $<ptr>$ = new node("nt", "Async Function Def");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
funcdef: DEF NAME parameters cond_arrowtest ':' suite {
    $<ptr>$ = new node("nt", "function definition");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);

}
cond_arrowtest: ARROWOP test{
    $<ptr>$ = new node("nt", "cond_arrowtest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} 
| {
    $<ptr>$ = NULL;
}
parameters: '(' cond_typedargslist ')' {
    $<ptr>$ = new node("nt", "parameters");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
cond_typedargslist: typedargslist {
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = NULL;
}

typedargslist: tfpdef cond_eqtest close_comma_tfpdef_condeqtest cond_comma_or_condstarorstartstar{
    $<ptr>$ = new node("nt", "typedargslist");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
  | '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma {
    $<ptr>$ = new node("nt", "typedargslist");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
  }
  | POW tfpdef cond_comma {
    $<ptr>$ = new node("nt", "typedargslist");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
  }
conds_comma_startfpdefcondcomma: ',' {
        $<ptr>$ = $<ptr>1;
    }
    | ',' POW tfpdef cond_comma {
        $<ptr>$ = new node("nt", "conds_comma_startfpdefcondcomma");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
    | {
        $<ptr>$ = NULL;
    }
cond_star_or_startstar: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma {
            $<ptr>$ = new node("nt", "cond_start_or_starstar");
            ast.add_node($<ptr>$);
            ast.add_edge($<ptr>$, $<ptr>1);
            ast.add_edge($<ptr>$, $<ptr>2);
            ast.add_edge($<ptr>$, $<ptr>3);
            ast.add_edge($<ptr>$, $<ptr>4);
        }
      | POW tfpdef cond_comma {
        $<ptr>$ = new node("nt", "cond_star_or_startstar");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
      }
      | {
        $<ptr>$ = NULL;
      }
cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar {
        $<ptr>$ = new node("nt", "cond_comma_or_constartortarstar");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
    } 
    | {
        $<ptr>$ = NULL;
    }
close_comma_tfpdef_condeqtest: close_comma_tfpdef_condeqtest ',' tfpdef cond_eqtest {
    $<ptr>$ = new node("nt", "close_comma_tfpdef_condeqtest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
| {
    $<ptr>$ = NULL;
}
cond_tfpdef: tfpdef {
    $<ptr>$ = $<ptr>1;
}
| {
    $<ptr>$ = NULL;
}
tfpdef: NAME {
    $<ptr>$ = $<ptr>1;
}
| NAME ':' test {
    $<ptr>$ = new node("nt", "tfpdef");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

varargslist: vfpdef cond_eqtest close_comma_vfpdef_condeqtest cond_comma_or_condstarorstartstarvf {
    $<ptr>$ = new node("nt", "VarArgs");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
  | '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma {
    $<ptr>$ = new node("nt", "VarArgs");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
  }
  | POW vfpdef cond_comma {
    $<ptr>$ = new node("nt", "VarArgs");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
  }
vfpdef: NAME {
    $<ptr>$ = $<ptr>1;
};
close_comma_vfpdef_condeqtest: close_comma_vfpdef_condeqtest ',' vfpdef cond_eqtest {
    $<ptr>$ = new node("nt", "close_comma_vfpdef_condeqtest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
| {
    $<ptr>$ = NULL;
}
cond_vfpdef: vfpdef {
        $<ptr>$ = $<ptr>1;
    }
    | {
        $<ptr>$ = NULL;
    }
cond_star_or_startstar_vf: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma
        {
            $<ptr>$ = new node("nt", "cond_star_or_startstar_vf");
            ast.add_node($<ptr>$);
            ast.add_edge($<ptr>$, $<ptr>1);
            ast.add_edge($<ptr>$, $<ptr>2);
            ast.add_edge($<ptr>$, $<ptr>3);
            ast.add_edge($<ptr>$, $<ptr>4);
        }
      | POW vfpdef cond_comma {
        $<ptr>$ = new node("nt", "cond_star_or_startstar_vf");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
      }
      | {
        $<ptr>$ = NULL;
      }
conds_comma_starvfpdefcondcomma: ',' {
    $<ptr>$ = $<ptr>1;
} 
| ',' POW vfpdef cond_comma {
        $<ptr>$ = new node("nt", "conds_comma_starvfpdefcondcomma");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
    | {
        $<ptr>$ = NULL;
    }
cond_comma_or_condstarorstartstarvf: ',' cond_star_or_startstar_vf {
    $<ptr>$ = new node("nt", "comma or starstar");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
| {
    $<ptr>$ = NULL;
} 

stmt: simple_stmt {
    cerr<<"stmt reached\n";
    $<ptr>$ = $<ptr>1;
} | compound_stmt {
    $<ptr>$ = $<ptr>1;
}
simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE {
        cerr << "simple statement\n";
        $<ptr>$ = new node("nt", "simple_stmt");
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
close_small_stmt: close_small_stmt ';' small_stmt {
        $<ptr>$ = new node("nt", "close_small_stmt");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
    }
        | {
            $<ptr>$ = NULL;
        }
cond_semi_colon: ';' {
        $<ptr>$ = $<ptr>1;
    }
    | {
        $<ptr>$ = NULL;
    }
small_stmt: expr_stmt {
    $<ptr>$ = $<ptr>1;
} | del_stmt {
    $<ptr>$ = $<ptr>1;
}
| pass_stmt {
    $<ptr>$ = $<ptr>1;
}
| flow_stmt {
    $<ptr>$ = $<ptr>1;
}
| import_stmt {
    cerr<<" import stmt \n";
    $<ptr>$ = $<ptr>1;
}
| global_stmt {
    $<ptr>$ = $<ptr>1;
}
 | nonlocal_stmt {
    $<ptr>$ = $<ptr>1;
 }
  | assert_stmt {
    $<ptr>$ = $<ptr>1;
  }
expr_stmt: testlist_star_expr anna_or_auga_or_closeyield {
    $<ptr>$ = new node("nt", "expr_statement");
    cerr << "here expr_stmt\n";
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
yield_or_test: yield_expr {
        $<ptr>$ = $<ptr>1;
    }
    
    | testlist {
        $<ptr>$ = $<ptr>1;
    }
yield_or_test_star: yield_expr {
                $<ptr>$ = $<ptr>1;
            }

 | testlist_star_expr {
            $<ptr>$ = $<ptr>1;
 }
close_yield_or_test_star: close_yield_or_test_star '=' yield_or_test_star {
                    $<ptr>$ = new node("nt", "close_yield_or_test_star");
                    ast.add_node($<ptr>$);
                    ast.add_edge($<ptr>$, $<ptr>1);
                    ast.add_edge($<ptr>$, $<ptr>2);
                    ast.add_edge($<ptr>$, $<ptr>3);
            }
                        | {
                            $<ptr>$ = NULL;
                        }
annassign: ':' test cond_eqtest {
    $<ptr>$ = new node("nt", "annasign");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
cond_eqtest: '=' test {
        $<ptr>$ = new node("nt", "cond_eqtest");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
    }
      | {
        $<ptr>$ = NULL;
      }
anna_or_auga_or_closeyield: annassign {
    $<ptr>$ = $<ptr>1;
} | augassign yield_or_test {
    $<ptr>$ = $<ptr>1;
} | close_yield_or_test_star {
    $<ptr>$ = $<ptr>1;
}
                     
testlist_star_expr: test_or_starexp close_commatest_or_starexp cond_comma {
    $<ptr>$ = new node("nt", "testlist star expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
test_or_starexp: test {
    cerr<<"yo1\n";
    $<ptr>$ = $<ptr>1;
}
 | star_expr {
    $<ptr>$ = $<ptr>1;
 }
close_commatest_or_starexp: close_commatest_or_starexp ',' test_or_starexp {
    $<ptr>$ = new node("nt", "close_commatest_or_starexp");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} 
| {
    $<ptr>$ = NULL;
}
cond_comma: ','{
    $<ptr>$ = $<ptr>1;
} 
| {
    $<ptr>$ = NULL;
}
augassign: ADDASSIGN{
            $<ptr>$ = $<ptr>1;
        }
            | SUBASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | MULASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | ATASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | DIVASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | MODASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | ANDASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | ORASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | XORASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | LSASSIGN {
                $<ptr>$ = $<ptr>1;
            } 
            | RSASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | POWASSIGN {
                $<ptr>$ = $<ptr>1;
            }
            | IDIVASSIGN {
                $<ptr>$ = $<ptr>1;
            }
// For normal and annotated assignments, additional restrictions enforced by the interpreter
del_stmt: DEL exprlist {
    $<ptr>$ = new node("nt", "DelStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
pass_stmt: PASS{
    $<ptr>$ = new node("nt", "PassStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}
flow_stmt: break_stmt {
            $<ptr>$ = $<ptr>1;
        } 
        | continue_stmt {
            $<ptr>$ = $<ptr>1;
        }
        | return_stmt {
            $<ptr>$ = $<ptr>1;
        }
        | raise_stmt {
            $<ptr>$ = $<ptr>1;
        }
        | yield_stmt{
            $<ptr>$ = $<ptr>1;
        }

break_stmt: BREAK {
    $<ptr>$ = new node("nt", "BreakStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

continue_stmt: CONTINUE {
    $<ptr>$ = new node("nt", "ContinueStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

return_stmt: RETURN cond_testlist{
    $<ptr>$ = new node("nt", "ReturnStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

cond_testlist: testlist{
      $<ptr>$ = $<ptr>1;
} | {
      $<ptr>$ = nullptr;
}
yield_stmt: yield_expr {
    $<ptr>$ = $<ptr>1;
}
raise_stmt: RAISE cond_from_test{
    $<ptr>$ = new node("nt", "RaiseStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
cond_from_test: test {
    $<ptr>$ = $<ptr>1;
}| test FROM test {
    $<ptr>$ = new node("nt", "cond_from_test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}| {    
    $<ptr>$ = nullptr;
}

import_stmt: import_name {
    cerr << "import name\n";
    $<ptr>$ = $<ptr>1;
}
| import_from {
    $<ptr>$ = $<ptr>1;
}
import_name: IMPORT dotted_as_names{
    cerr<<"import\n";
    $<ptr>$ = new node("nt", "ImportStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
// note below: the ('.' | ELLIPSIS) is necessary because ELLIPSIS is tokenized as ELLIPSIS
import_from: FROM closeplusdotorellipsisname_or_plusdotellip IMPORT star_or_import_parentheses_or_import {
                    $<ptr>$ = new node("nt", "import_from");
                    ast.add_node($<ptr>$);
                    ast.add_edge($<ptr>$, $<ptr>1);   
                    ast.add_edge($<ptr>$, $<ptr>2);   
                    ast.add_edge($<ptr>$, $<ptr>3);   
                    ast.add_edge($<ptr>$, $<ptr>4);   
            }
              
closeplusdotorellipsisname_or_plusdotellip: close_dot_or_ellipsis dotted_name{
    $<ptr>$ = new node("nt", "closeplusdotorellipsisname_or_plusdotellip");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | plus_dot_or_ellipsis {
    $<ptr>$ = $<ptr>1;
} 

star_or_import_parentheses_or_import: '*'{
    $<ptr>$ = $<ptr>1;
} | '(' import_as_names ')'{
    $<ptr>$ = new node("nt", "star_or_import_parentheses_or_import");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);   
    ast.add_edge($<ptr>$, $<ptr>2);   
    ast.add_edge($<ptr>$, $<ptr>3);  
} | import_as_names{
    $<ptr>$ = $<ptr>1;
}

plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis{
    $<ptr>$ = new node("nt", "plus_dot_or_ellipsis");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | ELLIPSIS plus_dot_or_ellipsis{
    $<ptr>$ = new node("nt", "plus_dot_or_ellipsis");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | '.'{
    $<ptr>$ = $<ptr>1;
} | ELLIPSIS{
    $<ptr>$ = $<ptr>1;
}

close_dot_or_ellipsis: plus_dot_or_ellipsis{
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = nullptr;
}

import_as_name: NAME{
    $<ptr>$ = $<ptr>1;
} | NAME AS NAME{
    $<ptr>$ = new node("nt", "ImportAsName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);   
    ast.add_edge($<ptr>$, $<ptr>2);   
    ast.add_edge($<ptr>$, $<ptr>3);  
}

dotted_as_name: dotted_name{
    $<ptr>$ = $<ptr>1;
} | dotted_name AS NAME{
    $<ptr>$ = new node("nt", "DottedAsName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

import_as_names: import_as_name close_commaimportasname cond_comma{
    $<ptr>$ = new node("nt", "ImportAsNames");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);   
    ast.add_edge($<ptr>$, $<ptr>2);   
    ast.add_edge($<ptr>$, $<ptr>3); 
}

close_commaimportasname: close_commaimportasname ',' import_as_name{
    $<ptr>$ = new node("nt", "CloseCommaImportAsName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

dotted_as_names: dotted_as_name close_commadottedasname{
    $<ptr>$ = new node("nt", "DottedAsNames");
    cerr<<"dotted_as_name reached\n";
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_commadottedasname: close_commadottedasname ',' dotted_as_name{
    $<ptr>$ = new node("nt", "CloseCommaDottedAsName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}  

dotted_name: NAME close_dotted_name{
    $<ptr>$ = new node("nt", "DottedName");
    cerr << "Dotted name reached\n";
    cerr << $<val>1 << '\n';
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_dotted_name: close_dotted_name '.' NAME{
    $<ptr>$ = new node("nt", "CloseDottedName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    cerr << "Null production\n";
    $<ptr>$ = NULL;
} 

global_stmt: GLOBAL NAME close_comma_name{
    $<ptr>$ = new node("nt", "GlobalStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
nonlocal_stmt: NONLOCAL NAME close_comma_name{
    $<ptr>$ = new node("nt", "NonlocalStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
close_comma_name: close_comma_name ',' NAME{
    $<ptr>$ = new node("nt", "CloseCommaName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

assert_stmt: ASSERT test{
    $<ptr>$ = new node("nt", "AssertStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | ASSERT test ',' test{
    $<ptr>$ = new node("nt", "AssertStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}

compound_stmt: if_stmt{
    $<ptr>$ = $<ptr>1;
} | while_stmt{
    $<ptr>$ = $<ptr>1;
} | for_stmt{
    $<ptr>$ = $<ptr>1;
} | try_stmt{
    $<ptr>$ = $<ptr>1;
} | with_stmt{
    $<ptr>$ = $<ptr>1;
} | funcdef{
    $<ptr>$ = $<ptr>1;
} | classdef{
    $<ptr>$ = $<ptr>1;
} | decorated{
    $<ptr>$ = $<ptr>1;
} | async_stmt{
    $<ptr>$ = $<ptr>1;
}

async_stmt: ASYNC funcdef_or_withstmt_or_forstmt{
    $<ptr>$ = new node("nt", "AsyncStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

funcdef_or_withstmt_or_forstmt: funcdef{
    $<ptr>$ = $<ptr>1;
} | with_stmt{
    $<ptr>$ = $<ptr>1;
} | for_stmt{
    $<ptr>$ = $<ptr>1;
}

if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite{
    cerr<<"if stmt reached\n";
    $<ptr>$ = new node("nt", "IfStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
}

cond_else_colon_suite: ELSE ':' suite{
    $<ptr>$ = new node("nt", "ElseColonSuite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

close_eliftestsuite: close_eliftestsuite ELIF test ':' suite{
    $<ptr>$ = new node("nt", "CloseElifTestSuite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
} | {
    $<ptr>$ = NULL;
}  

while_stmt: WHILE test ':' suite{
    $<ptr>$ = new node("nt", "WhileStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
} | WHILE test ':' suite ELSE ':' suite{
    $<ptr>$ = new node("nt", "WhileStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
    ast.add_edge($<ptr>$, $<ptr>7);
}
for_stmt: FOR exprlist IN testlist ':' suite{
    $<ptr>$ = new node("nt", "ForStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
} | FOR exprlist IN testlist ':' suite ELSE ':' suite{
    $<ptr>$ = new node("nt", "ForStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
    ast.add_edge($<ptr>$, $<ptr>7);
    ast.add_edge($<ptr>$, $<ptr>8);
    ast.add_edge($<ptr>$, $<ptr>9);
}
try_stmt: TRY ':' suite plus_except_colsuite cond_else_colon_suite cond_finallycolsuite{
    $<ptr>$ = new node("nt", "TryStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
} | TRY ':' suite FINALLY ':' suite{
    $<ptr>$ = new node("nt", "TryStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
}

cond_finallycolsuite: FINALLY ':' suite{
    $<ptr>$ = new node("nt", "FinallyColonSuite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
} 

plus_except_colsuite: except_clause ':' suite{
    $<ptr>$ = new node("nt", "PlusExceptColonSuite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | plus_except_colsuite except_clause ':' suite{
    $<ptr>$ = new node("nt", "PlusExceptColonSuite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
} 

with_stmt: WITH with_item close_commawithitem  ':' suite{
    $<ptr>$ = new node("nt", "WithStatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
}

close_commawithitem: close_commawithitem ',' with_item{
    $<ptr>$ = new node("nt", "CloseCommaWithItem");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
} 

with_item: test{
    $<ptr>$ = $<ptr>1;
} | test AS expr{
    $<ptr>$ = new node("nt", "WithItem");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

// NB compile.c makes sure that the default except clause is last 
except_clause: EXCEPT cond_testasname{
    $<ptr>$ = new node("nt", "ExceptClause");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

cond_testasname: test{
    $<ptr>$ = $<ptr>1;
} | test AS NAME{
    $<ptr>$ = new node("nt", "CondTestAsName");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} |{
    $<ptr>$ = NULL;
} 

suite: simple_stmt{
    cerr<<" yo yo yo 1\n";
    $<ptr>$ = $<ptr>1;
} | NEWLINE INDENT plus_stmt DEDENT{
    cerr<<" yo yo yo 2\n";
    $<ptr>$ = new node("nt", "Suite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
plus_stmt: stmt{
    $<ptr>$ = $<ptr>1;
} | plus_stmt stmt{
    $<ptr>$ = new node("nt", "PlusStmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
test: or_test IF or_test ELSE test{
    $<ptr>$ = new node("nt", "Test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
} | lambdef{
    $<ptr>$ = $<ptr>1;
} | or_test{
    cerr << "debug statement " << 1 <<"\n";
    cerr<<"test->or_test\n";
    $<ptr>$ = $<ptr>1;
}
test_nocond: or_test{
    $<ptr>$ = $<ptr>1;
} | lambdef_nocond{
    $<ptr>$ = $<ptr>1;
}

lambdef: LAMBDA varargslist ':' test{
    $<ptr>$ = new node("nt", "LambDef");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
} | LAMBDA ':' test{
    $<ptr>$ = new node("nt", "LambDef");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

lambdef_nocond: LAMBDA varargslist ':' test_nocond{
    $<ptr>$ = new node("nt", "LambDefNoCond");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
} | LAMBDA ':' test_nocond{
    $<ptr>$ = new node("nt", "LambDefNoCond");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

or_test: and_test close_or_and_test{
    cerr << "debug statement " << 2 <<" "<<($<ptr>1)->name<<"\n";
    $<ptr>$ = new node("nt", "OrTest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_or_and_test: close_or_and_test OR and_test{
    $<ptr>$ = new node("nt", "CloseOrAndTest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}  

and_test: not_test close_and_not_test{
    cerr << "debug statement " << 3 <<"\n";
    $<ptr>$ = new node("nt", "AndTest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_and_not_test: close_and_not_test AND not_test{
    $<ptr>$ = new node("nt", "CloseAndNotTest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

not_test: close_not comparison{
    cerr << "debug statement " << 4 << "\n";
    $<ptr>$ = new node("nt", "NotTest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_not: close_not NOT{
    $<ptr>$ = new node("nt", "CloseNot");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}

comparison: expr close_compopexpr{
    cerr << "debug statement " << 5 <<"\n";
    $<ptr>$ = new node("nt", "Comparison");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_compopexpr: close_compopexpr comp_op expr{
    $<ptr>$ = new node("nt", "CloseCompOpExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

// <> isn't actually a valid comparison operator in Python. It's here for the
// sake of a __future__ import described in PEP 401 (which really works :-)

/* comp_op: '<'|'>'|EQUAL|GEQ|LEQ|LTORGT|NEQ|IN|NOT IN|IS|IS NOT */
comp_op: '<'{
    $<ptr>$ = $<ptr>1;
} | '>'{
    $<ptr>$ = $<ptr>1;
} | EQUAL{
    $<ptr>$ = $<ptr>1;
} | GEQ{
    $<ptr>$ = $<ptr>1;
} | LEQ{
    $<ptr>$ = $<ptr>1;
} | LTORGT{
    $<ptr>$ = $<ptr>1;
} | NEQ{
    $<ptr>$ = $<ptr>1;
} | IN{
    $<ptr>$ = $<ptr>1;
} | NOT IN{
    $<ptr>$ = new node("nt", "CompOp");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | IS{
    $<ptr>$ = $<ptr>1;
} | IS NOT{
    $<ptr>$ = new node("nt", "CompOp");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

star_expr: '*' expr{
    $<ptr>$ = new node("nt", "StarExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

expr: xor_expr close_orxorexp{
    cerr << "debug statement " << 6 <<"\n";
    $<ptr>$ = new node("nt", "Expr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
close_orxorexp: close_orxorexp '|' xor_expr{
    $<ptr>$ = new node("nt", "CloseOrXorExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

xor_expr: and_expr close_xor_and_expr{
    cerr << "debug statement " << 7 <<"\n";
    $<ptr>$ = new node("nt", "XorExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_xor_and_expr: close_xor_and_expr '^' and_expr{
    $<ptr>$ = new node("nt", "CloseXorAndExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
} 

and_expr: shift_expr close_andshiftexpr{
    cerr << "debug statement " << 8 <<"\n";
    $<ptr>$ = new node("nt", "AndExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_andshiftexpr: close_andshiftexpr '&' shift_expr{
    $<ptr>$ = new node("nt", "CloseAndShiftExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}  | {
$<ptr>$ = NULL;
} 

shift_expr: arith_expr close_lrs_arith_expr{
    cerr << "debug statement " << 9 <<"\n";
    $<ptr>$ = new node("nt", "ShiftExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

left_right_shift: LEFTSHIFT{
    $<ptr>$ = $<ptr>1;
} | RIGHTSHIFT{
    $<ptr>$ = $<ptr>1;
}

close_lrs_arith_expr: close_lrs_arith_expr left_right_shift arith_expr{
    $<ptr>$ = new node("nt", "CloseLrsArithExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

arith_expr: term close_plusminusterm{
    cerr << "debug statement " << 10 <<"\n";
    $<ptr>$ = new node("nt", "ArithExpr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_plusminusterm: close_plusminusterm '+' term{
    $<ptr>$ = new node("nt", "ClosePlusMinusTerm");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | close_plusminusterm '-' term{
    $<ptr>$ = new node("nt", "ClosePlusMinusTerm");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}  

term: factor close_muldivopsfactor{
    cerr << "debug statement " << 11 <<"\n";
    $<ptr>$ = new node("nt", "Term");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

group_muldivremops: '*'{
    $<ptr>$ = $<ptr>1;
} | '@'{
    $<ptr>$ = $<ptr>1;
} | '/'{
    $<ptr>$ = $<ptr>1;
} | '%'{
    $<ptr>$ = $<ptr>1;
} | IDIV{
    $<ptr>$ = $<ptr>1;
} 

close_muldivopsfactor: close_muldivopsfactor group_muldivremops factor{
    $<ptr>$ = new node("nt", "CloseMulDivOpsFactor");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

factor: close_plus_or_minus_or_not power{
    cerr << "debug statement " << 12 <<"\n";
    $<ptr>$ = new node("nt", "Factor");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_plus_or_minus_or_not: close_plus_or_minus_or_not plus_or_minus_or_not{
    $<ptr>$ = new node("nt", "ClosePlusOrMinusOrNot");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}

/* plus_or_minus_or_not: '+' | '-' | '~' */
plus_or_minus_or_not: '+'{
    $<ptr>$ = $<ptr>1;
} | '-'{
    $<ptr>$ = $<ptr>1;
} | '~'{
    $<ptr>$ = $<ptr>1;
}

power: atom_expr POW factor{
    $<ptr>$ = new node("nt", "Power");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | atom_expr{
    cerr << "debug statement " << 13 <<"\n";
    $<ptr>$ = $<ptr>1;
}

atom_expr: AWAIT atom close_trailer{
    $<ptr>$ = new node("nt", "AtomExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | atom close_trailer{
    cerr << "debug statement " << 14 <<"\n";
    $<ptr>$ = new node("nt", "AtomExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_trailer: close_trailer trailer{
    $<ptr>$ = new node("nt", "CloseTrailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}

atom: '(' cond_yield_or_testlist ')' {
    $<ptr>$ = new node("nt", "Atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}|'[' testlist_comp ']' {
    $<ptr>$ = new node("nt", "Atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}| '[' ']' '{' dictorsetmaker '}' {
    $<ptr>$ = new node("nt", "Atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
} | '{' dictorsetmaker '}' {
    $<ptr>$ = new node("nt", "Atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | '{' '}' {
    $<ptr>$ = new node("nt", "Atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | NAME {
    $<ptr>$ = $<ptr>1;
} | NUMBER {
    cerr << "debug statement " << 15 <<"\n";
    cerr << "number reached " << $<val>1 << '\n';
    $<ptr>$ = $<ptr>1;
} | multi_str {
    $<ptr>$ = $<ptr>1;
} | ELLIPSIS {
    $<ptr>$ = $<ptr>1;
} | NONE {
    $<ptr>$ = $<ptr>1;
} | TRUE {
    $<ptr>$ = $<ptr>1;
} | FALSE {
    $<ptr>$ = $<ptr>1;
}      

cond_yield_or_testlist: yield_expr{
    $<ptr>$ = $<ptr>1;
} | testlist_comp{
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = NULL;
} 

multi_str: STRING{
    $<ptr>$ = $<ptr>1;
} | STRING multi_str{
    $<ptr>$ = new node("nt", "MultiStr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

testlist_comp: test_or_starexp comp_for{
    $<ptr>$ = new node("nt", "TestListComp");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | test_or_starexp close_commatest_or_starexp cond_comma{
    $<ptr>$ = new node("nt", "TestListComp");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

trailer: '(' cond_arglist ')' {
    $<ptr>$ = new node("nt", "Trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | '[' subscriptlist ']' {
    $<ptr>$ = new node("nt", "Trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | '.' NAME {
    $<ptr>$ = new node("nt", "Trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);

}

subscriptlist: subscript close_commasubscript cond_comma{
    $<ptr>$ = new node("nt", "SubscriptList");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

close_commasubscript: close_commasubscript ',' subscript{
    $<ptr>$ = new node("nt", "CloseCommaSubscript");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

subscript: test {
    $<ptr>$ = $<ptr>1;
}| cond_test ':' cond_test cond_sliceop{
    $<ptr>$ = new node("nt", "Subscript");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}

cond_test: test {
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = NULL;

}

cond_sliceop: sliceop {
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = NULL;
}  

sliceop: ':' test {
    $<ptr>$ = new node("nt", "SliceOp");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}| ':'{
    $<ptr>$ = $<ptr>1;
}

exprlist: expr_or_star_expr close_comma_expr_or_star_expr cond_comma{
    $<ptr>$ = new node("nt", "ExprList");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

expr_or_star_expr: expr {
    $<ptr>$ = $<ptr>1;
} | star_expr {
    $<ptr>$ = $<ptr>1;
}

close_comma_expr_or_star_expr: close_comma_expr_or_star_expr ',' expr_or_star_expr {
    $<ptr>$ = new node("nt", "CloseCommaExprOrStarExpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

testlist: test close_comma_test cond_comma{
    $<ptr>$ = new node("nt", "TestList");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

close_comma_test: close_comma_test ',' test {
    $<ptr>$ = new node("nt", "CloseCommaTest");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}
// checked till here ----------------??????????????


dictorsetmaker:  testcoltest_or_starrexpr compfor_or_close_commatestcoltestorstarexpr_condcomma {
    $<ptr>$ = new node("nt", "DictOrSetMaker");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | some_non_terminal{
    $<ptr>$ = $<ptr>1;
}

testcoltest_or_starrexpr: test ':' test{
    $<ptr>$ = new node("nt", "TestColTestOrStarRexpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | POW star_expr{
    $<ptr>$ = $<ptr>1;
}


close_commatestcoltestorstarrexpr: close_commatestcoltestorstarrexpr ',' testcoltest_or_starrexpr  {
    $<ptr>$ = new node("nt", "CloseCommaTestColTestOrStarRexpr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

compfor_or_close_commatestcoltestorstarexpr_condcomma: comp_for {
    $<ptr>$ = $<ptr>1;
} | close_commatestcoltestorstarrexpr cond_comma{
    $<ptr>$ = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

some_non_terminal: test_or_starexp comp_for{
    $<ptr>$ = new node("nt", "SomeNonTerminal");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | test_or_starexp close_commatest_or_starexp cond_comma{
    $<ptr>$ = new node("nt", "SomeNonTerminal");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

classdef: CLASS NAME cond_parentheses_arglist ':' suite{
    $<ptr>$ = new node("nt", "ClassDef");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
}

cond_parentheses_arglist: '(' cond_arglist ')'{
    $<ptr>$ = new node("nt", "CondParenthesesArgList");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

arglist: argument close_comma_argument cond_comma{
    $<ptr>$ = new node("nt", "ArgList");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

close_comma_argument: close_comma_argument ',' argument {
        $<ptr>$ = new node("nt", "CloseCommaArgument");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
    } | {
        $<ptr>$ = nullptr;
    }

// The reason that keywords are test nodes instead of NAME is that using NAME
// results in an ambiguity. ast.c makes sure it's a NAME.
// "test '=' test" is really "keyword '=' test", but we have no such token.
// These need to be in a single rule to avoid grammar that is ambiguous
// to our LL(1) parser. Even though 'test' includes '*expr' in star_expr,
// we explicitly match '*' here, too, to give it proper precedence.
// Illegal combinations and orderings are blocked in ast.c:
// multiple (test comp_for) arguments are blocked; keyword unpackings
// that precede iterable unpackings are blocked; etc.
argument: test comp_for {
        $<ptr>$ = new node("nt", "argument");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);
    } |
    test {
        $<ptr>$ = $<ptr>1;
    } |
    test '=' test {
        $<ptr>$ = new node("nt", "argument");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2); 
        ast.add_edge($<ptr>$, $<ptr>3);   
    } |
    POW test {
        $<ptr>$ = new node("nt", "argument");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    } |
    '*' test {
        $<ptr>$ = new node("nt", "argument");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    }

comp_iter: comp_for {
        $<ptr>$ = $<ptr>1;    
    } | comp_if {
        $<ptr>$ = $<ptr>1;
    }
comp_for: cond_async FOR exprlist IN or_test comp_iter {
        $<ptr>$ = new node("nt", "comp_for");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
        ast.add_edge($<ptr>$, $<ptr>3);   
        ast.add_edge($<ptr>$, $<ptr>4);   
        ast.add_edge($<ptr>$, $<ptr>5);   
        ast.add_edge($<ptr>$, $<ptr>6);   
    }
cond_async: ASYNC {  
        $<ptr>$ = $<ptr>1;
    } | {
        $<ptr>$ = nullptr;
    }


comp_if: IF test_nocond {
        $<ptr>$ = new node("nt", "comp_if");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    } | IF test_nocond comp_iter {
        $<ptr>$ = new node("nt", "comp_if");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
        ast.add_edge($<ptr>$, $<ptr>3);   
    }

// not used in grammar, but may appear in "node" passed from Parser to Compiler
encoding_decl: NAME {
        $<ptr>$ = $<ptr>1;
    }

yield_expr: YIELD yield_arg {
        $<ptr>$ = new node("nt", "YieldExpression");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    } 
    | YIELD {
        $<ptr>$ = $<ptr>1;
    }

yield_arg: FROM test {
        $<ptr>$ = new node("nt", "YieldArguments");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    } 
    | testlist {
        $<ptr>$ = $<ptr>1;
    }

%%


int main(int argc, char *argv[]){
    /* yydebug = 1  */
    indents.push(0);
    yyparse();
}
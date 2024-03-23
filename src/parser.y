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
    extern FILE * yyin;
    void yyerror(char * s){
    fprintf(stderr, "Error! Line Number %d, message: %s\n", yylineno, s);
    }
    void yyerror(string s){
    fprintf(stderr, "Error! Line Number %d, message: %s\n", yylineno, s.c_str());
    }
    extern stack<int> indents;
    symbol_table* present_table;
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
    $<ptr>$ = new node("nt", "file input");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.graphviz($<ptr>$);
    return 0;
}

nstatement: nstatement NEWLINE {
    $<ptr>$ = new node("nt", "new statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | nstatement stmt {
    $<ptr>$ = new node("nt", "new statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}
cond_arglist: arglist {
    $<ptr>$ = $<ptr>1;
}
| {
    $<ptr>$ = NULL;
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
    $<ptr>$ = new node("nt", "condition arrowtest");
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
    $<ptr>$ = new node("nt", "Typed Arguments List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
  | '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma {
    $<ptr>$ = new node("nt", "Typed Arguments List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
  }
  | POW tfpdef cond_comma {
    $<ptr>$ = new node("nt", "Typed Arguments List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
  }
conds_comma_startfpdefcondcomma: ',' {
        $<ptr>$ = $<ptr>1;
    }
    | ',' POW tfpdef cond_comma {
        $<ptr>$ = new node("nt", "condition comma start condition comma");
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
            $<ptr>$ = new node("nt", "condition star or star star");
            ast.add_node($<ptr>$);
            ast.add_edge($<ptr>$, $<ptr>1);
            ast.add_edge($<ptr>$, $<ptr>2);
            ast.add_edge($<ptr>$, $<ptr>3);
            ast.add_edge($<ptr>$, $<ptr>4);
        }
      | POW tfpdef cond_comma {
        $<ptr>$ = new node("nt", "condition star or star star");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
      }
      | {
        $<ptr>$ = NULL;
      }
cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar {
        $<ptr>$ = new node("nt", "condition comma or condition star or star star");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
    } 
    | {
        $<ptr>$ = NULL;
    }
close_comma_tfpdef_condeqtest: close_comma_tfpdef_condeqtest ',' tfpdef cond_eqtest {
    $<ptr>$ = new node("nt", "close comma condition eqtest");
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
    $<ptr>$ = new node("nt", "name colon test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}


stmt: simple_stmt {
    $<ptr>$ = $<ptr>1;
} | compound_stmt {
    $<ptr>$ = $<ptr>1;
}
simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE {
        $<ptr>$ = new node("nt", "simple statement");
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
close_small_stmt: close_small_stmt ';' small_stmt {
        $<ptr>$ = new node("nt", "close small statement");
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
}
| pass_stmt {
    $<ptr>$ = $<ptr>1;
}
| flow_stmt {
    $<ptr>$ = $<ptr>1;
}
| global_stmt {
    $<ptr>$ = $<ptr>1;
}
  | assert_stmt {
    $<ptr>$ = $<ptr>1;
  }
expr_stmt: test anna_or_auga_or_eqtestlist {
    $<ptr>$ = new node("nt", "expression statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
close_eqtestlist: '=' test close_eqtestlist {
                    $<ptr>$ = new node("nt", "close yield or test star");
                    ast.add_node($<ptr>$);
                    ast.add_edge($<ptr>$, $<ptr>1);
                    ast.add_edge($<ptr>$, $<ptr>2);
                    ast.add_edge($<ptr>$, $<ptr>3);
            }
                        | {
                            $<ptr>$ = NULL;
                        }
annassign: ':' test cond_eqtest {
    $<ptr>$ = new node("nt", "Annotated Assignment");
    // ast.add_node($<ptr>$);
    // $<ptr>$ = $<ptr>1;
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
cond_eqtest: '=' test {
        $<ptr>$ = new node("nt", "condition equal test");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
    }
      | {
        $<ptr>$ = NULL;
      }
anna_or_auga_or_eqtestlist: annassign {
    $<ptr>$ = $<ptr>1;
} | augassign test {
    $<ptr>$ = new node("nt", "Assignment");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | close_eqtestlist {
    $<ptr>$ = $<ptr>1;
}
              
close_commatest: close_commatest ',' test {
    $<ptr>$ = new node("nt", "close commatest");
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
pass_stmt: PASS{
    $<ptr>$ = new node("nt", "Pass Statement");
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

break_stmt: BREAK {
    $<ptr>$ = new node("nt", "Break Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

continue_stmt: CONTINUE {
    $<ptr>$ = new node("nt", "Continue Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

return_stmt: RETURN cond_testlist{
    $<ptr>$ = new node("nt", "Return Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

cond_testlist: test{
      $<ptr>$ = $<ptr>1;
} | {
      $<ptr>$ = nullptr;
}
raise_stmt: RAISE cond_from_test{
    $<ptr>$ = new node("nt", "Raise Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
cond_from_test: test {
    $<ptr>$ = $<ptr>1;
}| test FROM test {
    $<ptr>$ = new node("nt", "condition from test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}| {    
    $<ptr>$ = nullptr;
}

global_stmt: GLOBAL NAME close_comma_name{
    $<ptr>$ = new node("nt", "Global Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
close_comma_name: close_comma_name ',' NAME{
    $<ptr>$ = new node("nt", "Close Comma Name");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

assert_stmt: ASSERT test{
    $<ptr>$ = new node("nt", "Assert Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | ASSERT test ',' test{
    $<ptr>$ = new node("nt", "Assert Statement");
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
} | funcdef{
    $<ptr>$ = $<ptr>1;
} | classdef{
    $<ptr>$ = $<ptr>1;
}

if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite{
    $<ptr>$ = new node("nt", "If Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
}

cond_else_colon_suite: ELSE ':' suite{
    $<ptr>$ = new node("nt", "Else Colon Suite");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

close_eliftestsuite: close_eliftestsuite ELIF test ':' suite{
    $<ptr>$ = new node("nt", "Close Elif Test Suite");
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
    $<ptr>$ = new node("nt", "While Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
} | WHILE test ':' suite ELSE ':' suite{
    $<ptr>$ = new node("nt", "While Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
    ast.add_edge($<ptr>$, $<ptr>7);
}
for_stmt: FOR exprlist IN test ':' suite{
    $<ptr>$ = new node("nt", "For Statement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
} | FOR exprlist IN test ':' suite ELSE ':' suite{
    $<ptr>$ = new node("nt", "For Statement");
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

suite: simple_stmt{
    $<ptr>$ = $<ptr>1;
} | NEWLINE INDENT plus_stmt DEDENT{
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
    $<ptr>$ = new node("nt", "Plus Statement");
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
}  | or_test{
    $<ptr>$ = $<ptr>1;
}
or_test: and_test close_or_and_test{
    $<ptr>$ = new node("nt", "Or Test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_or_and_test: close_or_and_test OR and_test{
    $<ptr>$ = new node("nt", "Close Or And Test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}  

and_test: not_test close_and_not_test{
    $<ptr>$ = new node("nt", "And Test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_and_not_test: close_and_not_test AND not_test{
    $<ptr>$ = new node("nt", "Close And Not Test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

not_test: close_not comparison{
    $<ptr>$ = new node("nt", "Not Test");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_not: close_not NOT{
    $<ptr>$ = new node("nt", "Close Not");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}

comparison: expr close_compopexpr{
    $<ptr>$ = new node("nt", "Comparison");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_compopexpr: close_compopexpr comp_op expr{
    $<ptr>$ = new node("nt", "Close Comparison Operator Expression");
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
    $<ptr>$ = new node("nt", "Not in");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | IS{
    $<ptr>$ = $<ptr>1;
} | IS NOT{
    $<ptr>$ = new node("nt", "Is Not");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}


expr: xor_expr close_orxorexp{
    $<ptr>$ = new node("nt", "Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
close_orxorexp: close_orxorexp '|' xor_expr{
    $<ptr>$ = new node("nt", "Close Or Xor Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

xor_expr: and_expr close_xor_and_expr{
    $<ptr>$ = new node("nt", "Xor Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_xor_and_expr: close_xor_and_expr '^' and_expr{
    $<ptr>$ = new node("nt", "Close Xor And Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
} 

and_expr: shift_expr close_andshiftexpr{
    $<ptr>$ = new node("nt", "And Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_andshiftexpr: close_andshiftexpr '&' shift_expr{
    $<ptr>$ = new node("nt", "Close And Shift Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}  | {
$<ptr>$ = NULL;
} 

shift_expr: arith_expr close_lrs_arith_expr{
    $<ptr>$ = new node("nt", "Shift Expression");
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
    $<ptr>$ = new node("nt", "Close Leftright shift Arithmetic Expression");
    // ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

arith_expr: term close_plusminusterm{
    $<ptr>$ = new node("nt", "Arithmetic Expression");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_plusminusterm: close_plusminusterm '+' term{
    $<ptr>$ = new node("nt", "Close Plus Minus Term");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | close_plusminusterm '-' term{
    $<ptr>$ = new node("nt", "Close Plus Minus Term");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}  

term: factor close_muldivopsfactor{
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
    $<ptr>$ = new node("nt", "Close Mul Div Ops Factor");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

factor: close_plus_or_minus_or_not power{
    $<ptr>$ = new node("nt", "Factor");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_plus_or_minus_or_not: close_plus_or_minus_or_not plus_or_minus_or_not{
    $<ptr>$ = new node("nt", "Close Plus Or Minus Or Not");
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
    $<ptr>$ = $<ptr>1;
}

atom_expr: AWAIT atom close_trailer{
    $<ptr>$ = new node("nt", "Atomic Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | atom close_trailer{
    $<ptr>$ = new node("nt", "Atomic Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

close_trailer: close_trailer trailer{
    $<ptr>$ = new node("nt", "Close Trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | {
    $<ptr>$ = NULL;
}

atom: '(' cond_testlistcomp ')' {
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
}| '[' ']' {
    $<ptr>$ = new node("nt", "Atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
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

cond_testlistcomp:  testlist_comp{
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = NULL;
} 

multi_str: STRING{
    $<ptr>$ = $<ptr>1;
} | STRING multi_str{
    $<ptr>$ = new node("nt", "Multiple String");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

testlist_comp: test comp_for{
    $<ptr>$ = new node("nt", "Test List Comparision");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | test close_commatest cond_comma{
    $<ptr>$ = new node("nt", "Test List Comparision");
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
    $<ptr>$ = new node("nt", "Subscript List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

close_commasubscript: close_commasubscript ',' subscript{
    $<ptr>$ = new node("nt", "Close Comma Subscript");
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
    $<ptr>$ = new node("nt", "Slice Operation");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}| ':'{
    $<ptr>$ = $<ptr>1;
}

exprlist: expr close_comma_expr cond_comma{
    $<ptr>$ = new node("nt", "Expression List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}


close_comma_expr: close_comma_expr ',' expr {
    $<ptr>$ = new node("nt", "Close Comma Expression Or Star Expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}


dictorsetmaker:  testcoltest compfor_or_close_commatestcoltestorstarexpr_condcomma {
    $<ptr>$ = new node("nt", "DictOrSetMaker");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | some_non_terminal{
    $<ptr>$ = $<ptr>1;
}

testcoltest: test ':' test{
    $<ptr>$ = new node("nt", "Test Column Test Or Star expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}


close_commatestcoltestorstarrexpr: close_commatestcoltestorstarrexpr ',' testcoltest  {
    $<ptr>$ = new node("nt", "Close Comma Test Column Test Or Star expression");
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

some_non_terminal: test comp_for{
    $<ptr>$ = new node("nt", "Some Non Terminal");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | test close_commatest cond_comma{
    $<ptr>$ = new node("nt", "Some Non Terminal");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

classdef: CLASS NAME cond_parentheses_arglist ':' suite{
    $<ptr>$ = new node("nt", "Class Definition");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
}

cond_parentheses_arglist: '(' cond_arglist ')'{
    $<ptr>$ = new node("nt", "Condition Parentheses Argument List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

arglist: argument close_comma_argument cond_comma{
    $<ptr>$ = new node("nt", "Argument List");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

close_comma_argument: close_comma_argument ',' argument {
        $<ptr>$ = new node("nt", "Close Comma Argument");
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
comp_for: FOR exprlist IN or_test comp_iter {
        $<ptr>$ = new node("nt", "comp for");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
        ast.add_edge($<ptr>$, $<ptr>3);   
        ast.add_edge($<ptr>$, $<ptr>4);   
        ast.add_edge($<ptr>$, $<ptr>5);   
    }


comp_if: IF or_test {
        $<ptr>$ = new node("nt", "comp if");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    } | IF or_test comp_iter {
        $<ptr>$ = new node("nt", "comp if");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
        ast.add_edge($<ptr>$, $<ptr>3);   
    }


%%


int main(int argc, char *argv[]){
    /* yydebug = 1  */
    if(argc > 1){

    }
    else{
        cerr << "No Input file specified.\nParsing Terminated\n";
        return -1;
    }
    present_table = new symbol_table(SYMBOL_TABLE_TYPE::GLOBAL_TABLE, nullptr);
    yyin = fopen(argv[1], "r");
    if(yyin == NULL){
        cerr << "Failed to open input file.\n Terminated\n";
        return -1;
    }
    indents.push(0);
    if(!yyparse()) cerr << "Parsing successful\n";
    else return -1;
    return 0;
}
// Grammar for Python

// NOTE WELL: You should also follow all the steps listed at
// https://devguide.python.org/grammar/

// Start symbols for the grammar:
//      single_input is a single interactive statement;
//      file_input is a module or sequence of commands read from an input file;
//      eval_input is the input for the eval() functions.
// NB: compound_stmt in single_input is followed by extra NEWLINE!
%{
      #include "node.cpp"
      AST ast;
%}

%union{
    Node * ptr;
    string val;
}

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
%%

file_input: nstatement ENDMARKER
single_input: NEWLINE | simple_stmt | compound_stmt NEWLINE
nstatement: nstatement NEWLINE | nstatement stmt |
eval_input: testlist multiline ENDMARKER
multiline: multiline NEWLINE | 

decorator: '@' dotted_name cond_brack_cond_arglist NEWLINE
cond_brack_cond_arglist: brack_cond_arglist | 
brack_cond_arglist: '(' cond_arglist ')'
cond_arglist: arglist |
decorators: decorator | decorators decorator 

decorated: decorators defob
defob: classdef | funcdef | async_funcdef
async_funcdef: ASYNC funcdef
funcdef: DEF NAME parameters cond_arrowtest ':' suite
cond_arrowtest: ARROWOP test{
    
} 
| {
    $<ptr>$ = NULL;
}
parameters: '(' cond_typedargslist ')' {
    $<ptr>1 = new node("DELIMITER", "(");
    $<ptr>3 = new node("DELIMITER", ")");
    $<ptr>$ = new node("nt", "parameters");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_node($<ptr>3);
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
    $<ptr>1 = new node("DELIMITER", "*");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
  }
  | POW tfpdef cond_comma {
    $<ptr>1 = new node("DELIMITER", "**");
    $<ptr>$ = new node("nt", "typedargslist");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
  }
conds_comma_startfpdefcondcomma: ',' {
        $<ptr>1 = new node("DELIMITER", ",");
        $<ptr>$ = $<ptr>1;
    }
    | ',' POW tfpdef cond_comma {
        $<ptr>$ = new node("nt", "conds_comma_startfpdefcondcomma");
        $<ptr>1 = new node("DELIMITER", ",");
        $<ptr>2 = new node("DELIMTIER", "**");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_node($<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
    | {
        $<ptr>$ = NULL;
    }
cond_star_or_startstar: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma {
            $<ptr>1 = new node("DELIMITER", "*");
            $<ptr>$ = new node("nt", "cond_start_or_starstar");
            ast.add_node($<ptr>1);
            ast.add_node($<ptr>$);
            ast.add_edge($<ptr>$, $<ptr>1);
            ast.add_edge($<ptr>$, $<ptr>2);
            ast.add_edge($<ptr>$, $<ptr>3);
            ast.add_edge($<ptr>$, $<ptr>4);
        }
      | POW tfpdef cond_comma {
        $<ptr>1 = new node("OPERATOR", "**");
        $<ptr>$ = new node("nt", "cond_star_or_startstar");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_edge($<prt>$, $<ptr>1);
        ast.add_edge($<prt>$, $<ptr>2);
        ast.add_edge($<prt>$, $<ptr>3);
      }
      | {
        $<ptr>$ = NULL;
      }
cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar {
        $<ptr>1 = new node("DELIMITER", ",");
        $<ptr>$ = new node("nt", "cond_comma_or_constartortarstar");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
    } 
    | {
        $<ptr>$ = NULL;
    }
close_comma_tfpdef_condeqtest: close_comma_tfpdef_condeqtest ',' tfpdef cond_eqtest {
    $<ptr>2 = new node("DELIMITER", ",");
    $<ptr>$ = new node("nt", "close_comma_tfpdef_condeqtest");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>2);
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
    $<ptr>1 = new node("IDENTIFIER", $<val>1);
    ast.add_node($<ptr>1);
    $<ptr>$ = $<ptr>1;
}
| NAME ':' test {
    $<ptr>1 = new node("IDENTIFIER", $<val>1);
    $<ptr>2 = new node("DELIMITER", ":");
    $<ptr>$ = new node("nt", "tfpdef");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_node($<ptr>2);
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
    $<ptr>1 = new node("DELIMITER", "*");
    $<ptr>$ = new node("nt", "VarArgs");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
  }
  | POW vfpdef cond_comma {
    $<ptr>1 = new node("OPERATOR", "**");
    $<ptr>$ = new node("nt", "VarArgs")
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
  }
vfpdef: NAME {
    $<ptr>1 = new node("IDENTIFIER", $<val>1);
    $<ptr>$ = $<ptr>1;
};
close_comma_vfpdef_condeqtest: close_comma_vfpdef_condeqtest ',' vfpdef cond_eqtest {
    $<ptr>2 = new node("DELIMITER", ",");
    $<ptr>$ = new node("nt", "close_comma_vfpdef_condeqtest");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>2);
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
        $<ptr>$ = NULL
    }
cond_star_or_startstar_vf: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma
        {
            $<ptr>$ = new node("nt", "cond_star_or_startstar_vf");
            $<ptr>1 = new node("DELIMITER", "*");
            ast.add_node($<ptr>$);
            ast.add_node($<ptr>1);
            ast.add_edge($<ptr>$, $<ptr>1);
            ast.add_edge($<ptr>$, $<ptr>2);
            ast.add_edge($<ptr>$, $<ptr>3);
            ast.add_edge($<ptr>$, $<ptr>4);
        }
      | POW vfpdef cond_comma {
        $<ptr>1 = new node("OPERATOR", "**");
        $<ptr>$ = new node("nt", "cond_star_or_startstar_vf");
        ast.add_node($<ptr>1);
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
      }
      | {
        $<ptr>$ = NULL;
      }
conds_comma_starvfpdefcondcomma: ',' {
    $<ptr>1 = new node("DELIMITER", ",");
    $<ptr>$ = $<ptr>1;
} 
| ',' POW vfpdef cond_comma {
        $<ptr>1 = new node("DELIMITER", ",");
        $<ptr>2 = new node("OPERATOR", "**");
        $<ptr>$ = new node("nt", "conds_comma_starvfpdefcondcomma");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_node($<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
    | {
        $<ptr>$ = NULL;
    }
cond_comma_or_condstarorstartstarvf: ',' cond_star_or_startstar_vf {
    $<ptr>1 = new node("DELIMITER", ",");
    $<ptr>$ = new node("nt", "comma or starstar");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
| {
    $<ptr>$ = NULL
} 

stmt: simple_stmt {
    $<ptr>$ = $<ptr>1;
} | compound_stmt {
    $<ptr>$ = $<ptr>1;
}
simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE {
        $<ptr>4 = new node("NEWLINE", "NEWLINE");
        ast.add_node($<ptr>4);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
        ast.add_edge($<ptr>$, $<ptr>4);
    }
close_small_stmt: close_small_stmt ';' small_stmt {
        $<ptr>2 = new node("DELIMITER", ";");
        $<ptr>$ = new node("nt", "close_small_stmt");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
    }
        | {
            $<ptr>$ = NULL;
        }
cond_semi_colon: ';' {
    $<ptr>1 = new node("DELIMITER", ";");
    $<ptr>$ = new node("nt", "Cond_semicolon");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>$);
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
                $<ptr>$ = $<ptr1>$;
            }

 | testlist_star_expr {
            $<ptr>$ = $<ptr>1;
 }
close_yield_or_test_star: close_yield_or_test_star '=' yield_or_test_star {
                    $<ptr>$ = new node("nt", "close_yield_or_test_star");
                    $<ptr>2 = new node("DELIMITER", "=");
                    ast.add_node($<ptr>$);
                    ast.add_node($<ptr>2);
                    ast.add_edge($<ptr>$, $<ptr>1);
                    ast.add_edge($<ptr>$, $<ptr>2);
                    ast.add_edge($<ptr>$, $<ptr>3);
            }
                        | {
                            $<ptr>$ = NULL;
                        }
annassign: ':' test cond_eqtest {
    $<ptr>$ = new node("nt", "annasign");
    $<ptr>1 = new node("DELIMITER", ":");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
cond_eqtest: '=' test {
        $<ptr>$ = new node("nt", "cond_eqtest");
        $<ptr>1 = new node("OPERATOR", "=");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
    }
      | {
        $<ptr>$ = NULL;
      }
anna_or_auga_or_closeyield: annassign | augassign yield_or_test |
                     close_yield_or_test_star
testlist_star_expr: test_or_starexp close_commatest_or_starexp cond_comma {
    $<ptr>$ = new node("nt", "testlist star expression");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}
test_or_starexp: test {
    $<ptr>$ = $<ptr>1;
}
 | star_expr {
    $<ptr>$ = $<ptr>1;
 }
close_commatest_or_starexp: close_commatest_or_starexp ',' test_or_starexp {
    $<ptr>2 = new node("Delimiter", ",");
    $<ptr>$ = new node("nt", "close_commatest_or_starexp");
    ast.add_node($<ptr>$);
    ast.add_node($<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} 
| {
    $<ptr>$ = NULL
}
cond_comma: ','{
    $<ptr>1 = new node("Delimiter", ",");
    ast.add_node($<ptr>1);
    $<ptr>$ = $<ptr>1
} 
| {
    $<ptr>$ = NULL;
}
augassign: ADDASSIGN{
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "+=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
        }
         | SUBASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "-=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
         }
         | MULASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "*=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
         }
          | ATASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "@=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
          }
          | DIVASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "/=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
          }
          | MODASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "%=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
          }
          | ANDASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "&=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
          }
          | ORASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "|=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
          }
            | XORASSIGN {
                auto p = new node("nt", "Operator");
                auto anode = new node("OPERATOR", "^=");
                ast.add_node(p);
                ast.add_node(anode);
                ast.add_edge(p, anode);
                $<ptr>$ = p;
                $<ptr>1 = anode;
            }
           | LSASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "<<=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
           } 
           | RSASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", ">>=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
           }
           | POWASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "**=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
           }
           | IDIVASSIGN {
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "//=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anode);
            $<ptr>$ = p;
            $<ptr>1 = anode;
           }
// For normal and annotated assignments, additional restrictions enforced by the interpreter
del_stmt: DEL exprlist {
    auto p = new node("nt", "DelStatement");
    auto delnode = new node("KEYWORD", "DEL");
    ast.add_node(p);
    ast.add_node(delnode);
    ast.add_edge(p, delnode);
    ast.add_edge(p, $<ptr>2);
    $<ptr>$ = p;
    $<ptr>1 = delnode;
}
pass_stmt: PASS{
    auto p = new node("nt", "PassStatement");
    auto pnode = new node("KEYWORD", "PASS");
    ast.add_node(p);
    ast.add_node(pnode);
    ast.add_edge(p, pnode);
    $<ptr>$ = p;
    $<ptr>1 = pnode;
}
flow_stmt: break_stmt {
            $<ptr>$ = $<ptr>1;
        } 
        | continue_stmt {
            $<ptr>$ = $<ptr>1
        }
        | return_stmt {
            $<ptr>$ = $<ptr>1
        }
        | raise_stmt {
            $<ptr>$ = $<ptr>1
        }
        | yield_stmt{
            $<ptr>$ = $<ptr>1
        }

break_stmt: BREAK {
    auto p = new node("nt", "BreakStatement");
    ast.add_node(p);
    auto p1 = new node("KEYWORD", "break");
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
}

continue_stmt: CONTINUE {
    auto p = new node("nt", "ContinueStatement");
    ast.add_node(p);
    auto p1 = new node("KEYWORD", "continue");
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
}

return_stmt: RETURN cond_testlist{
    auto p = new node("nt", "ReturnStatement");
    auto rnode = new node("KEYWORD", "continue");
    ast.add_node(p);
    ast.add_node(rnode);
    ast.add_edge(p, rnode);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
    $<ptr>1 = rnode;
}

cond_testlist: testlist{
      $<ptr>$ = $<ptr>1;
} | {
      $<ptr>$ = nullptr;
}
yield_stmt: yield_expr {
    $<ptr>$ = $<ptr>1
}
raise_stmt: RAISE cond_from_test{
    // 
    auto p = new node("nt", "RaiseStatement");
    auto rnode = new node("KEYWORD", "raise");
    ast.add_node(p);
    ast.add_node(rnode);
    ast.add_edge(p, rnode);
    ast.add_edge(p, $<ptr>2);
    $<ptr>$ = p;
    $<ptr>1 = rnode;
} | RAISE cond_from_test {
    auto p = new node("nt", "RaiseStatement");
    auto rnode = new node("KEYWORD", "raise");
    ast.add_node(p);
    ast.add_node(rnode);
    ast.add_edge(p, rnode);
    $<ptr>$ = p;
    <ptr>1 = rnode;
}
cond_from_test: test | test FROM test | 
import_stmt: import_name | import_from
import_name: IMPORT dotted_as_names{
    // 
    auto p = new node("nt", "ImportStatement");
    auto inode = new node("KEYWORD", "import");
    ast.add_node(p);
    ast.add_node(inode);
    ast.add_edge(p, inode);
    ast.add_edge(p, $<ptr>2);
    $<ptr>$ = p;
    $<ptr>1 = inode;
}
// note below: the ('.' | ELLIPSIS) is necessary because ELLIPSIS is tokenized as ELLIPSIS
import_from: FROM closeplusdotorellipsisname_or_plusdotellip
              IMPORT star_or_import_parentheses_or_import
              
closeplusdotorellipsisname_or_plusdotellip: close_dot_or_ellipsis dotted_name{
    // 
    $<ptr>$ = new node("nt", "closeplusdotorellipsisname_or_plusdotellip");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | plus_dot_or_ellipsis {
    auto p = new node("nt", "ImportFromStatement");
    auto p1 = new node("KEYWORD", "plus_dot_or_ellipsis");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} 

/* star_or_import_parentheses_or_import: '*' | '(' import_as_names ')' | import_as_names
plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis | ELLIPSIS plus_dot_or_ellipsis | '.' | ELLIPSIS
close_dot_or_ellipsis: plus_dot_or_ellipsis|  */
star_or_import_parentheses_or_import: '*'{
    // 
    auto p = new node("nt", "star_or_import_parentheses_or_import");
    auto p1 = new node("KEYWORD", "*");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} | '(' import_as_names ')'{
    auto p = new node("nt", "star_or_import_parentheses_or_import");
    auto p1 = new node("KEYWORD", "(");
    auto p3 = new node("KEYWORD", ")");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(3);
    ast.add_edge(p, p1);
    ast.add_edge(p, p3);
    ast.add_edge(p, $<ptr>3);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>3 = p3;
} | import_as_names{
    auto p = new node("nt", "star_or_import_parentheses_or_import");
    ast.add_node(p);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
}

plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis{
    // 
    auto p = new node("nt", "plus_dot_or_ellipsis");
    auto p1 = new node("KEYWORD", ".");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} | ELLIPSIS plus_dot_or_ellipsis{
    auto p = new node("nt", "plus_dot_or_ellipsis");
    auto p1 = new node("Delimiter", "...");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} | '.'{
    auto p = new node("nt", "plus_dot_or_ellipsis");
    auto p1 = new node("Delimiter", ".");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} | ELLIPSIS{
    auto p = new node("nt", "plus_dot_or_ellipsis");
    auto p1 = new node("Delimiter", "...");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
}

close_dot_or_ellipsis: plus_dot_or_ellipsis{
    // 
    $<ptr>$ = $<ptr>1;
} | {
    $<ptr>$ = nullptr;
}

import_as_name: NAME{
    // 
    auto p = new node("nt", "ImportAsName");
    auto p1 = new node("IDENTIFIER", $<val>1);
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} | NAME AS NAME{
    auto p = new node("nt", "ImportAsName");
    auto p1 = new node("IDENTIFIER", $<val>1);
    auto p2 = new node("KEYWORD", "as");
    auto p3 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p2);
    ast.add_node(p3);
    ast.add_edge(p, p1);
    ast.add_edge(p, p2);
    ast.add_edge(p, p3);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>2 = p2;
    $<ptr>3 = p3;
}

dotted_as_name: dotted_name{
    auto p = new node("nt", "DottedAsName");
    ast.add_node(p);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
} | dotted_name AS NAME{
    auto p = new node("nt", "DottedAsName");
    auto p1 = new node("KEYWORD", "as");
    auto p2 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p2);
    ast.add_edge(p, p1);
    ast.add_edge(p, p2);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>2 = p2;
}

import_as_names: import_as_name close_commaimportasname cond_comma{
    auto p = new node("nt", "ImportAsNames");
    ast.add_node(p);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
}

close_commaimportasname: close_commaimportasname ',' import_as_name{
    // 
    auto p = new node("nt", "CloseCommaImportAsName");
    auto p2 = new node("Delimiter", ",");
    ast.add_node(p);
    ast.add_node(p2);
    ast.add_edge(p, p2);
    ast.add_edge(p, $<ptr>2);
    $<ptr>$ = p;
    $<ptr>2 = p1;
} | {
    $<ptr>$ = NULL;
}

dotted_as_names: dotted_as_name close_commadottedasname{
    auto p = new node("nt", "DottedAsNames");
    ast.add_node(p);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
}

close_commadottedasname: close_commadottedasname ',' dotted_as_name{
    auto p = new node("nt", "CloseCommaDottedAsName");
    auto p2 = new node("Delimiter", ",");
    ast.add_node(p);
    ast.add_node(p2);
    ast.add_edge(p, p2);
    ast.add_edge(p, $<ptr>2);
    $<ptr>$ = p;
    $<ptr>2 = p1;
} | {
    $<ptr>$ = NULL;
}  

dotted_name: NAME close_dotted_name{
    auto p = new node("nt", "DottedName");
    auto p1 = new node("IDENTIFIER", $<val>1);
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
}

close_dotted_name: close_dotted_name '.' NAME{
    auto p = new node("nt", "CloseDottedName");
    auto p2 = new node("Delimiter", ".");
    auto p3 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    ast.add_node(p2);
    ast.add_node(p3);
    ast.add_edge(p, p2);
    ast.add_edge(p, p3);
    $<ptr>$ = p;
    $<ptr>2 = p2;
    $<ptr>3 = p3;
} | {
    $<ptr>$ = NULL;
} 

global_stmt: GLOBAL NAME close_comma_name{
    auto p = new node("nt", "GlobalStatement");
    auto p1 = new node("KEYWORD", "global");
    auto p2 = new node("IDENTIFIER", $<val>2);
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p2);
    ast.add_edge(p, p1);
    ast.add_edge(p, p2);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>2 = p2;
}
nonlocal_stmt: NONLOCAL NAME close_comma_name{
    auto p = new node("nt", "NonlocalStatement");
    auto p1 = new node("KEYWORD", "nonlocal");
    auto p2 = new node("IDENTIFIER", $<val>2);
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p2);
    ast.add_edge(p, p1);
    ast.add_edge(p, p2);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>2 = p2;
}
close_comma_name: close_comma_name ',' NAME{
    auto p = new node("nt", "CloseCommaName");
    auto p2 = new node("Delimiter", ",");
    auto p3 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    ast.add_node(p2);
    ast.add_node(p3);
    ast.add_edge(p, p2);
    ast.add_edge(p, p3);
    $<ptr>$ = p;
    $<ptr>2 = p2;
    $<ptr>3 = p3;
} | {
    $<ptr>$ = NULL;
}

assert_stmt: ASSERT test{
    auto p = new node("nt", "AssertStatement");
    auto p1 = new node("KEYWORD", "assert");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;
} | ASSERT test ',' test{
    auto p = new node("nt", "AssertStatement");
    auto p1 = new node("KEYWORD", "assert");
    auto p3 = new node("KEYWORD", ",");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p3);
    ast.add_edge(p, p1);
    ast.add_edge(p, p3);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>3 = p3;
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
    auto p = new node("nt", "AsyncStatement");
    auto p1 = new node("KEYWORD", "async");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_edge(p, p1);
    $<ptr>$ = p;
    $<ptr>1 = p1;    
}

funcdef_or_withstmt_or_forstmt: funcdef{
    $<ptr>$ = $<ptr>1;
} | with_stmt{
    $<ptr>$ = $<ptr>1;
} | for_stmt{
    $<ptr>$ = $<ptr>1;
}

if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite{
    auto p = new node("nt", "IfStatement");
    auto p1 = new node("KEYWORD", "if");
    auto p3 = new node("DELIMITER", ":");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p3);
    ast.add_edge(p, p1);
    ast.add_edge(p, p3);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>3 = p3;
}

cond_else_colon_suite: ELSE ':' suite{
    auto p = new node("nt", "ElseColonSuite");
    auto p1 = new node("KEYWORD", "else");
    auto p2 = new node("DELIMITER", ":");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p2);
    ast.add_edge(p, p1);
    ast.add_edge(p, p2);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>2 = p2;
} | {
    $<ptr>$ = NULL;
}

close_eliftestsuite: close_eliftestsuite ELIF test ':' suite{
    auto p = new node("nt", "CloseElifTestSuite");
    auto p2 = new node("KEYWORD", "elif");
    auto p4 = new node("DELIMITER", ":");
    ast.add_node(p);
    ast.add_node(p2);
    ast.add_node(p4);
    ast.add_edge(p, p2);
    ast.add_edge(p, p4);
    $<ptr>$ = p;
    $<ptr>2 = p2;
    $<ptr>4 = p4;
} | {
    $<ptr>$ = NULL;
}  

while_stmt: WHILE test ':' suite{
    auto p = new node("nt", "WhileStatement");
    auto p1 = new node("KEYWORD", "while");
    auto p3 = new node("DELIMITER", ":");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p3);
    ast.add_edge(p, p1);
    ast.add_edge(p, p3);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>3 = p3;
} | WHILE test ':' suite ELSE ':' suite{
    auto p = new node("nt", "WhileStatement");
    auto p1 = new node("KEYWORD", "while");
    auto p3 = new node("DELIMITER", ":");
    auto p5 = new node("KEYWORD", "else");
    auto p6 = new node("DELIMITER", ":");
    ast.add_node(p);
    ast.add_node(p1);
    ast.add_node(p3);
    ast.add_node(p5);
    ast.add_node(p6);
    ast.add_edge(p, p1);
    ast.add_edge(p, p3);
    ast.add_edge(p, p5);
    ast.add_edge(p, p6);
    $<ptr>$ = p;
    $<ptr>1 = p1;
    $<ptr>3 = p3;
    $<ptr>5 = p5;
    $<ptr>6 = p6;
}
for_stmt: FOR exprlist IN testlist ':' suite | FOR exprlist IN testlist ':' suite ELSE ':' suite
try_stmt: TRY ':' suite plus_except_colsuite cond_else_colon_suite cond_finallycolsuite | TRY ':' suite FINALLY ':' suite
cond_finallycolsuite: FINALLY ':' suite | 
plus_except_colsuite: except_clause ':' suite | plus_except_colsuite except_clause ':' suite 
with_stmt: WITH with_item close_commawithitem  ':' suite
close_commawithitem: close_commawithitem ',' with_item | 
with_item: test | test AS expr

// NB compile.c makes sure that the default except clause is last 
except_clause: EXCEPT cond_testasname
cond_testasname: test | test AS NAME | 
suite: simple_stmt | NEWLINE INDENT plus_stmt DEDENT
plus_stmt: stmt | plus_stmt stmt
test: or_test IF or_test ELSE test | lambdef | or_test
test_nocond: or_test | lambdef_nocond
lambdef: LAMBDA varargslist ':' test | LAMBDA ':' test
lambdef_nocond: LAMBDA varargslist ':' test_nocond | LAMBDA ':' test_nocond
or_test: and_test close_or_and_test
close_or_and_test: close_or_and_test OR and_test | 
and_test: not_test close_and_not_test
close_and_not_test: close_and_not_test AND not_test | 
not_test: close_not comparison
close_not: close_not NOT |
comparison: expr close_compopexpr
close_compopexpr: close_compopexpr comp_op expr | 
// <> isn't actually a valid comparison operator in Python. It's here for the
// sake of a __future__ import described in PEP 401 (which really works :-)
comp_op: '<'|'>'|EQUAL|GEQ|LEQ|LTORGT|NEQ|IN|NOT IN|IS|IS NOT
star_expr: '*' expr
expr: xor_expr close_orxorexp
close_orxorexp: close_orxorexp '|' xor_expr  | 
xor_expr: and_expr close_xor_and_expr
close_xor_and_expr: close_xor_and_expr '^' and_expr | 
and_expr: shift_expr close_andshiftexpr
close_andshiftexpr: close_andshiftexpr '&' shift_expr  | 
shift_expr: arith_expr close_lrs_arith_expr
left_right_shift: LEFTSHIFT | RIGHTSHIFT
close_lrs_arith_expr: close_lrs_arith_expr left_right_shift arith_expr  | 
arith_expr: term close_plusminusterm
close_plusminusterm: close_plusminusterm '+' term  | close_plusminusterm '-' term  |
term: factor close_muldivopsfactor
group_muldivremops: '*' | '@' | '/' | '%' | IDIV 
close_muldivopsfactor: close_muldivopsfactor group_muldivremops factor  | 

factor: close_plus_or_minus_or_not power
close_plus_or_minus_or_not: close_plus_or_minus_or_not plus_or_minus_or_not | 
plus_or_minus_or_not: '+' | '-' | '~'
power: atom_expr POW factor | atom_expr
atom_expr: AWAIT atom close_trailer | atom close_trailer
close_trailer: close_trailer trailer  |

atom: '(' cond_yield_or_testlist ')' |
       '[' testlist_comp ']' | '[' ']'
       '{' dictorsetmaker '}' | '{' '}'
       NAME | NUMBER | multi_str | ELLIPSIS | NONE | TRUE | FALSE
cond_yield_or_testlist: yield_expr | testlist_comp | 
multi_str: STRING | STRING multi_str
testlist_comp: test_or_starexp comp_for | test_or_starexp close_commatest_or_starexp cond_comma 
trailer: '(' cond_arglist ')' | '[' subscriptlist ']' | '.' NAME
subscriptlist: subscript close_commasubscript cond_comma
close_commasubscript: close_commasubscript ',' subscript  | 
subscript: test | cond_test ':' cond_test cond_sliceop
cond_test: test |
cond_sliceop: sliceop |  
sliceop: ':' test | ':'
exprlist: expr_or_star_expr close_comma_expr_or_star_expr cond_comma
expr_or_star_expr: expr | star_expr
close_comma_expr_or_star_expr: close_comma_expr_or_star_expr ',' expr_or_star_expr  | 
testlist: test close_comma_test cond_comma
close_comma_test: close_comma_test ',' test | 
dictorsetmaker:  testcoltest_or_starrexpr compfor_or_close_commatestcoltestorstarexpr_condcomma |
                  some_non_terminal
testcoltest_or_starrexpr: test ':' test | POW expr
close_commatestcoltestorstarrexpr: close_commatestcoltestorstarrexpr ',' testcoltest_or_starrexpr  | 
compfor_or_close_commatestcoltestorstarexpr_condcomma: comp_for | close_commatestcoltestorstarrexpr cond_comma
some_non_terminal: test_or_starexp comp_for | test_or_starexp close_commatest_or_starexp cond_comma

classdef: CLASS NAME cond_parentheses_arglist ':' suite
cond_parentheses_arglist: '(' cond_arglist ')' | 
arglist: argument close_comma_argument cond_comma
close_comma_argument: close_comma_argument ',' argument  | 

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
        $<ptr>$ = new node("nt", "argument");
        ast.add_node($<ptr>$);
        ast.add_edge($<ptr>$, $<ptr>1);
    } |
    test '=' test {
        $<ptr>$ = new node("nt", "argument");
        ast.add_node($<ptr>$);
        $<ptr>2 = new node("DELIMITER", "=");
        ast.add_node($<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2); 
        ast.add_edge($<ptr>$, $<ptr>3);   
    } |
    POW test {
        $<ptr>$ = new node("nt", "argument");
        $<ptr>1 = new node("operator", "**");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    } |
    '*' test {
        $<ptr>$ = new node("nt", "argument");
        $<ptr>1 = new node("operator", "*");
        ast.add_node($<ptr>$);
        ast.add_node($<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>1);   
        ast.add_edge($<ptr>$, $<ptr>2);   
    }

comp_iter: comp_for {
        $<ptr>$ = new node("nt", "comp_for");
        ast.add_edge($<ptr>$, $<ptr>1);       
    } | comp_if {
        $<ptr>$ = new node("nt", "comp_for");
        ast.add_edge($<ptr>$, $<ptr>1);
    }
comp_for: cond_async FOR exprlist IN or_test comp_iter {
        auto p = new node("nt", "comp_for");
        $<ptr>$ = p;
        ast.add_node(p);
        ast.add_edge(p, $<ptr>1);
        auto p2 = new node("KEYWORD", "for");
        $<ptr>2 = p2;
        ast.add_node(p2);
        ast.add_edge(p, p2);
        ast.add_edge(p, $<ptr>3);
        auto p4 = new node("KEYWORD", "in");
        $<ptr>4 = p4;
        ast.add_node(p4);
        ast.add_edge(p, p4);
        ast.add_edge(p, $<ptr>5);
        ast.add_edge(p, $<ptr>6);    
    }
cond_async: ASYNC {
        auto p = new node("nt", "cond_async");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "async");
        $<ptr>1 = p1;
        ast.add_node(p1);
        ast.add_edge(p, p1);
    } | {
        $<ptr>$ = nullptr;
    }


comp_if: IF test_nocond {
        auto p = new node("nt", "comp_if");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "if");
        $<ptr>1 = p1;
        ast.add_node(p1);
        auto p2 = test_nocond("nt", "test_nocond");
        $<ptr>2 = p2;
        ast.add_node(p2);
        ast.add_edge(p, p1);
        ast.add_edge(p, p2);  
    } | IF test_nocond comp_iter {
        auto p = new node("nt", "comp_if");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "if");
        $<ptr>1 = p1;
        ast.add_node(p1);
        auto p2 = test_nocond("nt", "test_nocond");
        $<ptr>2 = p2;
        ast.add_node(p2);
        auto p3 = test_nocond("nt", "comp_iter");
        $<ptr>3 = p3;
        ast.add_node(p3);
        ast.add_edge(p, p1);
        ast.add_edge(p, p2);
        ast.add_edge(p, p3); 
    }

// not used in grammar, but may appear in "node" passed from Parser to Compiler
encoding_decl: NAME {
        auto p = new node("nt", "EncodingDeclaration");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("IDENTIFIER", $<val>1);
        $<ptr>1 = p1;
        ast.add_node(p1);
        ast.add_edge(p, p1);   
    }

yield_expr: YIELD yield_arg {
        auto p = new node("nt", "YieldExpression");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "yield");
        $<ptr>1 = p1;
        ast.add_node(p1);
        ast.add_edge(p, p1);
        ast.add_edge(p, $2);
    } 
    | YIELD {
        auto p = new node("nt", "YieldExpression");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "yield");
        $<ptr>1 = p1;
        ast.add_node(p1);
        ast.add_edge(p, p1); 
    }

yield_arg: FROM test {
        auto p = new node("nt", "YieldArguments");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "from");
        ast.add_node(p1);
        $<ptr>1 = p1;
        ast.add_edge(p, p1);
        ast.add_edge(p, $2);
    } 
    | testlist {
        $<ptr>$ = $<ptr>1;
    }

%%


int main(int argc, char *argv){



}
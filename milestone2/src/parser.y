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
    extern char * yytext;
    extern FILE * yyin;
    node * root;
    void yyerror(char * s){
    fprintf(stderr, "Error! Line Number %d, token: %s, message: %s\n", yylineno, yytext, s);
    }
    void yyerror(string s){
    fprintf(stderr, "Error! Line Number %d, token: %s, message: %s\n", yylineno, yytext, s.c_str());
    }
    set<string> native_types{"int", "str", "list", "set", "dict"};
    extern stack<int> indents;
    extern vector<string> headers;
    extern symbol_table* present_table;
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
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    root = $<ptr>$;
    ast.graphviz($<ptr>$);
    return 0;
}

nstatement: nstatement NEWLINE {
    $<ptr>$ = new node("nt", "nstatement");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | nstatement stmt {
    $<ptr>$ = new node("nt", "nstatement");
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
funcdef: DEF NAME parameters ARROWOP test ':' suite {
    // cerr << "fundef\n";
    // present_table = present_table->parent;
    $<ptr>$ = new node("nt", "funcdef");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
    ast.add_edge($<ptr>$, $<ptr>7);
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

typedargslist: tfpdef cond_eqtest{
    $<ptr>$ = new node("nt", "typedarglist");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    // cerr << "ptht " << $<ptr>$ << ' ' << $<ptr>$->children.size() << '\n';
} | typedargslist ',' tfpdef cond_eqtest{
    $<ptr>$ = new node("nt", "typedarglist");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}

tfpdef: NAME ':' test {
    $<ptr>$ = new node("nt", "tfpdef");
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
simple_stmt: small_stmts cond_semi_colon NEWLINE {
        $<ptr>$ = new node("nt", "simple_stmt");
        ast.add_edge($<ptr>$, $<ptr>1);
        ast.add_edge($<ptr>$, $<ptr>2);
        ast.add_edge($<ptr>$, $<ptr>3);
    }

small_stmts: small_stmt {
    $<ptr>$ = $<ptr>1;
} | small_stmts ';' small_stmt {
    $<ptr>$ = new node("nt", "small_stmts");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
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
expr_stmt: test annassign {
    $<ptr>$ = new node("nt", "expr_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | test augassign test {
    $<ptr>$ = new node("nt", "expr_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | test '=' test { 
    $<ptr>$ = new node("nt", "expr_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | test {
    $<ptr>$ = new node("nt", "expr_stmt");
    ast.add_edge($<ptr>$, $<ptr>1);
}
annassign: ':' test '=' test {
    $<ptr>$ = new node("nt", "annasign");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
} | ':' test { 
    $<ptr>$ = new node("nt", "annasign");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
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
    $<ptr>$ = $<ptr>1;
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

break_stmt: BREAK {
    $<ptr>$ = new node("nt", "break_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

continue_stmt: CONTINUE {
    $<ptr>$ = new node("nt", "continue_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
}

return_stmt: RETURN test{
    $<ptr>$ = new node("nt", "return_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | RETURN  {
    $<ptr>$ = new node("nt", "return_stmt");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
}

global_stmt: GLOBAL namelist{
    $<ptr>$ = new node("nt", "global_stmt");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

namelist: NAME {
    $<ptr>$ = $<ptr>1;
} | namelist ',' NAME {
    $<ptr>$ = new node("nt", "namelist");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}


compound_stmt: if_stmt{
    $<ptr>$ = $<ptr>1;
} | while_stmt{
    $<ptr>$ = $<ptr>1;
} | for_stmt{
    $<ptr>$ = $<ptr>1;
} | funcdef{
    // cerr << "here\n";
    $<ptr>$ = $<ptr>1;
} | classdef{
    $<ptr>$ = $<ptr>1;
}

if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite{
    $<ptr>$ = new node("nt", "if_stmt");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
}

cond_else_colon_suite: ELSE ':' suite{
    $<ptr>$ = new node("nt", "cond_else_colon_suite");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
}

close_eliftestsuite: close_eliftestsuite ELIF test ':' suite{
    $<ptr>$ = new node("nt", "close_eliftestsuite");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
} | {
    $<ptr>$ = NULL;
}  

while_stmt: WHILE test ':' suite{
    $<ptr>$ = new node("nt", "while_stmt");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
for_stmt: FOR NAME IN test ':' suite{
    $<ptr>$ = new node("nt", "for_stmt");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
    ast.add_edge($<ptr>$, $<ptr>6);
}

suite: simple_stmt{
    $<ptr>$ = $<ptr>1;
} | NEWLINE INDENT plus_stmt DEDENT{
    $<ptr>$ = new node("nt", "suite");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
}
plus_stmt: stmt{
    $<ptr>$ = $<ptr>1;
} | plus_stmt stmt{
    $<ptr>$ = new node("nt", "plus_stmt");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}
test: or_test{
    // cerr << "here test\n";
    $<ptr>$ = new node("nt", "test");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
}
or_test: and_test {
    $<ptr>$ = new node("nt", "or_test");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | or_test OR and_test {
    $<ptr>$ = new node("nt", "or_test");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

and_test: not_test{
    $<ptr>$ = new node("nt", "and_test");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | and_test AND not_test {
    $<ptr>$ = new node("nt", "and_test");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

not_test: NOT not_test {
    $<ptr>$ = new node("nt", "not_test");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | comparison {
    $<ptr>$ = new node("nt", "not_test");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
}

comparison: expr {
    $<ptr>$ = new node("nt", "comparison");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | comparison comp_op expr {
    $<ptr>$ = new node("nt", "comparison");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
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
    $<ptr>$ = new node("nt", "comp_op");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | IS{
    $<ptr>$ = $<ptr>1;
} | IS NOT{
    $<ptr>$ = new node("nt", "comp_op");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}


expr: xor_expr{
    // cerr << "here expr\n";
    $<ptr>$ = new node("nt", "expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | expr '|' xor_expr {
    $<ptr>$ = new node("nt", "expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

xor_expr: and_expr{
    $<ptr>$ = new node("nt", "xor_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | xor_expr '^' and_expr {
    $<ptr>$ = new node("nt", "xor_expr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
}

and_expr: shift_expr{
    $<ptr>$ = new node("nt", "and_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | and_expr '&' shift_expr{
    $<ptr>$ = new node("nt", "and_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}


shift_expr: arith_expr {
    $<ptr>$ = new node("nt", "shift_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | shift_expr LEFTSHIFT arith_expr {
    $<ptr>$ = new node("nt", "shift_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | shift_expr RIGHTSHIFT arith_expr {
    $<ptr>$ = new node("nt", "shift_expr");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);

}


arith_expr: term{
    $<ptr>$ = $<ptr>1;
} | arith_expr '+' term {
    $<ptr>$ = new node("nt", "arith_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | arith_expr '-' term {
    $<ptr>$ = new node("nt", "arith_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}


term: factor{
    // cerr<<"here term \n";
    $<ptr>$ = new node("nt", "term");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | term muldivremops factor {
    $<ptr>$ = new node("nt", "term");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

muldivremops: '*'{
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

factor: plus_or_minus_or_not factor{
    $<ptr>$ = new node("nt", "factor");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | power {
    // cerr<<"here factor \n";
    $<ptr>$ = new node("nt", "factor");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
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
    $<ptr>$ = new node("nt", "power");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | atom_expr{
    // <<"here power \n";
    $<ptr>$ = new node("nt", "power");
    ast.add_edge($<ptr>$, $<ptr>1);
}

atom_expr: atom {
    $<ptr>$ = new node("nt", "atom_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    // $<ptr>$ = $<ptr>1;
} | atom trailer {  // Function calls, object attr access only
    // cerr<<"here atom \n";
    $<ptr>$ = new node("nt", "atom_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | atom trailer trailer {  // Method calls inside object
    $<ptr>$ = new node("nt", "atom_expr");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

atom: '[' testlist ']' {
    $<ptr>$ = new node("nt", "atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}| '[' ']' {
    $<ptr>$ = new node("nt", "atom");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
} | '(' test ')' {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | NAME {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
} | NUMBER {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
}  | NONE {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
} | TRUE {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
} | FALSE {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
} | STRING {
    $<ptr>$ = new node("nt", "atom");
    ast.add_edge($<ptr>$, $<ptr>1);
} 

testlist: test{
    $<ptr>$ = new node("nt", "testlist");
    ast.add_edge($<ptr>$, $<ptr>1);
} | testlist ',' test{
    $<ptr>$ = new node("nt", "testlist");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
}

trailer: '(' cond_arglist ')' {
    $<ptr>$ = new node("nt", "trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | '[' test ']' {
    $<ptr>$ = new node("nt", "trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | '.' NAME {
    $<ptr>$ = new node("nt", "trailer");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);

}


classdef: CLASS NAME cond_parent_class ':' suite{
    $<ptr>$ = new node("nt", "classdef");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
    ast.add_edge($<ptr>$, $<ptr>4);
    ast.add_edge($<ptr>$, $<ptr>5);
}

cond_parent_class: '(' NAME ')'{
    $<ptr>$ = new node("nt", "cond_parent_class");
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
} | {
    $<ptr>$ = NULL;
} 

arglist: argument {
    $<ptr>$ = new node("nt", "arglist");
    ast.add_edge($<ptr>$, $<ptr>1);
} | arglist ',' argument { 
    $<ptr>$ = new node("nt", "arglist");
    ast.add_node($<ptr>$);
    ast.add_edge($<ptr>$, $<ptr>1);
    ast.add_edge($<ptr>$, $<ptr>2);
    ast.add_edge($<ptr>$, $<ptr>3);
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
argument: test {
        $<ptr>$ = new node("nt", "argument");
        ast.add_edge($<ptr>$, $<ptr>1);
    }

%%


void print_symbol_table(symbol_table *curr_table){

    string name = "";
    if(curr_table->type==GLOBAL_TABLE){
        name = "../symbol_tables/GLOBAL_TABLE.csv";
    }
    else if(curr_table->type==FUNCTION_TABLE){
        name = "../symbol_tables/FUNCTION_TABLE_" + curr_table->name + ".csv";
    }
    else{
        name = "../symbol_tables/CLASS_TABLE_" + curr_table->name + ".csv";
    }
    ofstream fout(name);

    fout<<"VARIABLES:\n";
    fout<<"Name,Line number,Size,Offset\n";
    for(auto p: curr_table->var_defs){
        auto x = p.first;
        auto entry = p.second;
        fout<<entry->name<<","<<entry->lineno<<","<<entry->size<<","<<entry->offset<<"\n";
    }
    fout<<"FUNCTIONS:\n";
    for(auto p: curr_table->fun_defs){
        auto x = p.first;
        auto table = p.second;
        fout<<x<<","<<table->lineno<<","<<table->size<<"\n";
        print_symbol_table(table);
    }
    fout<<"CLASSES:\n";
    for(auto p: curr_table->class_defs){
        auto x = p.first;
        auto table = p.second;
        fout<<x<<","<<table->lineno<<","<<table->size<<"\n";
        print_symbol_table(table);
    }
}


int main(int argc, char *argv[]){
    /* yydebug = 1  */
    if(argc > 1){

    }
    else{
        cerr << "No Input file specified.\nParsing Terminated\n";
        return -1;
    }
    present_table = new symbol_table(SYMBOL_TABLE_TYPE::GLOBAL_TABLE, NULL);
    symbol_table_entry * nameEntry = new symbol_table_entry("__name__", "str", present_table);
    present_table->add_entry_var(nameEntry);
    /* symbol_table * rangef = new symbol_table(FUNCTION_TABLE, present_table, "range");
    present_table->add_entry_fun(rangef); */
    yyin = fopen(argv[1], "r");
    if(yyin == NULL){
        cerr << "Failed to open input file.\n Terminated\n";
        return -1;
    }
    indents.push(0);
    if(!yyparse()) cerr << "Parsing successful\n";
    else return -1;
    make_3ac(root);
    /* cerr << root->code.size() << '\n'; */
    for(auto x: headers) cout << x << '\n';

    for(auto x: root->code){
        /* cerr << x.result << " = " << x.arg1 << ' ' << x.op << ' ' << x.arg2 << '\n'; */
        if(x.op=="label"){
            cout<<"\n"<<x.arg1<<":\n";
        }
        else if(x.op=="param"){
            cout<<setw(4)<<left<<"";
            cout<<"param "<<x.result<<"\n";
        }
        else if(x.op=="popparam" || x.op=="popreturn"){
            cout<<setw(4)<<left<<"";
            cout<<setw(12)<<left<<x.result<<" ";
            cout<<setw(4)<<left<<"=";
            cout<<setw(4)<<left<<x.op<<" ";
            cout<<"\n";
        }
        else if(x.op=="callfunc "|| x.op=="callfunc"){
            cout<<setw(4)<<left<<"";
            cout<<"callfunc ";
            cout<<setw(12)<<x.arg1<<" ";
            cout<<setw(12)<<x.arg2<<" ";
            cout<<"\n";
        }
        else if(x.op=="goto" && x.arg1==""){
            cout<<setw(4)<<left<<"";
            cout<<"goto "<<x.result<<"\n";
        }
        else if(x.op=="goto"){
            cout<<setw(4)<<left<<"";
            cout<<setw(12)<<x.arg1<<" ";
            cout<<setw(12)<<x.arg2<<" ";
            cout<<"goto "<<x.result<<"\n";
        }
        else{
            cout<<setw(4)<<left<<"";
            cout<<setw(12)<<left<<x.result<<" ";
            cout<<setw(4)<<left<<"=";
            cout<<setw(12)<<left<<x.arg1<<" ";
            cout<<setw(4)<<left<<x.op<<" ";
            cout<<setw(12)<<left<<x.arg2<<" ";
            cout<<"\n";
        }
    }

    print_symbol_table(present_table);

    return 0;
}
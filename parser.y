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
cond_arrowtest: ARROWOP test | 
parameters: '(' cond_typedargslist ')'
cond_typedargslist: typedargslist | 

typedargslist: tfpdef cond_eqtest close_comma_tfpdef_condeqtest cond_comma_or_condstarorstartstar
  | '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma
  | POW tfpdef cond_comma
conds_comma_startfpdefcondcomma: ',' | ',' POW tfpdef cond_comma | 
cond_star_or_startstar: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma
      | POW tfpdef cond_comma | 
cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar | 
close_comma_tfpdef_condeqtest: close_comma_tfpdef_condeqtest ',' tfpdef cond_eqtest | 
cond_tfpdef: tfpdef | 
tfpdef: NAME | NAME ':' test

varargslist: vfpdef cond_eqtest close_comma_vfpdef_condeqtest cond_comma_or_condstarorstartstarvf
  | '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma
  | POW vfpdef cond_comma
vfpdef: NAME
close_comma_vfpdef_condeqtest: close_comma_vfpdef_condeqtest ',' vfpdef cond_eqtest | 
cond_vfpdef: vfpdef | 
cond_star_or_startstar_vf: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma
      | POW vfpdef cond_comma | 
conds_comma_starvfpdefcondcomma: ',' | ',' POW vfpdef cond_comma | 
cond_comma_or_condstarorstartstarvf: ',' cond_star_or_startstar_vf | 

stmt: simple_stmt | compound_stmt
simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE
close_small_stmt: close_small_stmt ';' small_stmt 
        | 
cond_semi_colon: ';' | 
small_stmt: expr_stmt | del_stmt | pass_stmt | flow_stmt |
             import_stmt | global_stmt | nonlocal_stmt | assert_stmt
expr_stmt: testlist_star_expr anna_or_auga_or_closeyield
yield_or_test: yield_expr | testlist
yield_or_test_star: yield_expr | testlist_star_expr
close_yield_or_test_star: close_yield_or_test_star '=' yield_or_test_star 
                        | 
annassign: ':' test cond_eqtest
cond_eqtest: '=' test
      | 
anna_or_auga_or_closeyield: annassign | augassign yield_or_test |
                     close_yield_or_test_star
testlist_star_expr: test_or_starexp close_commatest_or_starexp cond_comma
test_or_starexp: test | star_expr
close_commatest_or_starexp: close_commatest_or_starexp ',' test_or_starexp  | 
cond_comma: ',' | 
augassign: ADDASSIGN{
            auto p = new node("nt", "Operator");
            auto anode = new node("OPERATOR", "+=");
            ast.add_node(p);
            ast.add_node(anode);
            ast.add_edge(p, anod)
        }
         | SUBASSIGN | MULASSIGN | ATASSIGN | DIVASSIGN | MODASSIGN | ANDASSIGN | ORASSIGN | XORASSIGN |
            LSASSIGN | RSASSIGN | POWASSIGN | IDIVASSIGN
// For normal and annotated assignments, additional restrictions enforced by the interpreter
del_stmt: DEL exprlist {
    auto p = new node("nt", "DelStatement");
    auto delnode = new node("KEYWORD", "DEL");
    ast.add_node(p);
    ast.add_node(delnode);
    ast.add_edge(p, delnode);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
}
pass_stmt: PASS{
    auto p = new node("nt", "PassStatement");
    auto pnode = new node("KEYWORD", "PASS");
    ast.add_node(p);
    ast.add_node(pnode);
    ast.add_edge(p, pnode);
    $<ptr>$ = p;
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
    $<ptr>$ = p;
    ast.add_node(p);
    auto p1 = new node("KEYWORD", "break");
    ast.add_node(p1);
    ast.add_edge(p, p1);
}

continue_stmt: CONTINUE {
    auto p = new node("nt", "ContinueStatement");
    $<ptr>$ = p;
    ast.add_node(p);
    auto p1 = new node("KEYWORD", "continue");
    ast.add_node(p1);
    ast.add_edge(p, p1);
}

return_stmt: RETURN cond_testlist{
    auto p = new node("nt", "ReturnStatement");
    auto rnode = new node("KEYWORD", "continue");
    ast.add_node(p);
    ast.add_node(rnode);
    ast.add_edge(p, rnode);
    ast.add_edge(p, $<ptr>1);
    $<ptr>$ = p;
}

cond_testlist: testlist{
      $<ptr>$ = $1;
} | {
      $<ptr>$ = nullptr;
}
yield_stmt: yield_expr {
    $<ptr>$ = $<ptr>1
}
raise_stmt: RAISE cond_from_test
cond_from_test: test | test FROM test | 
import_stmt: import_name | import_from
import_name: IMPORT dotted_as_names
// note below: the ('.' | ELLIPSIS) is necessary because ELLIPSIS is tokenized as ELLIPSIS
import_from: FROM closeplusdotorellipsisname_or_plusdotellip
              IMPORT star_or_import_parentheses_or_import
              
closeplusdotorellipsisname_or_plusdotellip: close_dot_or_ellipsis dotted_name | plus_dot_or_ellipsis
star_or_import_parentheses_or_import: '*' | '(' import_as_names ')' | import_as_names
plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis | ELLIPSIS plus_dot_or_ellipsis | '.' | ELLIPSIS
close_dot_or_ellipsis: plus_dot_or_ellipsis | 
import_as_name: NAME | NAME AS NAME
dotted_as_name: dotted_name | dotted_name AS NAME
import_as_names: import_as_name close_commaimportasname cond_comma
close_commaimportasname: close_commaimportasname ',' import_as_name  | 
dotted_as_names: dotted_as_name close_commadottedasname
close_commadottedasname: close_commadottedasname ',' dotted_as_name | 
dotted_name: NAME close_dotted_name
close_dotted_name: close_dotted_name '.' NAME  |
global_stmt: GLOBAL NAME close_comma_name
nonlocal_stmt: NONLOCAL NAME close_comma_name
close_comma_name: close_comma_name ',' NAME  | 
assert_stmt: ASSERT test | ASSERT test ',' test

compound_stmt: if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | funcdef | classdef | decorated | async_stmt
async_stmt: ASYNC funcdef_or_withstmt_or_forstmt
funcdef_or_withstmt_or_forstmt: funcdef | with_stmt | for_stmt
if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite
cond_else_colon_suite: ELSE ':' suite | 
close_eliftestsuite: close_eliftestsuite ELIF test ':' suite  | 
while_stmt: WHILE test ':' suite | WHILE test ':' suite ELSE ':' suite
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
argument: test comp_for |
          test |
          test '=' test |
          POW test |
          '*' test 

comp_iter: comp_for | comp_if
comp_for: cond_async FOR exprlist IN or_test comp_iter
cond_async: ASYNC | 
comp_if: IF test_nocond | IF test_nocond comp_iter

// not used in grammar, but may appear in "node" passed from Parser to Compiler
encoding_decl: NAME {
        auto p = new node("nt", "EncodingDeclaration");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("IDENTIFIER", )
    }

yield_expr: YIELD yield_arg{
        auto p = new node("nt", "YieldExpression");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "yield");
        ast.add_node(p1);
        ast.add_edge(p, p1);
        ast.add_edge(p, $2);
    } 
    | YIELD {
        auto p = new node("nt", "YieldExpression");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "yield");
        ast.add_node(p1);
        ast.add_edge(p, p1); 
    }

yield_arg: FROM test{
        auto p = new node("nt", "YieldArguments");
        $<ptr>$ = p;
        ast.add_node(p);
        auto p1 = new node("KEYWORD", "from");
        ast.add_node(p1);
        ast.add_edge(p, p1);
        ast.add_edge(p, $2);
    } 
    | testlist {
        $<ptr>$ = $<ptr>1;
    }

%%


int main(int argc, char *argv){



}
// Grammar for Python

// NOTE WELL: You should also follow all the steps listed at
// https://devguide.python.org/grammar/

// Start symbols for the grammar:
//      single_input is a single interactive statement;
//      file_input is a module or sequence of commands read from an input file;
//      eval_input is the input for the eval() functions.
// NB: compound_stmt in single_input is followed by extra NEWLINE!
%{

%}
%token NEWLINE
%token ENDMARKER
%token ASYNC
%token NAME
%token ARROWOP
%token DEL
%token PASS
%token BREAK
%token CONTINUE
%token RETURN
%token RAISE
%token FROM
%token IMPORT
%token AS
%token GLOBAL
%token NONLOCAL
%token ASSERT
%token IF
%token ELIF
%token ELSE
%token FOR
%token IN
%token WHILE
%token TRY
%token FINALLY
%token WITH
%token EXCEPT
%token LAMBDA
%token NOT
%token OR
%token AND
%token AWAIT
%token IS
%token INDENT
%token DEDENT
%token YIELD
%token slice_op
%token TRUE
%token NUMBER
%token STRING
%token FALSE
%token NONE
%token CLASS
%%
single_input: NEWLINE | simple_stmt | compound_stmt NEWLINE
file_input: nstatement ENDMARKER
nstatement: NEWLINE nstatement
          | stmt nstatement
          |
eval_input: testlist multiline ENDMARKER
multiline: NEWLINE multiline
          | 
decorator: '@' dotted_name cond_brack_cond_arglist NEWLINE
cond_arglist: arglist
            |
brack_cond_arglist: '(' cond_arglist ')'
cond_brack_cond_arglist: brack_cond_arglist
            | 

decorators: decorator
          | decorator decorators
decorated: decorators defob
defob: classdef | funcdef | async_funcdef
async_funcdef: ASYNC funcdef
funcdef: 'def' NAME parameters cond_arrowtest ':' suite
cond_arrowtest: ARROWOP test | 
parameters: '(' cond_typedargslist ')'

cond_typedargslist: typedargslist | 
typedargslist: tfpdef cond_eqtest close_comma_tfpdef_condeqtest cond_comma_or_condstarorstartstar
  | '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma
  | '**' tfpdef cond_comma
conds_comma_startfpdefcondcomma: ',' | ',' '**' tfpdef cond_comma | 
cond_star_or_startstar: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma
      | '**' tfpdef cond_comma | 
cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar | 
close_comma_tfpdef_condeqtest: ',' tfpdef cond_eqtest close_comma_tfpdef_condeqtest | 
cond_tfpdef: tfpdef | 
tfpdef: NAME | NAME ':' test

varargslist: vfpdef cond_eqtest close_comma_vfpdef_condeqtest cond_comma_or_condstarorstartstarvf
  | '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma
  | '**' vfpdef cond_comma
vfpdef: NAME
close_comma_vfpdef_condeqtest: ',' vfpdef cond_eqtest close_comma_vfpdef_condeqtest | 
cond_vfpdef: vfpdef | 
cond_star_or_startstar_vf: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma
      | '**' vfpdef cond_comma | 
conds_comma_starvfpdefcondcomma: ',' | ',' '**' vfpdef cond_comma | 
cond_comma_or_condstarorstartstarvf: ',' cond_star_or_startstar_vf | 

stmt: simple_stmt | compound_stmt
simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE
close_small_stmt: ';' small_stmt close_small_stmt
        | 
cond_semi_colon: ';' | 
small_stmt: expr_stmt | del_stmt | pass_stmt | flow_stmt |
             import_stmt | global_stmt | nonlocal_stmt | assert_stmt
expr_stmt: testlist_star_expr anna_or_auga_or_closeyield
yield_or_test: yield_expr | testlist
yield_or_test_star: yield_expr | testlist_star_expr
close_yield_or_test_star: '=' yield_or_test_star close_yield_or_test_star
                        | 
annassign: ':' test cond_eqtest
cond_eqtest: '=' test
      | 
anna_or_auga_or_closeyield: annassign | augassign yield_or_test |
                     close_yield_or_test_star
testlist_star_expr: test_or_starexp close_commatest_or_starexp cond_comma
test_or_starexp: test | star_expr
close_commatest_or_starexp: ',' test_or_starexp close_commatest_or_starexp | 
cond_comma: ',' | 
augassign: '+=' | '-=' | '*=' | '@=' | '/=' | '%=' | '&=' | '|=' | '^=' |
            '<<=' | '>>=' | '**=' | '//='
// For normal and annotated assignments, additional restrictions enforced by the interpreter
del_stmt: DEL exprlist
pass_stmt: PASS
flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt | yield_stmt
break_stmt: BREAK
continue_stmt: CONTINUE
return_stmt: RETURN cond_testlist
cond_testlist: testlist | 
yield_stmt: yield_expr
raise_stmt: RAISE cond_from_test
cond_from_test: test | test FROM test | 
import_stmt: import_name | import_from
import_name: IMPORT dotted_as_names
// note below: the ('.' | '...') is necessary because '...' is tokenized as ELLIPSIS
import_from: FROM closeplusdotorellipsisname_or_plusdotellip
              IMPORT star_or_import_parentheses_or_import
              
closeplusdotorellipsisname_or_plusdotellip: close_plus_dot_or_ellipsis dotted_name | plus_dot_or_ellipsis
star_or_import_parentheses_or_import: '*' | '(' import_as_names ')' | import_as_names
plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis | '...' plus_dot_or_ellipsis | '.' | '...'
close_plus_dot_or_ellipsis: plus_dot_or_ellipsis | 
import_as_name: NAME | NAME AS NAME
dotted_as_name: dotted_name | dotted_name AS NAME
import_as_names: import_as_name close_commaimportasname cond_comma
close_commaimportasname: ',' import_as_name close_commaimportasname | 
dotted_as_names: dotted_as_name close_commadottedasname
close_commadottedasname: ',' dotted_as_name close_commadottedasname | 
dotted_name: NAME close_dotted_name
close_dotted_name: '.' NAME close_dotted_name |
global_stmt: GLOBAL NAME close_comma_name
nonlocal_stmt: NONLOCAL NAME close_comma_name
close_comma_name: ',' NAME close_comma_name | 
assert_stmt: ASSERT test | ASSERT test ',' test

compound_stmt: if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | funcdef | classdef | decorated | async_stmt
async_stmt: ASYNC funcdef_or_withstmt_or_forstmt
funcdef_or_withstmt_or_forstmt: funcdef | with_stmt | for_stmt
if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite
cond_else_colon_suite: ELSE ':' suite | 
close_eliftestsuite: ELIF test ':' suite close_eliftestsuite | 
while_stmt: WHILE test ':' suite | WHILE test ':' suite ELSE ':' suite
for_stmt: FOR exprlist IN testlist ':' suite | FOR exprlist IN testlist ':' suite ELSE ':' suite
try_stmt: TRY ':' suite plus_except_colsuite cond_else_colon_suite cond_finallycolsuite | TRY ':' suite FINALLY ':' suite
cond_finallycolsuite: FINALLY ':' suite | 
plus_except_colsuite: except_clause ':' suite | except_clause ':' suite plus_except_colsuite
with_stmt: WITH with_item close_commawithitem  ':' suite
close_commawithitem: ',' with_item close_commawithitem | 
with_item: test | test AS expr
// NB compile.c makes sure that the default except clause is last 
except_clause: EXCEPT cond_testasname
cond_testasname: test | test AS NAME | 
suite: simple_stmt | NEWLINE INDENT plus_stmt DEDENT
plus_stmt: stmt | stmt plus_stmt
test: or_test IF or_test ELSE test | lambdef | or_test
test_nocond: or_test | lambdef_nocond
lambdef: LAMBDA varargslist ':' test | LAMBDA ':' test
lambdef_nocond: LAMBDA varargslist ':' test_nocond | LAMBDA ':' test_nocond
or_test: and_test close_or_and_test
close_or_and_test: OR and_test close_or_and_test | 
and_test: not_test close_and_not_test
close_and_not_test: AND not_test close_and_not_test | 
not_test: NOT not_test | comparison
comparison: expr close_compopexpr
close_compopexpr: comp_op expr close_compopexpr | 
// <> isn't actually a valid comparison operator in Python. It's here for the
// sake of a __future__ import described in PEP 401 (which really works :-)
comp_op: '<'|'>'|'=='|'>='|'<='|'<>'|'!='|IN|NOT IN|IS|IS NOT
star_expr: '*' expr
expr: xor_expr close_orxorexp
close_orxorexp: '|' xor_expr close_orxorexp | 
xor_expr: and_expr close_xor_and_expr
close_xor_and_expr: '^' and_expr close_xor_and_expr | 
and_expr: shift_expr close_andshiftexpr
close_andshiftexpr: '&' shift_expr close_andshiftexpr | 
shift_expr: arith_expr close_lrs_arith_expr
left_right_shift: '<<' | '>>'
close_lrs_arith_expr: left_right_shift arith_expr close_lrs_arith_expr | 
arith_expr: term close_plusminusterm
close_plusminusterm: '+' term close_plusminusterm | '-' term close_plusminusterm |
term: factor close_muldivopsfactor
group_muldivremops: '*' | '@' | '/' | '%' | '//' 
close_muldivopsfactor: group_muldivremops factor close_muldivopsfactor | 
factor: plus_or_minus_or_not factor | power
plus_or_minus_or_not: '+' | '-' | '~'
power: atom_expr '**' factor | atom_expr
atom_expr: AWAIT atom close_trailer | atom close_trailer
close_trailer: trailer close_trailer |

atom: '(' cond_yield_or_testlist ')' |
       '[' testlist_comp ']' | '[' ']'
       '{' dictorsetmaker '}' | '{' '}'
       NAME | NUMBER | multi_str | '...' | NONE | TRUE | FALSE
cond_yield_or_testlist: yield_expr | testlist_comp | 
multi_str: STRING | STRING multi_str
testlist_comp: test_or_starexp comp_for | test_or_starexp close_commatest_or_starexp cond_comma 
trailer: '(' cond_arglist ')' | '[' subscriptlist ']' | '.' NAME
subscriptlist: subscript close_commasubscript cond_comma
close_commasubscript: ',' subscript close_commasubscript | 
subscript: test | cond_test ':' cond_test cond_sliceop
cond_test: test |
cond_sliceop: slice_op |  
sliceop: ':' test | ':'
exprlist: expr_or_star_expr close_comma_expr_or_star_expr cond_comma
expr_or_star_expr: expr | star_expr
close_comma_expr_or_star_expr: ',' expr_or_star_expr close_comma_expr_or_star_expr | 
testlist: test close_comma_test cond_comma
close_comma_test: ',' test close_comma_test | 
dictorsetmaker:  testcoltest_or_starrexpr compfor_or_close_commatestcoltestorstarexpr_condcomma |
                  some_non_terminal
testcoltest_or_starrexpr: test ':' test | '**' expr
close_commatestcoltestorstarrexpr: ',' testcoltest_or_starrexpr close_commatestcoltestorstarrexpr | 
compfor_or_close_commatestcoltestorstarexpr_condcomma: comp_for | close_commatestcoltestorstarrexpr cond_comma
some_non_terminal: test_or_starexp comp_for | test_or_starexp close_commatest_or_starexp cond_comma

classdef: CLASS NAME cond_parentheses_arglist ':' suite
cond_parentheses_arglist: '(' cond_arglist ')' | 
arglist: argument close_comma_argument cond_comma
close_comma_argument: ',' argument close_comma_argument | 

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
          '**' test |
          '*' test 

comp_iter: comp_for | comp_if
comp_for: cond_async FOR exprlist IN or_test comp_iter | cond_async FOR exprlist IN or_test comp_iter
cond_async: ASYNC | 
comp_if: IF test_nocond [comp_iter]

// not used in grammar, but may appear in "node" passed from Parser to Compiler
encoding_decl: NAME

yield_expr: YIELD yield_arg | YIELD
yield_arg: FROM test | testlist

%%
%option outfile="scanner.c"
%option noyywrap
%option nounput
%option noinput
%{
    #include "parser.h" // For the token types from bison.
%}
%%

other   { return OTHER; }
if      { return IF; }
else    { return ELSE; }
1       { return ONE; }
0       { return ZERO; }
"("     { return LPAR; }
")"     { return RPAR; }
"\n"    { return ENTER; }
<<EOF>> { return EOF; }
" "     { /* ignore spaces */ }
.       { printf("LEXICAL ERROR: Unknown symbol %s\n", yytext); exit(EXIT_FAILURE); }

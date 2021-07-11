%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char const *s);
%}
%token IF ELSE LPAR RPAR OTHER ZERO ONE ENTER
%%
line: ifstmt ENTER ;
statement: ifstmt | OTHER;
condition: LPAR expr RPAR;
ifstmt: IF condition statement | IF condition statement ELSE statement; 
expr: ZERO | ONE;
%%

int main(void) {
    if (yyparse() == 0) 
        printf("PARSE SUCCESSFUL!\n");
    else
        printf("PARSE FAILED!\n");
    return 0;
}
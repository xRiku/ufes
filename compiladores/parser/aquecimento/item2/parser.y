%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char const *s);
%}
%token PLUS MINUS STAR OVER LPAR RPAR NUMBER ENTER
%%
line: expr ENTER ;
opr: PLUS | MINUS | STAR | OVER ;
expr: expr opr expr | LPAR expr RPAR | NUMBER  
%%

int main(void) {
    if (yyparse() == 0) 
        printf("PARSE SUCCESSFUL!\n");
    else
        printf("PARSE FAILED!\n");
    return 0;
}
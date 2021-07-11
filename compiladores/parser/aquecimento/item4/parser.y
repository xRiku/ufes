%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char const *s);
    int result = 0;
%}

%token NUMBER PLUS ENTER
%%
line: expr ENTER ;
expr: expr PLUS expr | NUMBER  {result += $1;};
%%
int main(void) {
    if (yyparse() == 0) {
        printf("PARSE SUCCESSFUL! Result = %d\n", result);
    }
    else
        printf("PARSE FAILED!\n");
    return 0;
}
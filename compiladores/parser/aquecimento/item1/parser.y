%{
    #include <ctype.h>
    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    void yyerror(char const *s);
%}
%token A LPAR RPAR ENTER
%%
line: expr ENTER ;
expr: LPAR expr RPAR | A ;
%%
int yylex(void) {
    int c = getchar();
    if (c == '('){ return LPAR; }
    else if (c == ')') { return RPAR; }
    else if (c == 'a'){ return A; }
    else if (c == '\n') { return ENTER; }
    // EOF is not a token but a constant from stdio.
    else if (c == EOF) { return EOF; }
    else { // Not a digit or plus or enter.
        printf("LEXICAL ERROR: Unknown symbol %c\n", c);
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    if (yyparse() == 0) 
        printf("PARSE SUCCESSFUL!\n");
    else
        printf("PARSE FAILED!\n");
    return 0;
}
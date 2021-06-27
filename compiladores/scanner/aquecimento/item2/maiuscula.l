%{
    #include <ctype.h>
%}
/* Encontre letras maiúsculas na entrada e substitua pelas suas equivalentes em minúsculas.
Não modifique os demais caracteres. */
%%
    
[a-z] { 
    *yytext = tolower(*yytext);
    printf("%s", yytext);
}


%%
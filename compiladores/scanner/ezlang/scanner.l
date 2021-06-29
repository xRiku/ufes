%option yylineno
%%

\{[^}]*\}     {}
[ \t\n]         {}
begin           { printf("%d: %s -> %s\n", yylineno, yytext, "BEGIN"); }
bool            { printf("%d: %s -> %s\n", yylineno, yytext, "BOOL"); }
else            { printf("%d: %s -> %s\n", yylineno, yytext, "ELSE"); }
end             { printf("%d: %s -> %s\n", yylineno, yytext, "END"); }
false           { printf("%d: %s -> %s\n", yylineno, yytext, "FALSE"); }
if              { printf("%d: %s -> %s\n", yylineno, yytext, "IF"); }
int             { printf("%d: %s -> %s\n", yylineno, yytext, "INT"); }
program         { printf("%d: %s -> %s\n", yylineno, yytext, "PROGRAM"); }
read            { printf("%d: %s -> %s\n", yylineno, yytext, "READ"); }
real            { printf("%d: %s -> %s\n", yylineno, yytext, "REAL"); }
repeat          { printf("%d: %s -> %s\n", yylineno, yytext, "REPEAT"); }
string          { printf("%d: %s -> %s\n", yylineno, yytext, "STRING"); }
then            { printf("%d: %s -> %s\n", yylineno, yytext, "THEN"); }
true            { printf("%d: %s -> %s\n", yylineno, yytext, "TRUE"); }
until           { printf("%d: %s -> %s\n", yylineno, yytext, "UNTIL"); }
var             { printf("%d: %s -> %s\n", yylineno, yytext, "VAR"); }
write           { printf("%d: %s -> %s\n", yylineno, yytext, "WRITE"); }
"+"             { printf("%d: %s -> %s\n", yylineno, yytext, "PLUS"); }
"-"             { printf("%d: %s -> %s\n", yylineno, yytext, "MINUS"); }
"*"             { printf("%d: %s -> %s\n", yylineno, yytext, "TIMES"); }
"/"             { printf("%d: %s -> %s\n", yylineno, yytext, "DIV"); }
";"             { printf("%d: %s -> %s\n", yylineno, yytext, "SEMI"); }
":="            { printf("%d: %s -> %s\n", yylineno, yytext, "ASSIGN"); }
"="             { printf("%d: %s -> %s\n", yylineno, yytext, "EQ"); }
"<"             { printf("%d: %s -> %s\n", yylineno, yytext, "LT"); }
[a-zA-Z][a-zA-Z0-9]*  { printf("%d: %s -> %s\n", yylineno, yytext, "ID"); }
[0-9]+.[0-9]+   { printf("%d: %s -> %s\n", yylineno, yytext, "REAL_VAL"); }
[0-9]+          { printf("%d: %s -> %s\n", yylineno, yytext, "INT_VAL"); }
\"[0-9]*\"      { printf("%d: %s -> %s\n", yylineno, yytext, "STR_VAL"); }


%%
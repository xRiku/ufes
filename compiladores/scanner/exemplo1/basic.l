%%

a               { ECHO; printf(" -> Rule 1"); }
ab              { ECHO; printf(" -> Rule 2"); }
a*b+            { ECHO; printf(" -> Rule 3"); }
(a|b)*abb       { ECHO; printf(" -> Rule 4"); }
.*              { ECHO; printf(" -> Not recognised!"); }
\n              { ECHO; printf("Next input please =>"); }

%%

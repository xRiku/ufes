/* Reconheça placas de carros antigas no formato AAA-0000. */

%%

[A-Z]{3}-[0-9]{4}[ \t\n] {printf("Placa válida\n");} 

%%
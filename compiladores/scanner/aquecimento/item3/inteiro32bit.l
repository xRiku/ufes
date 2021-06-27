/* Reconheça inteiros 32-bit em notação hexadecimal. Os números começam com 0x ou 0X
e podem ter no máximo 8 dı́gitos hexadecimais. As letras podem ser em qualquer caixa
(alta ou baixa). */
%%

0[xX][0-9a-fA-F]{8}[ \n\t] { printf("Achei um hexadecimal\n"); }

%%
#include <stdio.h>
#include <string.h>

int main(){
//programa retorna o valor logico que deve ser ativado em cada segmento
//strcmp compara duas strings e retorna 0 se verdadeiro
//resposta esta na forma 0gfedcba9876543210. Quando é '1' em sua respectiva posicao, o mesmo esta presente na string resposta. QUando é '0' o mesmo não esta.
//char ent[8];printf("Entre com um numero de 4 bits na ordem DCBA: ");scanf("%s",&ent); !strcmp(ent,"0000")? printf("00111111"):!strcmp(ent,"0001")? printf("00000110"):!strcmp(ent,"0010")? printf("01011011"):!strcmp(ent,"0011")? printf("01001111"):!strcmp(ent,"0100")? printf("01100110"):!strcmp(ent,"0101")? printf("01101101"):!strcmp(ent,"0110")? printf("01111101"):!strcmp(ent,"0111")? printf("00000111"):!strcmp(ent,"1000")? printf("01111111"):!strcmp(ent,"1001")? printf("01101111"):!strcmp(ent,"1010")? printf("01110111"):!strcmp(ent,"1011")? printf("01111100"):!strcmp(ent,"1100")? printf("00111001"):!strcmp(ent,"1101")? printf("01011110"):!strcmp(ent,"1110")? printf("01111001"):!strcmp(ent,"1111")? printf("01110001"):printf("Entrada invalida!");
//33 pares de parenteses





//programa retorna o numero que aparecerá no display e quais segmentos são acesos.
char ent[8], seg[12];printf("Entre com um numero de 4 bits na ordem DCBA: ");scanf("%s",&ent); !strcmp(ent,"0000")? strcpy(seg,"0 - fedcba") :!strcmp(ent,"0001")? printf(seg,"1 - cb"):!strcmp(ent,"0010")? strcpy(seg,"2 - gedba"):!strcmp(ent,"0011")? strcpy(seg, "3 - gdcba"):!strcmp(ent,"0100")? strcpy(seg,"4 - gfcb"):!strcmp(ent,"0101")? strcpy(seg,"5 - gfdca"):!strcmp(ent,"0110")? strcpy(seg,"6 - gfedca"):!strcmp(ent,"0111")? strcpy(seg,"7 - gcba"):!strcmp(ent,"1000")? strcpy(seg,"8 - gfedcba"):!strcmp(ent,"1001")? strcpy(seg,"9 - gfdcba"):!strcmp(ent,"1010")? strcpy(seg,"A - gfecba"):!strcmp(ent,"1011")? strcpy(seg,"b - gfedc"):!strcmp(ent,"1100")? strcpy(seg,"C - feda"):!strcmp(ent,"1101")? strcpy(seg,"d - gedcb"):!strcmp(ent,"1110")? strcpy(seg,"E - gfeda"):!strcmp(ent,"1111")? strcpy(seg,"F - gfea"):printf("Entrada invalida!");printf("%s", seg);

//34 pares de parenteses
return 0;
}

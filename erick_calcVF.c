#include <stdio.h>
int main(){
int count=17001;
float ve,vc,vf;
printf("CALCULADORA DE MEDIA PARA VF\n\n");
while(1){
while(1){
printf("Insira as notas do aluno %d\n", count);
printf("Media de VE: ");
scanf("%f", &ve);
if(ve>10 || ve<0){
    printf("Nota invalida!\n\n");
    break;
}
printf("Media de VC: ");
scanf("%f", &vc);
if(vc>10 || vc<0){
    printf("Nota invalida!\n\n");
    break;
}
vf=(20-ve-vc)*0.5;
if(vf<=4) vf=4;
printf("Nota vf: %.1f \n\n", vf);
count++;
}}
return 0;
}

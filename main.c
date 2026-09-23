#include <stdio.h>


void main(){
FILE*Arquivo;

char nome;
int nota1;
int nota2;
int nota3;
int nota4;
int media;

Arquivo=fopen("Boletim.txt", "a");
if(Arquivo == NULL){

printf("ERRO");

}

printf("\n======BOLETIM======\n");
printf("\nQual o nome do Aluno: ");
scanf("%s", &nome);
printf("\nNota da 1º avaliação: ");
scanf("%d", &nota1);
printf("\nNota da 2º avaliação: ");
scanf("%d", &nota2);
printf("\nNota da 3º avaliação: ");
scanf("%d", &nota3);
printf("\nNota da 4º avaliação: ");
scanf("%d", &nota4);


(media=nota1+nota2+nota3+nota4)/4;


if(media >=70){
    printf("APROVADO");
}
if(media ==50){
    printf("RECUPERAÇÃO");


}
if(media <=50){

printf("REPROVADO");

}




printf("\n======BOLETIM======\n");

printf("\nNome: %s", &nome);
printf("\n1º Nota: %.1d | 2º Nota: %.1d | 3º Nota: %.1d | 4º Nota: %.1d ",nota1,nota2,nota3,nota4);
printf("\nMédia final: %.1d", media);



fprintf (Arquivo,"\nNOME:%s\n| 1º Nota: %.1d | 2º Nota: %.1d | 3º Nota: %.1d | 4º Nota: %.1d |\n Média final: %.1d ",nota1,nota2,nota3,nota4,media);

fclose(Arquivo);


}
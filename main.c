#include <stdio.h>


void main(){
FILE*Arquivo;

char nome;
float nota1;
float nota2;
float nota3;
float nota4;
float media;

Arquivo=fopen("Boletim.txt", "a");
if(Arquivo == NULL){

printf("ERRO");

}

printf("\n======BOLETIM======\n");
printf("\nQual o nome do Aluno: ");
scanf("%s", &nome);
printf("\nNota da 1º avaliação: ");
scanf("%f", &nota1);
printf("\nNota da 2º avaliação: ");
scanf("%f", &nota2);
printf("\nNota da 3º avaliação: ");
scanf("%f", &nota3);
printf("\nNota da 4º avaliação: ");
scanf("%f", &nota4);


(media=nota1+nota2+nota3+nota4)/4;


if(media >=7.0){
    printf("APROVADO");
}
if(media ==5.0){
    printf("RECUPERAÇÃO");


}
if(media <=5.0){

printf("REPROVADO");

}




printf("\n======BOLETIM======\n");

printf("\nNome: %s", &nome);
printf("\n1º Nota: %.1f | 2º Nota: %.1f | 3º Nota: %.1f | 4º Nota: %.1f ",nota1,nota2,nota3,nota4);
printf("\nMédia final: %.1f", media);



fprintf (Arquivo,"\nNOME:%s\n| 1º Nota: %.1f | 2º Nota: %.1f | 3º Nota: %.1f | 4º Nota: %.1f |\n Média final: %.1f ",nota1,nota2,nota3,nota4,media);

fclose(Arquivo);


}
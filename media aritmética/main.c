/*Escreva um algoritmo que solicite a quantidade de avaliações no semestre (entre uma e dez)
de um aluno e ao final apresente se  aprovado ou não conforme a média aritmética das N avaliações
1) ao final apresentar a soma das notas e a média aritmética delas
2) apresentar qual a avaliação que teve a maior nota(exemplo: a segunda prova teve a maior nota)
3) apresentar qual a avaliação que teve a menor nota(exemplo: A primeira prova teve a menor nota)
4) Solicitar ao usuário no início qual a média para a aprovação e informar se aprovado ou não
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota[10],maior[2],menor[2];
    int i,qtdProvas,media;
    nota[0] = 0;
    printf("Informe a média para aprovação: ");
    scanf("%d",&media);
    system("pause");
    system("cls");
    do{

        printf("Informe a quantidade de provas: ");
        scanf("%i",&qtdProvas);
        if(qtdProvas < 1 || qtdProvas > 10){
            printf("Total de provas está fora do limite. Favor informar um total entre 1 e 10!\n");
            system("pause");
            system("cls");
        }
    }while(qtdProvas < 1 || qtdProvas > 10);
    for(i=1;i<=qtdProvas;i++){
        printf("informe a %i° nota do aluno:\n",i);
        scanf("%f",&nota[i]);
        nota[0] = nota[0] + nota[i]; //a primeira posição do vetor está acumulando a soma das notas
        if(i==1){
            maior[1] = nota[i];
            maior[0] = i;
            menor[1] = nota[i];
            menor[0] = i;
        }
        if(nota[i] > maior[1]){
            maior[1] = nota[i];
            maior[0] = i;
        }
        if(nota[i] < menor[1]){
            menor[1] = nota[i];
            menor[0] = i;
        }
    }
    printf("A soma é: %.2f",nota[0]);
    printf("\nA média é: %.2f",nota[0]/qtdProvas);
    if(nota[0]/qtdProvas >= media){
        printf("\nParabéns! o aluno foi aprovado!");
    }
    else
        printf("\nO aluno não atingiu a média e por isso está reprovado!");
    printf("\nA %.0f° prova teve a maior nota que foi: %.1f",maior[0],maior[1]);
    printf("\nA %.0f° prova teve a menor nota que foi: %.1f",menor[0], menor[1]);


}

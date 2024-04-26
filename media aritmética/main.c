/*Escreva um algoritmo que solicite a quantidade de avalia��es no semestre (entre uma e dez)
de um aluno e ao final apresente se  aprovado ou n�o conforme a m�dia aritm�tica das N avalia��es
1) ao final apresentar a soma das notas e a m�dia aritm�tica delas
2) apresentar qual a avalia��o que teve a maior nota(exemplo: a segunda prova teve a maior nota)
3) apresentar qual a avalia��o que teve a menor nota(exemplo: A primeira prova teve a menor nota)
4) Solicitar ao usu�rio no in�cio qual a m�dia para a aprova��o e informar se aprovado ou n�o
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
    printf("Informe a m�dia para aprova��o: ");
    scanf("%d",&media);
    system("pause");
    system("cls");
    do{

        printf("Informe a quantidade de provas: ");
        scanf("%i",&qtdProvas);
        if(qtdProvas < 1 || qtdProvas > 10){
            printf("Total de provas est� fora do limite. Favor informar um total entre 1 e 10!\n");
            system("pause");
            system("cls");
        }
    }while(qtdProvas < 1 || qtdProvas > 10);
    for(i=1;i<=qtdProvas;i++){
        printf("informe a %i� nota do aluno:\n",i);
        scanf("%f",&nota[i]);
        nota[0] = nota[0] + nota[i]; //a primeira posi��o do vetor est� acumulando a soma das notas
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
    printf("A soma �: %.2f",nota[0]);
    printf("\nA m�dia �: %.2f",nota[0]/qtdProvas);
    if(nota[0]/qtdProvas >= media){
        printf("\nParab�ns! o aluno foi aprovado!");
    }
    else
        printf("\nO aluno n�o atingiu a m�dia e por isso est� reprovado!");
    printf("\nA %.0f� prova teve a maior nota que foi: %.1f",maior[0],maior[1]);
    printf("\nA %.0f� prova teve a menor nota que foi: %.1f",menor[0], menor[1]);


}

#include <stdio.h>
#include <stdlib.h>

 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 

int main(void)
{
        float num1,
              num2;
        char oper;

 

        do
        {
            printf("Calculadora Aula Jefferson");

 

            printf("Operacoes disponiveis\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf("'*' : multiplicao\n");
            printf("'/' : divisao\n");
            printf("'%%' : resto da divisao\n");

 

            printf("\nDigite a expressao na forma: numero1 operador numero2\n");

 

 

            scanf("%f", &num1);
            scanf(" %c",&oper);
            scanf("%f", &num2);

 

            system("cls || clear");

 

            printf("Calculando: %.2f %c %.2f = ", num1,oper,num2);

 

 

            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

 

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

 

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

 

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

 

                case '%':
                        printf("%d\n\n", (int)num1 % (int)num2);
                        break;

 

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

 

        }while(num1 != 0 && oper != '0' && num2 != 0);

 

}

/*
=========================================================
Name        : estacaoMes
Author      : Yann Martins
Description : Program in C++
=========================================================
*/

#include <stdio.h>
int main ()
{
    int mes;
    printf("Identifica a estacao do ano de acordo com o mes.\n");
    printf("Informe o numero do mes: ");
    scanf("%d",&mes);
   switch (mes){
    case 1:
    case 2:
    case 3:
        printf("\nVerao.\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("\nOutono.\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("\nInverno.\n");
        break;
    case 10:
    case 11:
    case 12:
        printf("\nPrimavera.\n");
        break;
    default:
        printf("\nInformacao incorreta.\n");
    }
    
    getchar();
    return 0;
}

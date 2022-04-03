#include <stdio.h>
int main ()
{
    int mes;
    printf("Identifica a estacao do ano de acordo com o mes correspondente.\n");
    printf("Informe o numero do mes: ");
    scanf(" %d",&mes);
    if(mes>=1 &mes<=3){
        printf("\nVerao.\n");
    }
    else if(mes>=4 &mes<=6){
        printf("\nOutono.\n");
    }
    else if(mes>=7 &mes<=9){
        printf("\nInverno.\n");
    }    
    else if(mes>=10 &mes<=12){
        printf("\nPrimavera.\n");
    }    
    else{
        printf("\nMes informado errado.\n");
    }
    
    getchar();
    return 0;
}

#include "main.h"
void withd()
{
    int amt;
    printf("enter the amount to withdrawal\n");
    scanf("%d",&amt);
    if(amt<0)
        printf("Invalid amount\n");
        if(amt>A1.amount)
            printf("insuffient balance\n");
        else
            A1.amount=A1.amount-amt;
}

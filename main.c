#include<stdio.h> //This line includes the standard input-output header file
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include "main.h"
#include "deposit.c"
#include "createaccount.c"
#include "balance.c"
#include "withdrawl.c"
#include "menu.c"

int main()
{
    int choice;// Declaration of an integer variable named choice to store the user's menu selection.
    int count=0;
     char ch1,ch2,ch3,ch4;

     printf("Enter the password\n");
     ch1=getch();
     printf("*");
     ch2=getch();
     printf("*");
     ch3=getch();
     printf("*");
     ch4=getch();
     printf("*");
     if(ch1='2'&&ch2=='0'&&ch3=='0'&&ch4=='2')
     {



    do//Start of a do-while loop.
        {
    atm();
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice) //Starts a switch statement based on the value of the "choice" variable
    {
        case 1:createacc();// If choice is 1, it calls the createacc() function, which represents creating an account.
        break;
        case 2:deposit();// If choice is 2, it calls the deposit() function, which represents depositing money.
        break;
        case 3:withd();//If choice is 3, it calls the withd() function, which represents withdrawing money.
        break;
        case 4:balance();//If choice is 4, it calls the balance() function, which represents checking the account balance.
        break;
        case 5:exit(0);// If choice is 5, it exits the program with a status code of 0.
        default:printf("invalid choice"); //If the value of "choice" doesn't match any of the cases in the switch statement, prints "invalid choice".
    }
    }
    while(choice!=5);
     }
     else
        printf("invalid pin.....\n");

    return 0;

}

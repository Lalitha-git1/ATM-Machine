#include<stdio.h> //This line includes the standard input-output header file
#include<stdlib.h>
void atm();// Function prototype declaration for the atm function.
void createacc();// Function prototype declaration for the createaccount function.
void deposit();// Function prototype declaration for the deposit function.
void withd();// Function prototype declaration for the withdrawal function.
void balance();// Function prototype declaration for the balance() function.
int main()
{
    int choice;// Declaration of an integer variable named choice to store the user's menu selection.
    do//Start of a do-while loop.
        {
    atm();
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice) //Starts a switch statement based on the value of the "choice" variable
    {
        case 1:createacc();// If choice is 1, it calls the createacc() function, which represents creating an account.
        break;// Breaks out of the switch statement.
        case 2:deposit();// If choice is 2, it calls the deposit() function, which represents depositing money.
        break;//// Breaks out of the switch statement.
        case 3:withd();//If choice is 3, it calls the withd() function, which represents withdrawing money.
        break;// Breaks out of the switch statement.
        case 4:balance();//If choice is 4, it calls the balance() function, which represents checking the account balance.
        break;// Breaks out of the switch statement.
        case 5:exit(0);// If choice is 5, it exits the program with a status code of 0.
        default:printf("invalid choice"); //If the value of "choice" doesn't match any of the cases in the switch statement, prints "invalid choice".
    }
    }
    while(choice!=5);

    return 0;
}
void atm()
{
    //Prints the menu options to the console.
    printf("-----------------ATM Banking Management system---------------------\n");
    printf("1.Create Account\n");
    printf("2.Deposit Account\n");
    printf("3.Withdrwal Account\n");
    printf("4.Check Balance\n");
    printf("5.Exit\n");
    printf("--------------------------------------------------------------------\n");
}
void createacc()
{
    printf("This is create function\n");
}
void deposit()
{
    printf("This is deposit function\n");
}
void withd()
{
    printf("This is withdrawal function\n");
}
void balance()
{
    printf("This is balance function\n");
}



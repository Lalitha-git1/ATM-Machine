#include<stdio.h> //This line includes the standard input-output header file
#include<stdlib.h> //standard library functions such as memory allocation.
#include<string.h> //string manipulation functions
#include<conio.h> //console input/output functions

//This defines a structure named ATM with three members: accountnumber, name, and amount, representing account information
struct ATM
{
    int accountnumber;
    char name[50];
    int amount;
};
//This declares a variable A1 of type struct ATM
struct ATM A1;
// Function prototype declaration for the atm function
void atm();
// Function prototype declaration for the createaccount function
void createacc();
// Function prototype declaration for the deposit function.
void deposit();
// Function prototype declaration for the withdrawal function
void withd();
// Function prototype declaration for the balance() function.
void balance();
int main()
{
    // Declaration of an integer variable named choice to store the user's menu selection
    int choice;
     char ch1,ch2,ch3,ch4;

     printf("Enter the password\n");
     ch1=getch();
     //the user to enter the password character by character and hides the input by printing asterisks (*)
     printf("*");
     //The getch() function reads a single character from the keyboard without echoing it to the console
     ch2=getch();
     printf("*");
     ch3=getch();
     printf("*");
     ch4=getch();
     printf("*");
     //This checks if the entered password matches '2002'
     if(ch1='2'&&ch2=='0'&&ch3=='0'&&ch4=='2')
     {
     //Start of a do-while loop.
    do
        {
    atm();
    printf("Enter your choice\n");
    scanf("%d",&choice);
    //Starts a switch statement based on the value of the "choice" variable
    switch(choice)
    {
        //// If choice is 1, it calls the createacc() function, which represents creating an account.
        case 1:createacc();
        // Breaks out of the switch statement
        break;
        // If choice is 2, it calls the deposit() function, which represents depositing money
        break;
        case 2:deposit();
        //If choice is 3, it calls the withd() function, which represents withdrawing money
        case 3:withd();
        break;
        //If choice is 4, it calls the balance() function, which represents checking the account balance
        case 4:balance();
        break;
        // If choice is 5, it exits the program with a status code of 0.
        case 5:exit(0);
        //If the value of "choice" doesn't match any of the cases in the switch statement, prints "invalid choice"
        default:printf("invalid choice");
    }
    }
    while(choice!=5);
     }
     else
        //This prints a message indicating an invalid PIN if the entered password does not match '2002'.
        printf("invalid pin.....\n");
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
// Function definition for createacc() begin
void createacc()
{
    printf("Enter account number:\n");
    scanf("%d",&A1.accountnumber);
    printf("Enter your name:\n");
    scanf("%s",A1.name);
    printf("Enter amount:\n");
    scanf("%d",&A1.amount);
}
// Function definition for deposit() begins
void deposit()

{
    int amt;
    printf("enter the amount to deposit\n");
    scanf("%d",&amt);
    if(amt<0)
        printf("Invalid amount\n");
        else
    A1.amount=A1.amount+amt;
}
// Function definition for withd() begins
void withd()
{
    printf("This is withdrawal function\n");
}
// Function definition for balance() begins
void balance()
{
    printf("account number: %d\n",A1.accountnumber);
    printf("name: %s\n",A1.name);
    printf("balance: %d\n",A1.amount);
}



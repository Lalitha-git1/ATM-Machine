#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct ATM
{
    int accountnumber;
    char name[50];
    int amount;
};
struct ATM A1;
void atm();// Function prototype declaration for the atm function.
void createacc();// Function prototype declaration for the createaccount function.
void deposit();// Function prototype declaration for the deposit function.
void withd();// Function prototype declaration for the withdrawal function.
void balance();// Function prototype declaration for the balance() function.

#endif
#include<stdio.h>
int main ()
{
    int i,opt,bal=0,num;

    do
    {
        printf("\n====== ATM MENU ======\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nChoose an option: ");scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Current Balance: %d\n", bal);
            break;
        case 2:
            printf("Enter amount to deposit: ");scanf("%d", &num);
            bal += num;
            break;
        case 3:
            printf("Enter amount to withdraw: ");scanf("%d", &num);
            printf("\nWithdrawal successful.");
            bal -= num;
            break;
        case 4:
            i = 1;
            break;
        default:
            break;
        }


    } while (i!=1);
    printf("Thank you for using the ATM.\n");

    
    return 0;
}
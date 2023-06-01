// includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// person scheme
struct person
{
    char name[50];
    int id;
    int pass;
    int balance;
    int loanAmount;
    int deposit;
    int withdraw;
    int transfer;
};

// function prototype
int loggedIN(struct person [], int u1);
int createAccount(struct person []);
int navigate(struct person [], int u1);
int profile(struct person [], int u1);
int takeLoan(struct person [], int u1);
int depositMoney(struct person [], int u1);
int withdrawMoney(struct person [], int u1);
int makeTransaction(struct person [], int u1);
int aboutProject();
int identification(struct person []);

// main funciton
int main()
{
    // dummy data
    struct person p[100];

    // person 0
    strcpy(p[0].name, "Sakib Hossain");
    p[0].id = 0;
    p[0].pass = 0;
    p[0].balance = 10300;
    p[0].loanAmount = 0;
    p[0].deposit = 0;
    p[0].withdraw = 0;
    p[0].transfer = 0;

    // person 1
    strcpy(p[1].name, "Shahriar Islam");
    p[1].id = 1;
    p[1].pass = 1;
    p[1].balance = 15400;
    p[1].loanAmount = 0;
    p[1].deposit = 0;
    p[1].withdraw = 0;
    p[1].transfer = 0;

    // person 2
    strcpy(p[2].name, "Nabil Khan");
    p[2].id = 2;
    p[2].pass = 2;
    p[2].balance = 12500;
    p[2].loanAmount = 0;
    p[2].deposit = 0;
    p[2].withdraw = 0;
    p[2].transfer = 0;

    printf("\n----------------Welcome to lost_bank!----------------\n\n");
    printf("\t\t[1] Log in\n");
    printf("\t\t[2] Create new account\n");
    printf("\t\t[3] Exit\n");
    printf("\t\t[4] About Project and Updates\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    // log in
    case 1:
        identification(p);
        break;

    // create new account
    case 2:
        createAccount(p);
        break;

    // exit program
    case 3:
        exit(0);
        break;

    // about us
    case 4:
        aboutProject();
        break;
    }

    return 0;
}

// loggedIN funtion defination
int loggedIN(struct person p[], int u1)
{
    int p1;
    printf("Password: ");
    scanf("%d", &p1);

    if (u1 == p[u1].id & p1 == p[u1].pass)
    {
        printf("\n----------------- %s! -----------------------\n", p[u1].name);
        navigate(p, u1);
    }
    else
    {
        printf("\n\t\tOpps! Wrong credentails.\t\t\n\n");
        printf("\t\t[1] Log in again\n");
        printf("\t\t[2] Home\t\t\n");
        printf("\t\t[3] Exit\t\t\n");

        int choice;
        printf("Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            loggedIN(p, u1);
        }
        else if (choice == 2)
        {
            main();
        }
        else
        {
            exit(0);
        }
    }
}

// navigate function defination
int navigate(struct person p[], int u1)
{
    printf("\n");
    printf("\t\t[1] Profile\t\t\n");
    printf("\t\t[2] Take Loan\t\t\n");
    printf("\t\t[3] Deposit Money\t\t\n");
    printf("\t\t[4] Withdraw Money\t\t\n");
    printf("\t\t[5] Make Transaction\t\t\n");
    printf("\t\t[6] Log Out\t\t\n");
    printf("\t\t[7] Exit\t\t\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        profile(p, u1);
        break;

    case 2:
        takeLoan(p, u1);
        break;

    case 3:
        depositMoney(p, u1);
        break;

    case 4:
        withdrawMoney(p, u1);
        break;

    case 5:
        makeTransaction(p, u1);
        break;

    case 6:
        main();
        break;

    case 7:
        exit(0);
        break;

    default:
        navigate(p, u1);
        break;
    }
}

// createAccount function defination
int createAccount(struct person p[])
{
    printf("\n\t\tCreating New Account...\n\n");
    int u1, p1;
    char n[50];
    printf("What is your name: ");
    scanf("%s", &n);
    printf("Please Choose Your ID: ");
    scanf("%d", &u1);
    printf("Please Choose Password: ");
    scanf("%d", &p1);
    
    strcpy(p[u1].name, n);
    p[u1].id = u1;
    p[u1].pass = p1;
    p[u1].balance = 0;
    p[u1].loanAmount = 0;
    p[u1].deposit = 0;
    p[u1].withdraw = 0;
    p[u1].transfer = 0;

    printf("\nYour account has been created successfuly :)\n\n");

    printf("\t\t[1] Log in\n");
    printf("\t\t[2] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        identification(p);
    }
    else
    {
        exit(0);
    }
}

// profile function defination
int profile(struct person p[], int u1)
{
    printf("\nYour Name: %s\n", p[u1].name);
    printf("Your ID: %d\n", p[u1].id);
    printf("Your Net Balance: %d BDT\n", p[u1].balance);
    printf("You owe bank: %d BDT\n", p[u1].loanAmount);
    printf("Your deposit amount: %d BDT\n", p[u1].deposit);
    printf("Your withdraw amount: %d BDT\n\n", p[u1].withdraw);
    
    printf("-----------------------------------------------------\n");
    printf("\t\t[1] Navigate\n");
    printf("\t\t[2] Log Out\n");
    printf("\t\t[3] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        main();
    }
    else if (choice == 1)
    {
        navigate(p, u1);
    }
    else
    {
        exit(0);
    }
}


// id input
int identification(struct person p[])
{
        int u1;
        printf("User ID: ");
        scanf("%d", &u1);
        loggedIN(p, u1);
}



// takeLoan function defination
int takeLoan(struct person p[], int u1)
{
    printf("\nYour Net Balance: %d BDT\n", p[u1].balance);

    printf("How much money you want to take loan: ");
    scanf("%d", &p[u1].loanAmount);

    p[u1].balance += p[u1].loanAmount;
    printf("After taking loan, Your Net Balance: %d BDT\n\n", p[u1].balance);

    printf("-----------------------------------------------------\n");
    printf("\t\t[1] Main Menu\n");
    printf("\t\t[2] Log Out\n");
    printf("\t\t[3] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        navigate(p, u1);
    }
    else if (choice == 2)
    {
        main();
    }
    else
    {
        exit(0);
    }
}

// depositMoney function defination
int depositMoney(struct person p[], int u1)
{
    printf("\nYour Net Balance: %d BDT\n", p[u1].balance);

    printf("How much money you want to deposit: ");
    scanf("%d", &p[u1].deposit);

    p[u1].balance += p[u1].deposit;
    printf("After Deposit, Your Net Balance: %d BDT\n\n", p[u1].balance);

    printf("-----------------------------------------------------\n");
    printf("\t\t[1] Main Menu\n");
    printf("\t\t[2] Log Out\n");
    printf("\t\t[3] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        navigate(p, u1);
    }
    else if (choice == 2)
    {
        main();
    }
    else
    {
        exit(0);
    }
}

// withdrawMoney function defination
int withdrawMoney(struct person p[], int u1)
{
    printf("\nYour Net Balance: %d BDT\n", p[u1].balance);

    printf("How much money you want to Withdraw: ");
    scanf("%d", &p[u1].withdraw);

    p[u1].balance -= p[u1].withdraw;
    printf("After withdraw, Your Net Balance: %d BDT\n\n", p[u1].balance);

    printf("-----------------------------------------------------\n");
    printf("\t\t[1] Main Menu\n");
    printf("\t\t[2] Log Out\n");
    printf("\t\t[3] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        navigate(p, u1);
    }
    else if (choice == 2)
    {
        main();
    }
    else
    {
        exit(0);
    }
}

// makeTransaction function defination
int makeTransaction(struct person p[], int u1)
{
    printf("\nYour Net Balance: %d BDT\n", p[u1].balance);

    printf("How much money you want to Transfer: ");
    scanf("%d", &p[u1].transfer);

    p[u1].balance -= p[u1].transfer;
    printf("After Transaction, Your Net Balance: %d BDT\n\n", p[u1].balance);

    printf("-----------------------------------------------------\n");
    printf("\t\t[1] Main Menu\n");
    printf("\t\t[2] Log Out\n");
    printf("\t\t[3] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        navigate(p, u1);
    }
    else if (choice == 2)
    {
        main();
    }
    else
    {
        exit(0);
    }
}

// aboutProject funtion defination
int aboutProject()
{
    printf("\nThis Project is called Bank Management System using C progrmamming language.\n\n");
    printf("Some key features of this project: \n");
    printf("1. Create new account\n");
    printf("2. Different schemes\n");
    printf("3. Loan system\n");
    printf("4. Update information (Not included yet!)\n");
    printf("5. Removing existing account (Not included yet!)\n");
    printf("6. Show customer profile\n");
    printf("7. Calculate after transaction\n");
    printf("8. Show the list of exitsting account (Not included yet!)\n");
    printf("9. Log out / Log in\n");
    printf("10. Exit program\n");

    printf("\nContributed by: \n");
    printf("1. Nabil Khan (1036)\n");
    printf("2. Md. Sakib hossain (1266)\n");
    printf("3. Md. Shahriar Islam (1259)\n");
    printf("4. Md Assaduzzaman (1233)\n\n\n");

    printf("\t\t[1] Home\n");
    printf("\t\t[2] Exit\n");

    int choice;
    printf("Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        main();
    }
    else
    {
        exit(0);
    }
}


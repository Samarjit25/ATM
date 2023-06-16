#include <stdio.h>
int main()
{
    char card, cad;
    int n, p, a, b, diff, i;
    // char s,k;
    // char sh;
    
    printf("Welcome to the ATM\n\n");
    printf("Please enter your card\n\n");
    scanf("%c", &card);
    if (card == 'k')
    {
        printf("Hello Ken Keneki\n\n");
        printf("Press 1 to withdraw money from your account\n");
        printf("Press 2 to check the balance\n");

        b = 50000;

        scanf("%d", &n);
        if (n == 1)
        {
            printf("Please enter your 4 digit pin\n\n");
            scanf("%d", &p);

            if (p == 1234)
            {
                printf("Enter the amount to withdraw\n\n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("Insufficient balance\n\n");
                }
                else
                {
                    printf("Collect your money\n\n");
                    diff = b - a;
                    printf("Current balance is %d", diff);
                }
            }

            else
            {
                printf("Wrong pin\n\n");
                printf("Try again\n\n");
                scanf("%d", &p);

                if (p == 1234)
                {
                    printf("Enter the amount to withdraw\n\n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("Insufficient balance\n\n");
                    }
                    else
                    {
                        printf("Collect your money\n\n");
                        diff = b - a;
                        printf("Current balance is %d", diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again later \n\n");
                }
            }
        }

        else if (n == 2)
        {
            printf("Enter your 4 digit pin: \n");
            scanf("%d", &p);

            if (p != 1234)
            {
                printf("Your request has been blocked\n");
                printf("Please try again later\n");
            }
            else
            {
                printf("Your balance is %d\n\n", b);
            }
        }
        else
        {
            printf("Your bank balance is %d\n\n", b);
        }
    }

    else if (card == 's')
    {
        // printf("Hello Samarjit");
        printf("Hello Samarjit\n\n");
        printf("Press 1 to withdraw money from your account\n");
        printf("Press 2 to check the balance\n");

        b = 100000;

        scanf("%d", &n);
        if (n == 1)
        {
            printf("Please enter your 4 digit pin\n\n");
            scanf("%d", &p);

            if (p == 2508)
            {
                printf("Enter the amount to withdraw\n\n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    printf("Collect your money\n\n");
                    diff = b - a;
                    printf("Current balance is %d\n", diff);
                }
            }

            else
            {
                printf("Wrong pin\n\n");
                printf("Try again\n\n");
                scanf("%d", &p);

                if (p == 2508)
                {
                   printf("Enter the amount to withdraw\n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("Insufficient balance\n");
                    }
                    else
                    {
                        printf("Collect your money\n\n");
                        diff = b - a;
                        printf("Current balance is %d\n", diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again later \n");
                }
            }
        }

        else if (n == 2)
        {
            printf("Enter your 4 digit pin: \n");
            scanf("%d", &p);

            if (p != 2508)
            {
                printf("Your request has been blocked\n");
                printf("Please try again later\n");
            }
            else
            {
                printf("Your balance is %d\n", b);
            }
        }
        else
        {
            printf("Your bank balance is %d\n", b);
        }
    }

         else if (card == 'g')
    {
        printf("Hello Sharmishtha\n\n");
        printf("Press 1 to withdraw money from your account\n");
        printf("Press 2 to check the balance\n");

        b = 0;

        scanf("%d", &n);
        if (n == 1)
        {
            printf("Please enter your 4 digit pin\n\n");
            scanf("%d", &p);

            if (p == 1711)
            {
                printf("Enter the amount to withdraw\n\n");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("Insufficient balance\n\n");
                }
                else
                {
                    printf("Collect your money\n\n");
                    diff = b - a;
                    printf("Current balance is %d", diff);
                }
            }

            else
            {
                printf("Wrong pin\n\n");
                printf("Try again\n\n");
                scanf("%d", &p);

                if (p == 1711)
                {
                    printf("Enter the amount to withdraw\n\n");
                    scanf("%d", &a);

                    if (a > b)
                    {
                        printf("Insufficient balance\n\n");
                    }
                    else
                    {
                        printf("Collect your money\n\n");
                        diff = b - a;
                        printf("Current balance is %d", diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again later \n\n");
                }
            }
        }

        else if (n == 2)
        {
            printf("Enter your 4 digit pin: \n");
            scanf("%d", &p);

            if (p != 1711)
            {
                printf("Your request has been blocked\n");
                printf("Please try again later\n");
            }
            else
            {
                printf("Your balance is %d\n\n", b);
            }
        }
        else
        {
            printf("Your bank balance is %d\n\n", b);
        }
    
    }
    else {
        printf("Your card is invalid");
    }
}

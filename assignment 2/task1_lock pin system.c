#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    //pin door lock system

    int correctpin=1234;
    int userpin;
    int pin_attempts=0;
    int max_attempt=3;

    while(1)
    {
        printf("enter PIN\n");
        scanf("%d",&userpin);
    if (userpin<=999)
        {
        printf("PIN is too short(must be 4 digits)\n");
        }
        else if(userpin> 9999)
        {
        printf("PIN is too long(must be 4 digits)\n");
        }
    else
        {
        printf("PIN length is 4 digits\n");
        }

    if(userpin==correctpin)
        {
       printf("Access granted.\n");
        break;
        }
    else
        {
            pin_attempts ++;
            printf("Wrong PIN entered,Attempt %d of %d\n", pin_attempts, max_attempt);

            if(pin_attempts>=max_attempt)
            {
                printf("ACCESS DENIED! SYSTEM LOCKED!Try again in 5 seconds...\n");

                for(int i=5; i>=1; i--)
                {
                    printf("%d...", i);
                    fflush(stdout);
                    Sleep(1000);
                }

            printf("you may try again now\n");
            pin_attempts=0;
            }
        }


    }
    if (userpin==1234)
    {
      int choice;
        printf("==== DEVICE MENU ====\n");
        printf("1. Open door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. EXIT\n");

    printf("Select an option  to continue(1-4)\n");
    scanf("%d",&choice);

        switch (choice)
        {
             case 1:
                    printf("Access granted.Door unlocked");
                break;
             case 2:
                    printf("Change username feature coming soon.");
                break;
             case 3:
                    printf("Change PIN feature coming soon.");
                break;
             case 4:
                    printf("Exiting system.");
                break;
            default:
                    printf("Invalid option! Please try again.");
                break;
         }

    }


    return 0;
}

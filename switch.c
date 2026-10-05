#include<stdio.h>

int main(void)
{
    printf("====CYBER SECURITY MENU====");
    printf("1.Learn Networking\n");
    printf("2.Learn Linux\n");
    printf("3.Learn C programming\n");
    printf("4.Learn Ethical hacking\n");
    printf("5.Exit\n");

    int choice;
    printf("Enter a choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Opening Networking...");
            break;
        case 2:
            printf("Opening Linux...");
            break;
        case 3:
            printf("Opening C Programming...");
            break;
        case 4:
            printf("Opening Ethical Hacking...");
            break;
        case 5:
            printf("Goodbye,see you later");
            break;
        default:
            printf("Invalid Choice,choose the appropriate choice");
    }
    return 0;
}

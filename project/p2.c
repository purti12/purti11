#include<stdio.h>
void login();
void create_acc();
void deposite();
void withdrawal();
void display(); 
int main()
{
    printf("...............WELCOME TO BANK.................");
    int n1;
    printf("\n1. Login\n2. Create Account\n");
   scanf("%d",&n1);
    switch(n1)
    {
        case 1:
        login();
        /* int n2;
        printf("\n1.deposite cash\n2. withdrawal cash\n3.display account details\n4.Log out");
        switch(n2)
        {
            case 1:
            deposite();
            break;

            case 2:
            withdrawal();
            break;

            case 3:
            display();
            break;

            case 4:
            exit;


        } */
        break;

        case 2:
        create_acc();
        break;
         
        default:
        printf("\n INVALID OPTION !!!");
    }


}
void login()
{
  char username[50];
   char password[50];
 printf("\n Enter the username : ");
  scanf("%c",&username[50]);
   printf("\n Enter password : ");
  scanf("%c",&password[50]);


}
void create_acc()
{
   char name[50];
    char add[100];
    long long contact;
    double balance;
    int account_number=101;
     printf("Enter Account holder's name : ");
     scanf("%c",&name);
     printf("\nEnter Account holder's surname : ");
    scanf("%c",&surname);
     printf("\nEnter Account holder's address (use _ instead of space) : ");
     scanf("%c",&add);
    printf("\nEnter Account holder's mobile number : ");
    scanf("%lld",&contact);
     printf("\nEnter the initial deposite (minimum amount should be 500): ");
    scanf("%lf",&balance);
     printf("\nAccount is successfully created...");
     printf("\nAccount number is %d ",account_number++);   
}
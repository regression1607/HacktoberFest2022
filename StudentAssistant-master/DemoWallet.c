/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Demo Wallet C Code

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int DemoWallet()
{
    int code;
    printf("\t\t\tWelcome To Demo Wallet\n\n");
    printf("\t\t\tPlease Enter Your Wallet Pin\n\n\t\t\t");
    scanf("%d",&code);
    system ("cls");
    switch(code)
    {
        case 1234:
{
  int code1;
  printf("\n\t\t\tLog In Successful\n\n");
  printf("\t\t\tChoose An Option:\n\n\t\t\t1.Send Money\n\t\t\t2.Buy Airtime\n\t\t\t3.Payment\n\t\t\t4.Cash Out\n\t\t\t5.Cheak Balence\n\n\t\t\t");
  scanf("%d",&code1);
  system ("cls");
  switch(code1)

  {
    case 1:
{
            int a,b;
            int code2;
            printf("\n\t\t\tEnter A Number: ");
            scanf("%d",&a);
            printf("\n\t\t\tEnter Amount: ");
            scanf("%d",&b);
            system ("cls");
            printf("\n\t\t\tSend Money Taka %d To %d\n\n\t\t\t1.Confirm\t2.Close\n\n\t\t\t",b,a);
            scanf("%d",&code2);
            system ("cls");
            switch(code2)
            {
    case 1:
        {
        int pin;
    printf("\n\t\t\tPlease Enter Your Wallet Pin\n\n\t\t\t");
    scanf("%d",&code);
    system ("cls");
    switch(code)
    {
        case 1234:
            {
                printf("\n\t\t\tSend Money Taka %d To %d Has Been Successful.\n\n\t\t\t",b,a);
                mainmenu();
                break;
            }
            break;
        default:
            puts("\n\t\t\tWrong Pin");
            mainmenu();
            break;
    }
    return(0);
    break;
        }
            }
            break;
}
    case 2:
{
            int a,b;
            int code2;
            printf("\n\t\t\tEnter Airtime Number: ");
            scanf("%d",&a);
            printf("\n\t\t\tEnter Amount: ");
            scanf("%d",&b);
            system ("cls");
            printf("\n\t\t\tBuy Airtime Taka %d To %d\n\n\t\t\t1.Confirm\t2.Close\n\n\t\t\t",b,a);
            scanf("%d",&code2);
            system ("cls");
            switch(code2)
            {
    case 1:
        {
        int pin;
    printf("\n\t\t\tPlease Enter Your Wallet Pin\n\n\t\t\t");
    scanf("%d",&code);
    system ("cls");
    switch(code)
    {
        case 1234:
            {
                printf("\n\t\t\tBuy Airtime Taka %d To %d Has Been Successful.\n\n\t\t\t",b,a);
                mainmenu();
                break;
            }
            break;
        default:
            puts("\n\t\t\tWrong Pin");
            mainmenu();
            break;
    }
    break;
        }
            }
            break;
}
    case 3:
    puts("\n\t\tPlease Contact With Jameur Fida To Activate Your Demo Wallet.");
    mainmenu();
    break;
    case 4:
        {
            int a,b;
            int code2;
            printf("\n\t\t\tEnter Agent Number: ");
            scanf("%d",&a);
            printf("\n\t\t\tEnter Amount: ");
            scanf("%d",&b);
            system ("cls");
            printf("\n\t\t\tCash Out Taka %d To %d\n\n\t\t\t1.Confirm\t2.Close\n\n\t\t\t",b,a);
            scanf("%d",&code2);
            system ("cls");
            switch(code2)
            {
    case 1:
        {
        int pin;
    printf("\n\t\t\tPlease Enter Your Wallet Pin\n\n\t\t\t");
    scanf("%d",&code);
    system ("cls");
    switch(code)
    {
        case 1234:
            {
                printf("\n\t\t\tCash Out Taka %d To %d Has Been Successful.\n\n\t\t\t",b,a);
                mainmenu();
                break;
            }
            break;
        default:
            puts("\n\t\t\tWrong Pin");
            mainmenu();
            break;
    }
    break;
        }
            }
            break;
}
    case 5:
    puts("\n\t\tPlease Contact With Jameur Fida To Activate Your Demo Wallet.");
    mainmenu();
    break;
  }
  break;
}
    default:
        puts("\n\t\t\tWrong Pin");
        mainmenu();
        return(0);
        break;
        getch();
  return(0);
}
}

/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Anywhere In The App The Default Password Is: 1234

//Student Assistant Code

#include <stdio.h>
#include <time.h>
//Custom Made C Files Are Included As Header Files...
#include "Calculator.c"
#include "DCalculator.c"
#include "EasyMatrix.c"
#include "ClassRoutine.c"
#include "PersonalDiary.c"
#include "PeriodicTable.c"
#include "DemoWallet.c"
#include "Backmenu.h"   //Custom Made .h File

int t(void) //for time
{
    time_t t;
    time(&t);
    printf("Date And Time: %s\n",ctime(&t));

    return 0 ;
}

int main()
{
    //loaderanim();
    system("cls");
    //textbackground(13);
    int input,sta;
    char stdast[]="\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Student Assistant \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    char um[]="This Function Is Under Maintanance.Will Add On Next Update";
    gotoxy(18,2);
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Student Assistant");
    for(sta=0; sta<=strlen(stdast); sta++)
    {
        delay(20);
        printf("%c",stdast[sta]);
    }
    //printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(18,4);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Calculator   ");
    gotoxy(18,6);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Easy Matrix");
    gotoxy(18,8);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Class Routine");
    gotoxy(18,10);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Personal Diary");
    gotoxy(18,12);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Periodic Table");
    gotoxy(18,14);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Finance Manager");
    gotoxy(18,16);
    printf("\xDB\xDB\xDB\xDB\xB2 7. Connect Wallet");
    gotoxy(18,18);
    printf("\xDB\xDB\xDB\xDB\xB2 8. Close Application");
    //gotoxy(18,20);
    //printf("\xDB\xDB\xDB\xDB\xB2 7. Close Application");
    gotoxy(18,20);
    printf("-----------------------------------------");
    gotoxy(18,21);
    t();
    gotoxy(18,23);
    printf("Enter Your Choice: ");
    scanf("%d",&input);
    switch(input)
    {
    case 1:
        system("cls");
        printf("\n       Calculator\n\n\n 1. Simple Calculator\n\n 2. Dynamic Calcdulator\n\n 0. Main Menu\n\n");
        scanf("%d",&input);
        if (input==1)
        {
            system("cls");
            Calculator();
        }
        else if (input==2)
        {
            system("cls");
            DCalculator();
        }
        else if (input==0)
        {
            main();
        }
        else
        {
            mainmenu();
        }
        break;
    case 2:
        system("cls");
        EasyMatrix();
        break;
    case 3:
        system("cls");
        ClassRoutine();
        break;
    case 4:
        system("cls");
        PersonalDiary();
        break;
    case 5:
        system("cls");
        PeriodicTable();
        break;
    case 6:
    {
        gotoxy(15,2);
        //printf("This Function Is Under Maintanance.Will Add On Next Update.");
        for(sta=0; sta<=strlen(um); sta++)
    {
        delay(10);
        printf("%c",um[sta]);
    }
        if(getch())
            main();
    }
    case 7:
        system("cls");
        DemoWallet();
        break;
    case 8:
    {
        system("cls");
        gotoxy(18,3);
        printf("Thanks For Using Student Assistant...");
        gotoxy(20,7);
        printf("Exiting In 5 Second...........");
        //flushall();
        delay(5000);
        exit(0);
    }
    default:
    {
        gotoxy(18,23);
        printf("\aWrong Entry!!Please Re-entered Correct Option");
        if(getch())
            main();
    }

    }
}

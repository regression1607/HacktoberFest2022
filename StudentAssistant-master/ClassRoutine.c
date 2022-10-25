/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Class Routine Code

#include <stdio.h>

struct routine
{
    char name[10];
    char code[8];
    char teacher[5];
    char room[5];
    char time[10];
};

int input,i,c,d;
typedef struct routine class;

void editclass(char dayname[15])
{
    class day[7][10];
    int classdata[7];
    FILE *cs; //Class File
    system("cls");
        printf("\n How Many Class You Want To Save For This Day (Max: 10) : ");
        scanf("%d",&c);
        classdata[d-1]=c;
        system("cls");
        cs=fopen(dayname,"w");
        fprintf(cs,"Day: %s\n\n",dayname);
        for(i=0;i<c;i++)
        {
            printf("Enter Class %d Name: ",i+1);
            getchar();
            gets(day[d-1][i].name);
            fprintf(cs," Class %d \n\n\nName: %s\n\n",i+1,day[d-1][i].name);
            printf("Enter Class Code: ");
            gets(day[d-1][i].code);
            fprintf(cs,"Code: %s\n\n",day[d-1][i].code);
            printf("Enter Class Teacher: ");
            gets(day[d-1][i].teacher);
            fprintf(cs,"Teacher: %s\n\n",day[d-1][i].teacher);
            printf("Enter Class Room: ");
            gets(day[d-1][i].room);
            fprintf(cs,"Room: %s\n\n",day[d-1][i].room);
            printf("Enter Class Time: ");
            gets(day[d-1][i].time);
            fprintf(cs,"Time: %s\n\n\n",day[d-1][i].time);
            system("cls");
        }
        fclose(cs);
}

void printclass(char dayname[15])
{
    system("cls");
        FILE *fptr;
        fptr = fopen(dayname,"r");
        if (fptr == NULL)
        {
            printf("     Hurrah!! You Have No Classes Today. :D \n\n");
            ClassRoutine();
        }
        c = fgetc(fptr);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(fptr);
        }
        int input;
        printf("Press 0 To Go Back To Main Menu: ");
        scanf("%d",&input);
        if (input==0)
        {
            system("cls");
            ClassRoutine();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n\n");
            ClassRoutine();
        }

        fclose(fptr);
}

int ClassRoutine()
{
    start:
    printf("\n     Welcome To Routine Management System\n\n\n 1. View Routine\n\n 2. Set Up Routine\n\n 0. Main Menu\n\n");
    scanf("%d",&input);
    if (input==1)
    {
        system("cls");
        printf("\n     Which Day Is Today\n\n\n 1. Saturday\n\n 2. Sunday\n\n 3. Monday\n\n 4. Tuesday\n\n 5. Wednesday\n\n 6. Thursday\n\n 7. Friday\n\n");
        scanf("%d",&d);

         if(d==1)
        {
            char dayname[]="Saturday";
            printclass(dayname);
        }
        else if(d==2)
        {
            char dayname[]="Sunday";
            printclass(dayname);
        }
        else if(d==3)
        {
            char dayname[]="Monday";
            printclass(dayname);
        }
        else if(d==4)
        {
            char dayname[]="Tuesday";
            printclass(dayname);
        }
        else if(d==5)
        {
            char dayname[]="Wednesday";
            printclass(dayname);
        }
        else if(d==6)
        {
            char dayname[]="Thursday";
            printclass(dayname);
        }
        else if(d==7)
        {
            char dayname[]="Friday";
            printclass(dayname);
        }

    }
    else if (input==2)
    {
        system("cls");
        printf("\n     Set Up Your Routine\n\n\n 1. Saturday\n\n 2. Sunday\n\n 3. Monday\n\n 4. Tuesday\n\n 5. Wednesday\n\n 6. Thursday\n\n 7. Friday\n\n");
        scanf("%d",&d);

        if(d==1)
        {
            char dayname[]="Saturday";
            editclass(dayname);
        }
        else if(d==2)
        {
            char dayname[]="Sunday";
            editclass(dayname);
        }
        else if(d==3)
        {
            char dayname[]="Monday";
            editclass(dayname);
        }
        else if(d==4)
        {
            char dayname[]="Tuesday";
            editclass(dayname);
        }
        else if(d==5)
        {
            char dayname[]="Wednesday";
            editclass(dayname);
        }
        else if(d==6)
        {
            char dayname[]="Thursday";
            editclass(dayname);
        }
        else if(d==7)
        {
            char dayname[]="Friday";
            editclass(dayname);
        }
        goto start;

    }
    else if (input==0)
    {
        main();
    }
    else
    {
        system("cls");
        printf("          Wrong Input\n\n");
        goto start;
    }
    return 0;
}

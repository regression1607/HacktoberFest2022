/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Persoal Diary C Code

#include <windows.h>
#include <stdio.h>
#include <conio.h>   //contains delay(),getch(),gotoxy(),etc.
#include <time.h>
#include <string.h>

char notedate[10];
COORD coord = {0, 0}; // sets coordinates to 0,0
//COORD max_buffer_size = GetLargestConsoleWindowSize(hOut);
COORD max_res,cursor_size;
void gotoxy (int x, int y)
{
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

/* There is some problem with this back menu function.Need to fix this.

void backnote()
{
    int input;
    printf("\n\n Press 0 To Go Back To Main Menu: ");
        scanf("%d",&input);
        if (input==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n\n");
            main();
        }
} */

void backnote()
{
    int mn;
     printf("\n\n\ Press 0 To Go Back Main Menu: ");
         scanf("%d",&mn);
         if (mn==0)
         {
             system ("cls");
             notemenu();
         }
         else
         {
             system ("cls");
             printf("\n     Wrong Input");
             backnote();
         }
}

void password(void) //for password option
{
    char password[10]= {"1234"};
    system("cls");
    char d[25]=" Password Protected ";
    char ch,pass[10];
    int i=0,j;
    //textbackground(WHITE);
    //textcolor(RED);
    gotoxy(8,4);
    for(j=0; j<15; j++)
    {
        delay(20);
        printf("!");
    }
    for(j=0; j<strlen(d); j++)
    {
        delay(20);
        printf("%c",d[j]);
    }
    for(j=0; j<15; j++)
    {
        delay(20);
        printf("!");
    }
    gotoxy(10,10);
    gotoxy(15,7);
    printf("Enter Password: ");

    while(ch!=13)
    {
        ch=getch();

        if(ch!=13 && ch!=8)
        {
            putch('*');
            pass[i] = ch;
            i++;
        }
    }
    pass[i] = '\0';
    if(strcmp(pass,password)==0)
    {

        gotoxy(15,9);
        //textcolor(BLINK);
        printf("Password Matched");
        gotoxy(15,11);
        printf("Press Any Key To Continue.....");
        getch();
        system("cls");
        notemenu();
    }
    else
    {
        gotoxy(15,16);
        printf("\aWarning!! Incorrect Password");
        getch();
        system("cls");
        main();
    }
}

void savenote(char notedate[10])
{
    char notedata[10000];
    FILE *note;
    system("cls");
    note=fopen(notedate,"w");
    fprintf(note," Day: %s\n\n",notedate);

    printf("\n\n Enter Your Text: ");
    getchar();
    gets(notedata);
    fprintf(note," Note: %s\n\n",notedata);
    fclose(note);
    backnote();
}

void printnote(char notedate[10])
{
    char c;
    system("cls");
        FILE *fptr;
        fptr = fopen(notedate,"r");
        if (fptr == NULL)
        {
            printf("\n     No Data Written For This Day. \n\n");
            main();
        }
        c = fgetc(fptr);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(fptr);
        }
        //mainmenu();
        backnote();
        fclose(fptr);
}

int notemenu()
{
    //gotoxy(8,4);
    char input;
    printf("\n     Write Your Personal Dairy\n\n\n 1. Create A New Note\n\n 2. View Previous Notes\n\n 0. Main Menu\n\n Enter Choice: ");
    scanf("%s",&input);
    switch(input)
    {
    case '1':
    {
        printf("\n\n\n Enter The Date (DD-MM-YY) : ");
        scanf("%s",&notedate);
        savenote(notedate);
        break;
    }
    case '2':
    {
        printf("\n\n\n Enter The Date You Want To View (DD-MM-YY) : ");
        scanf("%s",&notedate);
        printnote(notedate);
        break;
    }
    case '0':
        main();
        break;
    default:
    {
        gotoxy(10,23);
        printf("\aWrong Entry!!Please re-entered correct option");
        if(getch())
            system("cls");
            notemenu();
    }
    }
}

int PersonalDiary()
{
    password();
}

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char ans=0;
int ok;
int b, valid=0;

// function declaration

// Welcome function Declaration
void WelcomeScreen(void); 
// Title function declaration
void Title(void);
// Main menu declaration
void MainMenu(void);
// Login screen declaration
void LoginScreen(void);
// Add record function declaration
void Add_rec(void);
// Function list declaration
void func_list(void);
// Search record declaration
void Search_rec(void);
// Edit records declaration
void Edit_rec(void);
// Delete record declaration
void Delete_rec(void);
// Exit record declaration
void Exit_rec(void);
void gotoxy(short x, short y)

{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

// List of global variables
   struct patient
   {
       int age;
       char Gender;
       char First_Name[50];
       char Last_Name[50];
       char Contact_No[50];
       char Address[50];
       char Email[50];
       char Doctor[50];
       char Problem[50];
   };
   struct patient p,temp_c;
   void main(void)
   {
       WelcomeScreen();
       Title();
       LoginScreen();
   }

   /***************************Welcome Screen****************************/
    void WelcomeScreen(void)
   //Function for wecome screen 
      {
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t###################################");
        printf("\n\t\t\t#\t\tWelcome To\t\t#");
        printf("\n\t\t\t\t\n Alexis Hospital Management System   #");
        printf("\n#################################################################");
        printf("\n\n\nPress any key to continue .................\n");
        getch();
        system("cls");
       //use to clear screen
      }
      /**************************Title Screen****************************/
      void Title(void)
      {
          printf("\n\n\t\t-------------------------------------------------------");
          printf("\n\t\t\t          Alexis Hospital             ");
          printf("\n\n\t\t-----------------------------------------------");
      }

      


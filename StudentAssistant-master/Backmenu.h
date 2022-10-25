/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

/*  A simple and short Custom made header file for back to main menu from anywhere.
    You just need to call the mainmenu(); function and this take you to the main(); function.
    You can add this header file on your IDE like me.
    Because this function helps a lot when you start making a project.                 */

void mainmenu()
{
    int mn;
     printf("\n\n\Press 0 To Go Back Main Menu: ");
         scanf("%d",&mn);
         if (mn==0)
         {
             system ("cls");
             main();
         }
         else
         {
             system ("cls");
             printf("\n     Wrong Input");
             mainmenu();
         }
}

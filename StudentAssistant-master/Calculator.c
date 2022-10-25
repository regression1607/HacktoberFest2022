/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Scientific Calculator Code

#include <stdio.h>
#include <conio.h>
#include <math.h>

int Calculator() {
int choice, i, a, b;
float x, y, result;
printf("\n     Welcome To Furious Calculator\n\n\n");
printf("1. Addition     2. Subtraction     3. Multiplication\n\n4. Division     ");
printf("5. Square root     6. X ^ Y\n\n7. X ^ 2        8. X ^ 3           ");
printf("9. 1 / X\n\n10. X^(1 / Y)  11. X ^ (1 / 3)     ");
printf("12. 10 ^ X\n\n13. X!         14. %%               15. log10(x)\n\n16. Modulus    ");
printf("17. Sin(X)          18. Cos(X)\n\n19. Tan(X)     20. Cosec(X)        ");
printf("21. Cot(X)\n\n22. Sec(X)     23. About           0. Back\n\n");
printf("Enter Your Choice: ");
scanf("%d", &choice);
system ("cls");
if(choice == 0) main();
switch(choice) {
case 1:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x + y;
printf("\nResult: %f", result);
mainmenu();
break;
case 2:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result=x-y;
printf("\nResult: %f", result);
mainmenu();
break;
case 3:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x * y;
printf("\nResult: %f", result);
mainmenu();
break;
case 4:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x / y;
printf("\nResult: %f", result);
mainmenu();
break;
case 5:
printf("Enter X: ");
scanf("%f", &x);
result = sqrt(x);
printf("\nResult: %f", result);
mainmenu();
break;
case 6:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, y);
printf("\nResult: %f", result);
mainmenu();
break;
case 7:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 2);
printf("\nResult: %f", result);
mainmenu();
break;
case 8:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 3);
printf("\nResult: %f", result);
mainmenu();
break;
case 9:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, -1);
printf("\nResult: %f", result);
mainmenu();
break;
case 10:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, (1/y));
printf("\nResult: %f", result);
mainmenu();
break;
case 11:
printf("Enter X: ");
scanf("%f", &x);
y = 3;
result = pow(x, (1/y));
printf("\nResult: %f", result);
mainmenu();
break;
case 12:
printf("Enter X: ");
scanf("%f", &x);
result = pow(10, x);
printf("\nResult: %f", result);
mainmenu();
break;
case 13:
printf("Enter X: ");
scanf("%f", &x);
result = 1;
for(i = 1; i <= x; i++) {
result = result * i;
}
printf("\nResult: %.f", result);
mainmenu();
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = (x * y) / 100;
printf("\nResult: %.2f", result);
mainmenu();
break;
case 15:
printf("Enter X: ");
scanf("%f", &x);
result = log10(x);
printf("\nResult: %.2f", result);
mainmenu();
break;
case 16:
printf("Enter X: ");
scanf("%d", &a);
printf("\nEnter Y: ");
scanf("%d", &b);
result = a % b;
printf("\nResult: %d", result);
mainmenu();
break;
case 17:
printf("Enter X: ");
scanf("%f", &x);
result = sin(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
mainmenu();
break;
case 18:
printf("Enter X: ");
scanf("%f", &x);
result = cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
mainmenu();
break;
case 19:
printf("Enter X: ");
scanf("%f", &x);
result = tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
mainmenu();
break;
case 20:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f", result);
mainmenu();
break;
case 21:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
mainmenu();
break;
case 22:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
mainmenu();
break;
default:
printf("\nInvalid Choice!");
}
getch();
mainmenu();
return 0;
}

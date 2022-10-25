/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Easy Matrix Code

#include <stdio.h>

void MatrixAddition()
{
        int p,q,x,y,i,j;
    printf("Enter The Rows Number Of 1st Matrix: ");
    scanf("%d",&p);
    printf("Enter The Columns Number Of 1st Matrix: ");
    scanf("%d",&q);
    printf("Enter The Rows Number Of 2nd Matrix: ");
    scanf("%d",&x);
    printf("Enter The Columns Number Of 2nd Matrix: ");
    scanf("%d",&y);
    system("cls");
    if(p==x && q==y)
    {
        int a[p][q],b[x][y],c[p][q];
        for(j=0;j<p;j++)
        {
            for(i=0;i<q;i++)
            {
                printf("Enter a%d%d ",j+1,i+1);
                scanf("%d",&a[j][i]);
            }
        }
        system("cls");
        for(j=0;j<x;j++)
        {
            for(i=0;i<y;i++)
            {
                printf("Enter b%d%d ",j+1,i+1);
                scanf("%d",&b[j][i]);
                c[j][i]=a[j][i]+b[j][i];
            }
        }
        system("cls");
        printf("Your Addition Result Is: \n\n");
        for(j=0;j<x;j++)
        {
            for(i=0;i<y;i++)
            {
                printf(" %d ",c[j][i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This Matrix Is Undefined\n");
    }
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
}

void MatrixSubstraction()
{
        int p,q,x,y,i,j;
    printf("Enter The Rows Number Of 1st Matrix: ");
    scanf("%d",&p);
    printf("Enter The Columns Number Of 1st Matrix: ");
    scanf("%d",&q);
    printf("Enter The Rows Number Of 2nd Matrix: ");
    scanf("%d",&x);
    printf("Enter The Columns Number Of 2nd Matrix: ");
    scanf("%d",&y);
    system("cls");
    if(p==x && q==y)
    {
        int a[p][q],b[x][y],c[p][q];
        for(j=0;j<p;j++)
        {
            for(i=0;i<q;i++)
            {
                printf("Enter a%d%d ",j+1,i+1);
                scanf("%d",&a[j][i]);
            }
        }
        system("cls");
        for(j=0;j<x;j++)
        {
            for(i=0;i<y;i++)
            {
                printf("Enter b%d%d ",j+1,i+1);
                scanf("%d",&b[j][i]);
                c[j][i]=a[j][i]-b[j][i];
            }
        }
        system("cls");
        printf("Your Addition Result Is: \n\n");
        for(j=0;j<x;j++)
        {
            for(i=0;i<y;i++)
            {
                printf(" %d ",c[j][i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This Matrix Is Undefined\n");
    }
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
}

void MatrixMultiplication()
{
        int p,q,x,y,i,j,k,l,s=0,d,sum=0,evalue;
    printf("Enter The Rows Number Of 1st Matrix: ");
    scanf("%d",&p);
    printf("Enter The Columns Number Of 1st Matrix: ");
    scanf("%d",&q);
    printf("Enter The Rows Number Of 2nd Matrix: ");
    scanf("%d",&x);
    printf("Enter The Columns Number Of 2nd Matrix: ");
    scanf("%d",&y);
    system("cls");
    d=p*y*q;
    evalue=d/q;
    int a[p][q],b[x][y],c[d],e[evalue];
    printf("Your Selected Matrix Is a(%d X %d) & b(%d X %d)\n\n",p,q,x,y);
    if (q==x)
    {
        for(j=0;j<p;j++)
        {
            for(i=0;i<q;i++)
            {
                printf("Enter a%d%d ",j+1,i+1);
                scanf("%d",&a[j][i]);
            }
        }
        system("cls");
        for(j=0;j<x;j++)
        {
            for(i=0;i<y;i++)
            {
                printf("Enter b%d%d ",j+1,i+1);
                scanf("%d",&b[j][i]);
            }
        }
        system("cls");
        for(l=0;l<y;l++)
        {
            for(i=0;i<p;i++)
            {
                for(j=0,k=0;j<x && k<x;j++,k++)
                {
                    c[s]=a[i][j]*b[k][l];
                    s++;
                }
            }
        }
        for(i=0,j=0;i<d;i++)
        {
            sum+=c[i];
            if((i+1)%q==0)
            {
                e[j]=sum;
                j++;
                sum=0;
            }
        }
        printf("Solution Of Your Matrix Is: \n\n");
        for(k=0;k<p;k++)
        {
            for(i=0,j=k;i<y;i++,j++)
            {
                printf(" %d ",e[j]);
                j=j+(p-1);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This Matrix Is Undefined\n");
    }
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
}

void Determinant()
{
            int c;
        printf("\n 1. 2X2 Matrix\n\n 2. 3X3 Matrix\n\n");
        scanf("%d",&c);
        system("cls");
        if(c==1)
        {
            int a[2][2],det,i,j;
            for(j=0;j<2;j++)
            {
                for(i=0;i<2;i++)
                {
                    printf("Enter a%d%d ",j+1,i+1);
                    scanf("%d",&a[j][i]);
                }
            }
            system("cls");
            det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
            printf("\nValue Of Determinant Is: %d\n",det);
        }
        else if(c==2)
        {
            int a[3][3],det,i,j;
            for(j=0;j<3;j++)
            {
                for(i=0;i<3;i++)
                {
                    printf("Enter a%d%d ",j+1,i+1);
                    scanf("%d",&a[j][i]);
                }
            }
            system("cls");
            det=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
            printf("\nValue Of Determinant Is: %d\n",det);
        }
        else
        {
            printf("   Wrong Input");
        }
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
}

void InverseMatrix()
{
            int c;
        printf("\n 1. 2X2 Matrix\n\n 2. 3X3 Matrix\n\n");
        scanf("%d",&c);
        system("cls");
        if(c==1)
        {
            int a[2][2],i,j;
            for(j=0;j<2;j++)
            {
                for(i=0;i<2;i++)
                {
                    printf("Enter a%d%d ",j+1,i+1);
                    scanf("%d",&a[j][i]);
                }
            }
            system("cls");
            printf("\nInverse Of The Matrix Is:\n\n  %d  -%d\n -%d   %d\n",a[1][1],a[0][1],a[1][0],a[0][0]);
        }
        else if(c==2)
        {
            int a[3][3],det,i,j;
            for(j=0;j<3;j++)
            {
                for(i=0;i<3;i++)
                {
                    printf("Enter a%d%d ",j+1,i+1);
                    scanf("%d",&a[j][i]);
                }
            }
            system("cls");
            det=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
            printf("\nValue Of Determinant Is: %d\n\nInverse Of 3X3 Is Comming On The Next Verson.\n",det);
        }
        else
        {
            printf("   Wrong Input");
        }
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
}

void MatrixRank()
{
        int x,y,i,j,c,k,p;
    printf("Enter The Rows Number Of 1st Matrix: ");
    scanf("%d",&x);
    printf("Enter The Columns Number Of 1st Matrix: ");
    scanf("%d",&y);
    system("cls");
    int a[x][y];
    for(j=0;j<x;j++)
    {
        for(i=0;i<y;i++)
        {
            printf("Enter a%d%d ",j+1,i+1);
            scanf("%d",&a[j][i]);
        }
    }
    system("cls");
    for(c=0;c<x;c++)
    {
        if(a[c][c]!=0)
        {
            for(i=c+1,j=c;i<x;i++)
            {
                if(a[i][j]!=0)
                {
                    for(k=c;k<y;k++)
                    {
                        a[i][k]=(a[i][k]*a[c][c])-(a[c][k]*a[i][c]);
                        p=c;
                    }
                }
            }
        }
    }
    printf("\nRank Is %d\n\nRREF Is Comming On Next Verson.\n",p+1);
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
}

int EasyMatrix()
{
    int input,em;
    char ematrix[]="\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Easy Matrix \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    start:
    //printf("\n      Welcome To Easy Matrix   \n\n\n 1.Addition          2.Substraction\n\n 3.Multiplication    4.Value Of Determinant\n\n 5.Inverse           6.Rank RREF & NF\n\n");
    gotoxy(18,2);
    //printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Easy Matrix");
    //printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    for(em=0; em<=strlen(ematrix); em++)
    {
        delay(20);
        printf("%c",ematrix[em]);
    }
    gotoxy(18,4);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Addition");
    gotoxy(18,6);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Substraction");
    gotoxy(18,8);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Multiplication");
    gotoxy(18,10);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Value Of Determinant");
    gotoxy(18,12);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Inverse");
    gotoxy(18,14);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Rank RREF & NF");
    gotoxy(18,16);
    printf("\xDB\xDB\xDB\xDB\xB2 7. Back To Main Menu");
    gotoxy(18,18);
    printf("\xDB\xDB\xDB\xDB\xB2 8. Close Application");
    //gotoxy(18,20);
    //printf("\xDB\xDB\xDB\xDB\xB2 7. Close Application");
    gotoxy(18,20);
    printf("---------------------------------------");
    gotoxy(18,21);
    t();
    gotoxy(18,23);
    printf("Enter Your Choice: ");
    scanf("%d",&input);
    system("cls");
    if(input==1)
{
    MatrixAddition();
}
    else if(input==2)
{
    MatrixSubstraction();
}
    else if(input==3)
{
    MatrixMultiplication();
}
    else if(input==4)
{
    Determinant();
}
    else if(input==5)
{
    InverseMatrix();
}
    else if(input==6)
{
    MatrixRank();
}
    else if(input==7)
{
    main();
}
    else if(input==8)
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
    else
    {
        system("cls");
        printf("     Wrong Input\n");
        int go;
        printf("\nType 0 To Go To Main Menu: ");
        scanf("%d",&go);
        if(go==0)
        {
            system("cls");
            goto start;
        }
        else
        {
            system("cls");
            printf("     Wrong Input\n");
        }
    }
}

#include <stdio.h>

void fibonacci(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        fibonacci(n-1);
    }
}

int main()
{
    int n, n1=0,n2=1;
    printf("Enter the last digit\n");
    scanf("%d", &n);
    printf("Fibonacci Series\n");
    printf("%d %d ", n1, n2);
    fibonacci(n-2);
    return 0;
}

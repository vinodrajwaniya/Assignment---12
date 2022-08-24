#include<stdio.h>
void printOdd(int );
void printOdd(int n)
{
    if(n==0)
        return ;
    printOdd(n-1);
    printf("%d\n",(2*n-1));
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printOdd(n);
    return 0;
}
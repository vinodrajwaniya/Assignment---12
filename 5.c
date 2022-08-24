#include<stdio.h>
void printeven(int );
void printeven(int n)
{
    if(n==0)
        return ;
    printeven(n-1);
    printf("%d\n",(2*n));
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printeven(n);
    return 0;
}
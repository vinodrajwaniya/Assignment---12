#include<stdio.h>
void printNatural(int );
void printNatural(int n)
{
    if(n==0)
        return ;
    printNatural(n-1);
    printf("%d\n",n);
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printNatural(n);
    return 0;
}
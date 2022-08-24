#include<stdio.h>
void printsquare(int );
void printsquare(int n)
{
    if(n==0)
        return ;
    printsquare(n-1);
    printf("%d\n",(n*n));
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printsquare(n);
    return 0;
}
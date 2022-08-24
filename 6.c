#include<stdio.h>
void printevenreverse(int );
void printevenreverse(int n)
{
    if(n==0)
        return ;
    printf("%d\n",(2*n));
    printevenreverse(n-1);
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printevenreverse(n);
    return 0;
}
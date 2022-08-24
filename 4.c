#include<stdio.h>
void printoddreverse(int );
void printoddreverse(int n)
{
    if(n==0)
        return ;
    printf("%d\n",(2*n-1));
    printoddreverse(n-1);
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printoddreverse(n);
    return 0;
}
#include<stdio.h>
void dtob(int x);

void dtob(int x)
{
    if(x>0)
    {
        dtob(x/2);
        printf("%d",x%2);
    }
}

int main()
{
    int x;
    printf("Enter an number ");
    scanf("%d",&x);
    dtob(x);
    return 0;
}
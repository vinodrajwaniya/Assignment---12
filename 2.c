#include<stdio.h>
void printNaturalreverse(int );
void printNaturalreverse(int n)
{
    if(n==0)
        return ;
    printf("%d\n",n);
    printNaturalreverse(n-1);
}

int main()
{
    int n;
    printf("Enten n number ");
    scanf("%d",&n);
    printNaturalreverse(n);
    return 0;
}


/*#include<stdio.h>
void printNatural(int );
void printNatural(int n)
{
    if(n==11)
        return ;
    printNatural(n+1);
    printf("%d\n",n);
}

int main()
{
    int n= 1;
    printNatural(n);
    return 0;
} */
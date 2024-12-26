Write a C program to find the greatest among the three given numbers.



#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    printf("%d is greater",a);
    else if(b>c)
    printf("%d is greater",b);
    else
    printf("%d is greater",c);
}

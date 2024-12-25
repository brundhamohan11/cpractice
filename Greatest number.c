QUESTION:
Write a C program to find the greatest among the given two numbers.


#include<stdio.h>
int main()
{
    int a;
    int b; 
    scanf("%d\n%d",&a,&b);
    if(a>b)
    printf("%d is greater",a);
    else
    printf("%d is greater",b);
}

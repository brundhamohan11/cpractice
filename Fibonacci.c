QUESTION:
Write a C program to find whether the given number is a Fibonacci number
#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    int a=0,b=1,next=0;
    if(n==a|n==b)
    printf("Fibonacci Number");
    else {
    while(next<n){
        next=a+b;
        a=b;
        b=next;
    }
    if(n==next)
    printf("Fibonacci Number");
    else
    printf("Not Fibonacci Number");
    }
    
}

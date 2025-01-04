QUESTION:
Write a C program to print the sum of the given numbers. The values must be scanned until the user enters -1 as value.

Note: Use a do-while loop.

 #include<stdio.h>
int main()
{
    int n,sum=0;
    do{
    scanf("%d",&n);
    if(n==-1)
    break;
    sum+=n;
    }
    while(1);
    printf("%d",sum);
    return 0;
}

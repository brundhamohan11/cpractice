QUESTION:
Write a C program to find whether the given number is an Abundant number or not.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i/n;i++)
    if(n/2)
    printf("Abundant Number");
    else{
        while(i<n){
            i=n/i;
        }
        printf("Abundant Number");
    }
    printf("Not  Abundant Number");
    return 0;
}

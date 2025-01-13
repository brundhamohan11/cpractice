QUESTION:
Write a C program to find whether the given number is a Prime number or not.

 #include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for( i=0;i<=n/2;i++) 
    {
    if(n/2==0)
    {
    printf("Prime");
    break;
    }
    else
    {
    printf("Not Prime");
        
    }
    return 0;
}
}

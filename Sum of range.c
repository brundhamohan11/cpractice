QUESTION:
Write a C program to print the sum of a given range of numbers. 

Note: Use while loop

 #include<stdio.h>
int main()
{
    int i,j,sum=0;
    scanf("%d%d",&i,&j);
    while(i<=j){
        sum+=i;
        i++;
    }
    printf("%d",sum);
        
    }

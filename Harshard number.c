QUESTION:
Write a C program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is divisible by the sum of its digits.

 #include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%num)
    printf("Harshard Number");
    else
    printf("Not Harshard Number");
    return 0;
}

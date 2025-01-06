QUESTION:
Write a C program to find the multiplication tables of a given number.

 #include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        printf("%d*%d=%d\n",a,i,a*i);
    }
}

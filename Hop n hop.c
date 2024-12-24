QUESTION:
Big Bunny lives in a colony. He is the only bunny in his colony who is not able to hop. On his 5th birthday, his father bunny gifted him a pogo stick as he could not jump like the other bunnies. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friends and decides to go using pogo sticks. Write a program to find the number of hops needed to reach his friends' house. Assume that Big Bunny's house is in the location (3,4). 



 #include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,dis;
    scanf("%d%d",&x,&y);
    int x1=3;
    int y1=4;
    int a=abs(x1-x);
    int b=abs(y1-y);
    dis=(a>b)?a:b;
    printf("%d",dis);
    
}

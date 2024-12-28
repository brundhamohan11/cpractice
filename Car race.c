QUESTION:
Janu is very much interested in watching car racing. Once while doing so, this is what she observes that Car 1 is coming so fast. The road on which the car comes is divided into three. There are three roads A, B, and C. Each road is given some number. Before the car reaches the end of the road, Janu wants to know the road in which the car will travel. Help her in finding in which road the car will travel?



 #include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if(A%D==0)
    printf("Car 1 goes into road A");
    else if(B%D==0)
    printf("Car 1 goes into road B");
    else if(C%D==0)
    printf("Car 1 goes into road C");
    else
    printf("No path exist");
}

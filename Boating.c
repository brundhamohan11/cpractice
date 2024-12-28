QUESTION:
You went on a tour to Ooty with your friends. As a part of the tour, you went boating with them. For the boat to remain stable, the number of people on one boat is restricted based on the weight of the people. You find that the boatman who is sailing your boat is so much greedy of money. For earning more, he takes too many people to travel in the boat at a time. So you want to check how many people can travel in the boat at a time so that the boat will not drown. Calculate the weight by considering the number of adults and number of children.

Assume that an adult weighs 75 kg and children weigh 30 kg each.
If the weight is normal, display Boat is stable, else display Boat will drown.


#include<stdio.h>
int main()
{
    int weight,second,third,x;
    scanf("%d\n%d\n%d",&weight,&second,&third);
    second=second*75;
    third=third*30;
    x=second+third;
    if(x>weight)
    printf("Boat will drown");
    else
    printf("Boat is stable");
    
}

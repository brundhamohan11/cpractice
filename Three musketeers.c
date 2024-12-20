QUESTION:
A young man named d'Artagnan leaves home and travels to Paris to join the Musketeers of the guard. Although D'Artagnan is not able to join this elite corps immediately, he befriends the three most formidable musketeers of the age: Athos, Porthos and Aramis and gets involved in affairs of the state and court.

At that time, the cardinal was planning to dethrone the king, take the kingdom and remove the musketeers of the guard. Since the cardinal has spies mixed with the local public, d'Artagnan decides to send a message of his whereabouts to the three musketeers in a unique way. He gave a note to a boy which has the following message.

"I am at the midpoint of the line joining the farmhouse next to the palace and the lighthouse."

The three musketeers were puzzled. Can you help them find out the location of d'Artagnan? Given, the coordinates of the 2 places (x1,y1) and (x2,y2), write a program to find the location of d'Artagnan.



#include<stdio.h>
int main()
{
    float x1,y1,x2,y2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    printf("%.1f\n ",(x1+x2)/2);
    printf("%.1f",(y1+y2)/2);
    
    return 0;
}

QUESTION:
Long ago, there was a war between the Trojans and Greeks. The Trojan and Greek armies met outside the walls of Troy. Seeing the bloodshed, the two kings decided to end the battle as early as possible as both the armies suffered a lot.

The shape of the battleground is square. To win the war is to conquer the flag first by the opposite army and place the flag post at the exact center of the battlefield. Can you please help them in placing the flag post at the exact center? 

Given the coordinates of the left bottom vertex of the square ground and the length of the side of the battlefield, you need to write a program to determine the coordinates of the center of the ground. 
[Assumption: Length of the side is always even]




#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int center_x=x+(z/2);
    int center_y=y+(z/2);
    printf("%d\n%d",center_x,center_y);
    return 0;
    
}

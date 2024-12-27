QUESTION:
Write a C program to find the quadrant in which the given x and y coordinates are present in a graph.
If it is in 1st Quadrant, then display Ist Quadrant,
If it is in 2nd Quadrant, then display IInd Quadrant,
If it is in 3rd Quadrant, then display IIIrd Quadrant,
If it is in 4th Quadrant, then display IVth Quadrant and
If it is in center display Origin.




#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    printf("Ist Quadrant");
    else if(x<0&&y>0)
    printf("IInd Quadrant");
    else if(x<0&&y<0)
    printf("IIIrd Quadrant");
    else if(x>0&&y<0)
    printf("IVth Quadrant");
    else
    printf("Origin");
}

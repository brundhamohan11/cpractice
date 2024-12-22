QUESTION:
d'Artagnan joined the group of 3 Musketeers and now their group is called four Musketeers. Meanwhile, d'Artagnan also moved to a new house in the same locality nearby to the other three. Currently, the houses of Athos, Porthos and Aramis are located in the shape of a triangle. When the three musketeers asked d'Artagnan about the location of his house, he said that his house is equidistant from the houses of the other 3. Can you please help them find out the location of the house?

Given the 3 locations {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, write a program to determine the point which is equidistant from all the 3 points.


 #include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    scanf("%f\n%f\n%f\n%f\n%f\n%f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("%.1f %.1f",(x1+x2+x3)/3,(y1+y2+y3)/3);
    return 0;
}

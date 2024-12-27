QUESTION:
Karl loves to play with shapes and his sister is interested in Mathematics. They got a wooden box which is square in shape with length x cm and a round bangle with radius r cm and decided to play with it. They started playing and his sister asked him to find whether the circle will fit into the square. Help Karl to find whether the circle will fit into a square or not. If the circle fits, display “circle can be inside a Square” else display “circle cannot be inside a Square”.



 #include<stdio.h>
int main()
{
   int r,l,m;
   scanf("%d\n%d",&r,&l);
   m=2*r;
   if(m>l)
   printf("circle cannot be inside a square");
   else
   printf("circle can be inside a square");
}

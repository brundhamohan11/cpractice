QUESTION:
Janu is very interested in mathematics and she loves to solve math puzzles daily. Her friend knows that and she asks her to find out what an automorphic number is and to implement that concept using C programming. But since Janu is not good at programming, you need to help her implement this concept.

An automorphic number is a number whose square ends with the number itself.

For example, 5 is an automorphic number as 5*5 =25. The last digit is 5 which is the same as the given number. It has only positive single digit numbers. If the number is not valid, it should display "Invalid input".

If it is an automorphic number display “Automorphic Number” else display “Not Automorphic Number”.



#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0||n>9)
    {
    printf("Invalid input");
    }
    else
    {
        int s=n*n;
        int l=s%10;
    
    if(l==n)
    {
        printf("Automorphic Number");
    }
    else{
    printf("Not Automorphic Number");
    }   
    }
    return 0;
}

QUESTION:
Lucy is celebrating her 15th birthday. Her father promised her that he will buy her a new computer on her birthday if she solves the question asked by him. He asks Lucy to find out whether the year on which she was born is a leap year or not. Help her to solve this puzzle so that she celebrates her birthday happily. If her birth year is 2016 and it is a leap year display “2016 is a leap year.” Else display “2016 is not a leap year.”

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if((x%4==0&&x%100!=0)||(x%400==0))
    {
        printf("%d is a leap year",x);
    }
    else
    printf("%d is not a leap year",x);
    return 0;
}


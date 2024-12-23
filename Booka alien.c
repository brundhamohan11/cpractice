QUESTION:
Booka is an alien. He couldn't understand how to measure days, weeks, months and years. Make Booka understand what is meant by days, weeks, months and years. Teach him about the conversion of days into years, months and weeks using a program.



 #include<stdio.h>
int main()
{
    int totaldays;
    scanf("%d",&totaldays);
    int year=totaldays/365;
    int days=totaldays%365;
    int week=days/7;
    days=days%7;
    printf("%d\n%d\n%d\n",year,week,days);
    return 0;
    
}

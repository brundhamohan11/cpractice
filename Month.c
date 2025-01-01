QUESTION:
Damu and Ram are friends. They felt very bored and decided to play a game with calendar and number of days. Damu will give the month and the year as input, and Ram has to find out the number of days in that month. Write a C program using switch case to help Ram find the answer. You should check whether the given year is a leap year. If it is a leap year, it will have 29 days in February.(Use only switch case and implement the “Fall Through” concept).




#include<stdio.h>
int main()
{
    int month, year, days;
    scanf("%d %d", &month, &year);
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31; 
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11://November 
            days = 30;
            break;
        case 2: 
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; 
            } else {
                days = 28; 
            }
            break;
            default:
            printf("Invalid month\n");
            return 1;
    }
    printf("Number of days is %d",days);
    return 0;
}

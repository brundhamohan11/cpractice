QUESTION:
Ramu after finishing his degree joined a company in Bangalore. His manager has told him that he will get an increment if he works hard. As he belongs to a middle-class family, he wants to plan the budget according to his salary. He stays in a hostel. His expenses are hostel fees, bank loan interest. He wants to find out whether he can save any money or he wants to work hard or his salary will be able to manage his expenses alone. Help him in calculating the budget.



#include <stdio.h>
int main() {
    int salary, loan, hostel, food, parents;
    scanf("%d", &salary); 
    scanf("%d", &loan);
    scanf("%d", &hostel);
    scanf("%d", &food);
    scanf("%d", &parents);
    int total_expenses = loan + hostel + food +parents;
    if (salary > total_expenses) {
        printf("He can save the money\n");
    } else if (salary == total_expenses) {
        printf("He can manage the expenses\n");
    } else {
        printf("He has to work hard\n");
    }

    return 0;
}

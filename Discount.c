QUESTION:
Chris is going to celebrate his birthday in January. His father wants to buy a new dress for his son. Also as Christmas is approaching, he wants to buy a new dress for Christmas as well. As all the textile showrooms offer a discount in the month of December, his father decides to buy a dress for Chris birthday in December itself. Before that, he wants to know how much discount was given in each month. In the first month of the year, they offered a 20% discount. In the third and fourth month, they offered a 10% discount. In the sixth and seventh month, they offered a 75% discount. In the tenth and eleventh month, they offered a 30% discount. In the twelfth month, they offered a 35% discount. Implement this program using switch case.

Note: Use Fall through concept.

 #include <stdio.h>

int main() {
    float rate, final_price;
    int month, discount=0;
    scanf("%f", &rate);
    scanf("%d", &month);
    switch (month) {
        case 1:
            discount = 20;
            break;
        case 2:
            discount = 0;
            break;
        case 3:
        case 4:
            discount = 10;
            break;
        case 5:
            discount = 0;
            break;
        case 6:
        case 7:
            discount = 75;
            break;
        case 8:
            discount = 0;
            break;
        case 9:
            discount = 0;
            break;
        case 10:
        case 11:
            discount = 30;
            break;
        case 12:
            discount = 35;
            break;
        default:
            printf("Invalid Month\n");
            return 0;
    }
    final_price = rate - (rate * discount / 100);
    printf("Chris father needs to pay Rs.%.2f .\n", final_price);

    return 0;
}

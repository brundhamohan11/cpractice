Mrs.Bhulbhul is a miser to the core. She saves money even on petite things. One day she heard a discount offer announced in a mall. She wants to purchase a lot of items to save her money. The discount is given only when at least two items are bought. Since each item has different discount prices, she finds it difficult to check the amount she has saved. So she approaches you to device an automated discount calculator to make her easy while billing.




#include<stdio.h>
int main()
{
    float price1,price2,discountper;
    scanf("%f%f%f",&price1,&price2,&discountper);
    float totalamount=price1+price2;
    float discount=(discountper/100)*totalamount;
    float disprice=totalamount-discount;
    float saved=discount;
    printf("%.2f\n",totalamount);
    printf("%.2f\n",disprice);
    printf("%.2f\n",saved);
    return 0;
}

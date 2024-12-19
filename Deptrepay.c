Alice wanted to start a business and she was looking for a venture capitalist. Through her friend Bob, she met the owner of a construction company who is interested to invest in an emerging business. Looking at the business proposal, the owner was very much impressed with Alice's work. So he decided to invest in Alice's business and hence gave a green signal to go ahead with the project.
Alice bought Rs.X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be given by Alice to the owner. The owner impressed by proper repayment of the financed amount decides to give a special offer of 2% discount on the total interest at the end of the settlement. Find the amount given back by Alice and also find the total amount. (Note: All rupee values should be in two decimal points).


#include<stdio.h>
int main()
{
    int amt=100, interest=1,years=10;
    scanf("%d\n%d\n%d\n",&amt,&interest,&years);
    float si=(amt*interest*years/100);
    printf("%f\n",si);
    printf("%.2f\n",amt+si);
    float dis=si*0.02;
    printf("%.2f\n",dis);
    printf("%.2f\n",(amt+si)-dis);
    return 0;
}

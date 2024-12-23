QUESTION:
Though there have been more successful pirates, Blackbeard is one of the best-known and widely-feared of his time. He commanded four ships and had a pirate army of 300 at the height of his career and defeated the famous warship, HMS “Scarborough” in sea-battle. He was known for barreling into battle clutching two swords with several knives and pistols at the ready. He captured over forty merchant ships in the Caribbean and without flinching killed many prisoners.

Now, Blackbeard and his three pirates found a treasure of gold coins. Long Ben too joined them. They decided to share the treasure. Blackbeard agreed to give x% share for Long Ben. He then decided to take y% share from the remaining treasure. His other pirates will share the remaining gold coins equally. Write a program to compute their share's. 




 #include<stdio.h>
int main()
{
    int coin,benshare,blackshare;
    scanf("%d%d%d",&coin,&benshare,&blackshare);
    int ben=(coin*benshare)/100;
    int remainingben=coin-ben;
    int black=(remainingben*blackshare)/100;
    int remainingblack=remainingben-black;
    int other=remainingblack/3;
    printf("%d\n",ben);
    printf("%d\n",black);
    printf("%d\n",other);
    return 0;
}

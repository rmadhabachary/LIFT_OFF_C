#include<stdio.h>

int main()
{
 printf("put amount you want to withdraw:\n");
int amount;
scanf("%d",&amount);
 

if(amount<=50){
    printf("%d is withdrawn from your account. ", amount);
}
else if (amount>50)
{
   printf("you have insufficient fund.");
}
else{
    printf("transaction is timed out!");
}
return 0;
}
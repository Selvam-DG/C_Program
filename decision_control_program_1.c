/*If cost price and selling price of an item are input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit he 
made or loss he incurred. */

#include <stdio.h>

int main()
{
    float sellingprice, costprice,profit,loss,profit_percentage, loss_percentage;

    printf("Enter the cost price of an item : ");
    scanf("%f",&costprice);
    printf("Enter the selling price of an item :");
    scanf("%f",&sellingprice);

    if(costprice > sellingprice)
    {
        loss = costprice - sellingprice;
        loss_percentage = (loss / costprice) * 100 ;
        printf("The seller has incurred loss. \nLoss = %.2f \n Loss Percetange = %.2f",loss, loss_percentage);

    }
    else if(costprice < sellingprice)
    {
        profit = sellingprice - costprice;
        profit_percentage = (profit/ costprice)*100 ;
        printf("The seller has make profit. \nProfit = %.2f \n Profit Percetange = %.2f",profit, profit_percentage);

    }
    else
    {
        printf("The seller has make neither profit not loss");
    }

    return 0;

}
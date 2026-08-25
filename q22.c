//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main()
{
    float costPrice, sellingPrice;
    float profit, loss, profitPercentage, lossPercentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice)
    {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%", profitPercentage);
    }
    else if (costPrice > sellingPrice)
    {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%", lossPercentage);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
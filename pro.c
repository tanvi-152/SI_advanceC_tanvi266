//inventory management system(trends)
#include <stdio.h>
int main()
{
    int choice;
    
    // Product Data
    int id[5] = {101, 102, 103, 104, 105};
    char name[5][20] = {"chocolate", "chips", "biscuit", "tofees", "juice"};
    float price[5] = {60, 45, 150, 50, 30};
    int stock[5] = {10, 10, 10, 10, 10};

    // Purchase Data
    int qty[5] = {0};
    float discount = 10; // 10% discount
    float total = 0;

    do
    {
        printf("\n\t\t\t INVOICE SYSTEM\n");
        printf("\t\t\t1. Stock Availability\n");
        printf("\t\t\t2. Purchase Item\n");
        printf("\t\t\t3. Checkout and Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n--- Available Stock ---\n");
                printf("ID\tName\tPrice\tStock\n");
                for(int i = 0; i < 5; i++)
                {
                    printf("%d\t%s\t%.2f\t%d\n", id[i], name[i], price[i], stock[i]);
                }
                break;

            case 2:
            {
                int pid, found = 0;
                printf("\nEnter Product ID: ");
                scanf("%d", &pid);

                for(int i = 0; i < 5; i++)
                {
                    if(pid == id[i])
                    {
                        found = 1;
                        printf("Enter Quantity: ");
                        int q;
                        scanf("%d", &q);

                        if(q <= stock[i])
                        {
                            qty[i] += q;
                            stock[i] -= q;
                            printf("Item added to cart!\n");
                        }
                        else
                        {
                            printf("Not enough stock!\n");
                        }
                    }
                }

                if(!found)
                    printf("Product not found!\n");

                break;
            }

            case 3:
                printf("\n--- FINAL INVOICE ---\n");
                printf("ID\tName\tQty\tMRP\tTotal\n");

                for(int i = 0; i < 5; i++)
                {
                    if(qty[i] > 0)
                    {
                        float itemTotal = qty[i] * price[i];
                        total += itemTotal;

                        printf("%d\t%s\t%d\t%.2f\t%.2f\n",
                               id[i], name[i], qty[i], price[i], itemTotal);
                    }
                }

                float discountAmount = total * (discount / 100);
                float finalAmount = total - discountAmount;

                printf("\nTotal: %.2f", total);
                printf("\nDiscount (%.0f%%): %.2f", discount, discountAmount);
                printf("\nFinal Amount: %.2f\n", finalAmount);

                printf("\nThank you for shopping!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}




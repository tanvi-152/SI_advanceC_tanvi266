//inventory management (using structure)
#include <stdio.h>

struct Product
{
    int id;
    char name[20];
    float price;
    int stock;
    int qty;
};

int main()
{
    int choice;
    struct Product p[5] = 
    { 
        {34, "Rice", 60, 10, 0},{908, "Sugar", 45, 10, 0},{234, "Oil", 150, 10, 0},{567, "Milk", 50, 10, 0},
        {78, "Bread", 30, 10, 0}
    };

    float discount = 10;
    do
    {
        printf("\n\t\t\tTRENDS INVOICE SYSTEM\n");
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
                    printf("%d\t%s\t%.2f\t%d\n",
                           p[i].id,
                           p[i].name,
                           p[i].price,
                           p[i].stock);
                }
                break;

            case 2:
            {
                int pid, found = 0;

                printf("\nEnter Product ID: ");
                scanf("%d", &pid);

                for(int i = 0; i < 5; i++)
                {
                    if(pid == p[i].id)
                    {
                        found = 1;

                        int q;
                        printf("Enter Quantity: ");
                        scanf("%d", &q);

                        if(q > 0 && q <= p[i].stock)
                        {
                            p[i].qty += q;
                            p[i].stock -= q;
                            printf("Item added to cart!\n");
                        }
                        else
                        {
                            printf("Invalid quantity or insufficient stock!\n");
                        }

                        break;
                    }
                }

                if(!found)
                {
                    printf("Product not found!\n");
                }

                break;
            }

            case 3:
            {
                float total = 0;

                printf("\n--- FINAL INVOICE ---\n");
                printf("ID\tName\tQty\tMRP\tTotal\n");

                for(int i = 0; i < 5; i++)
                {
                    if(p[i].qty > 0)
                    {
                        float itemTotal = p[i].qty * p[i].price;
                        total += itemTotal;

                        printf("%d\t%s\t%d\t%.2f\t%.2f\n",
                               p[i].id,
                               p[i].name,
                               p[i].qty,
                               p[i].price,
                               itemTotal);
                    }
                }

                float discountAmount = total * discount / 100;
                float finalAmount = total - discountAmount;

                printf("\nTotal Amount      : %.2f", total);
                printf("\nDiscount (%.0f%%) : %.2f", discount, discountAmount);
                printf("\nNet Amount        : %.2f\n", finalAmount);

                printf("\nThank you for shopping!\n");
                break;
            }

            default:
                printf("Invalid choice!\n");
        }

    }
    while(choice != 3);

    return 0;
}
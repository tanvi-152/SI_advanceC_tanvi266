//simple calculator using switch
#include <stdio.h>
int main()
{
    int a,b,ch;
    printf("enter choice");
    scanf("%d",&ch);
    printf("enter a,b value");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
    case 1:
    {
        //addition
        int sum=a+b;
        printf("sum is:%d",sum);
        break;
    }
    case 2:
    {
        //subtract
        int c=a-b;
         printf("subtraction is:%d",c);
         break;
    }
    case 3:
    {
        //multiplication
        int p=a*b;
         printf("product is:%d",p);
    break;
    }
    default:
            printf("Invalid choice");
}
    return 0;
    }
    
    
    
    
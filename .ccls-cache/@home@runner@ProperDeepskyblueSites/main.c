

#include<stdio.h>

int main()
{
    int num1,num2,choice;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("Choose an Operation:\n");
    printf("1. Addition\n");
    printf("2. Substaction\n");
    printf("Enter your choice (1 or 2)");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int sum= num1+num2;
        printf("Sum: %d\n",sum);

    }
        else
            if (choice == 2)
            {
                    int sub=num1-num2;                
                    printf("Subtraction:%d \n",sub );
 
            }

        return 0;
}


#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the code
 * nested_if is use to construct another if block in an if block
 * return: 0
*/

void main()
{
    int money;
    int buying, food;
    /**
     * 1. Banku
     * 2. Fufu
     * 3. Rice
     * 4. Waaky
     * 5. Yam
     * 6. For customize food.
    */
    
    printf("Do you want to buy for?\n1. Yes\n0. No\n");
    scanf("%d", &buying);
    printf("Enter the food you want to buy.\n1. Banku\n2. Fufu\n3. Rice\n4. Waaky\n5. Yam\n6. For customize food.\n");
    scanf("%d", &food);
    printf("Enter the amount you have\n");
    scanf("%d", &money);

        if (buying != 0);
        {
            if (food != 0 && food ==1)
            {
                if (money >= 10 && money <= 15)
                {
                    printf("%d\n", money);
                    printf("Banku with okro sup and fish");
                }

                if (money  > 15 && money <= 20)
                {
                    printf("%d\n", money);
                    printf("Banku with Palm soup and chicken and walee");
                }
                if (money  > 20 && money <= 50)
                {
                    printf("%d\n", money);
                    printf("Banku with groundnut soup and chicken walee");
                }
                
                else
                printf("The lowest for banku is GHC 10.00\n");
                
            }
        }
getche();
}
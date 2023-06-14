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
    
    printf("Do you want to buy for?\n1. Yes\n0. No\n____________\n");
    scanf("%d", &buying);
    printf("Enter the food you want to buy.\n1. Banku\n2. Fufu\n3. Rice\n4. For customize food.\n___________________\n");
    scanf("%d", &food);
    printf("Enter the amount you have: ");
    scanf("%d", &money);

        if (buying != 0);
        {
            if (food != 0 && food ==1)
            {
                if (money >= 10 && money <= 15)
                {
                    printf("%d\n", money);
                    printf("Banku with okro sup and fish\nDelivery would be in an hour\n");
                }

                if (money  > 15 && money <= 20)
                {
                    printf("%d\n", money);
                    printf("Banku with Palm soup and chicken and walee\nDelivery would be in an hour\n");
                }
                if (money  > 20 && money < 50)
                {
                    printf("%d\n", money);
                    printf("Banku with groundnut soup and chicken, walee, fish and kotodwe\nDelivery would be in an hour\n");
                }
                else
                printf("The lowest for banku is GHC 10.00\n");
                
            }

            if (food != 0 && food ==2)
            {
                if (money >= 10 && money <= 15)
                {
                    printf("%d\n", money);
                    printf("Fufu with light sup and fish\nDelivery would be in an hour\n");
                }

                if (money  > 15 && money <= 20)
                {
                    printf("%d\n", money);
                    printf("Fufu with Palm soup and chicken and walee\nDelivery would be in an hour\n");
                }
                if (money  > 20 && money < 50)
                {
                    printf("%d\n", money);
                    printf("Fufu with groundnut soup and chicken, walee, fish and kotodwe\nDelivery would be in an hour\n");
                }
                else
                printf("The lowest for fufu is GHC 10.00\n");
                
            }

            if (food != 0 && food ==3)
            {
                if (money >= 10 && money <= 15)
                {
                    printf("%d\n", money);
                    printf("Rice and fish stew\nDelivery would be in an hour\n");
                }

                if (money  > 15 && money <= 20)
                {
                    printf("%d\n", money);
                    printf("Jollof and chicken\nDelivery would be in an hour\n");
                }
                if (money >= 20 && money < 50)
                {
                    printf("%d\n", money);
                    printf("Fried Rice and beef sauce with grilled chicken\nDelivery would be in an hour\n");
                }
                else
                printf("The lowest for rice is GHC 10.00\n");
                
            }
            if (food != 0 && food ==4)
            {
                if (money >= 60)
               {
                char customize[100];
                printf("Enter the food you would like to buy");
                scanf("%c", &customize);
                printf("Thank you for the order.\nPlease understand that since it is a customize food it would taken longer than the normal time\n");

               }    
               else
                    printf("The minimum for customize food is Ghc 60.00");       
            }
        }
getche();
}
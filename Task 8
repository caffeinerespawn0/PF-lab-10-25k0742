#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char appetizers[3][30] = {"Spring Rolls", "Garlic Bread", "Bruschetta"};
    float appetizers_prices[3] = {5.5, 4.0, 6.0};
    char main_course[3][30] = {"Grilled Chicken", "Pasta Alfredo", "Veggie Burger"};
    float main_course_prices[3] = {12.0, 9.5, 8.0};
    char desserts[3][30] = {"Chocolate Cake", "Ice Cream", "Fruit Salad"};
    float desserts_prices[3] = {6.5, 4.5, 3.5};

    int i;

    printf("RESTAURANT MENU\n\n");


    printf("   %s   \n", categories[0]);
    for(i = 0; i < 3; i++) {
        printf("%d. %s - $%.2f\n", i+1, appetizers[i], appetizers_prices[i]);
    }
    printf("\n");


    printf("   %s   \n", categories[1]);
    for(i = 0; i < 3; i++) {
        printf("%d. %s - $%.2f\n", i+1, main_course[i], main_course_prices[i]);
    }
    printf("\n");


    printf("   %s   \n", categories[2]);
    for(i = 0; i < 3; i++) {
        printf("%d. %s - $%.2f\n", i+1, desserts[i], desserts_prices[i]);
    }
    printf("\n");

    printf("BUDGET-FRIENDLY ITEMS Under $10\n\n");

    for(i = 0; i < 3; i++) {
        if(appetizers_prices[i] < 10)
            printf("%s (Appetizer) - $%.2f\n", appetizers[i], appetizers_prices[i]);
    }
    for(i = 0; i < 3; i++) {
        if(main_course_prices[i] < 10)
            printf("%s (Main Course) - $%.2f\n", main_course[i], main_course_prices[i]);
    }
    for(i = 0; i < 3; i++) {
        if(desserts_prices[i] < 10)
            printf("%s (Dessert) - $%.2f\n", desserts[i], desserts_prices[i]);
    }

    return 0;
}

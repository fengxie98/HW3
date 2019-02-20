/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {

    int days, sizePop;
    double dailyIncrease;
    
    printf("Size of organism population prediction\n");
    printf("Number of starting organism?\n");
    scanf("%d", &sizePop);
    printf("Average daily population increase? As a percentage of current population that is.\n");
    scanf("%lf", &dailyIncrease);
    printf("Enter number days of growth\n");
    scanf("%d", &days);
    
    //Input
    while(sizePop < 2 || dailyIncrease < 0 || days < 1){
        if(sizePop < 2){
            printf("Error, starting population must be above 2\n");
            printf("Starting number of organisms?\n");
            scanf("%d", &sizePop);
        }
        else if(dailyIncrease < 0){
            printf("Error, average daily increase must be greater than 0\n");
            printf("Percentage of average daily population?\n");
            scanf("%lf", &dailyIncrease);
        }
        else if(days < 1){
            printf("Error, number of days must be greater than 0.\n");
            printf("Enter days of growth\n");
            scanf("%d", &days);
        }
    }
    
    //Calculate daily increase
    printf("This is to show the population increase over %d", days, "days.\n");
    printf("------------------------------------------------------------------\n");
    
    for(int X = 1; X <= days; X++){
        printf("%d", &X);
        sizePop *= (1 + (dailyIncrease / 100));
    }
    return 0;
}

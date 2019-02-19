#include <stdio.h>

int main() {

    int menu;
    double PIE = 3.14159;
    double radius, length, width, base, height, area;

    printf("Calcuate Circle area(1): \n");
    printf("Calculate Rectangle area(2): \n");
    printf("Calculate Triangle area(3): \n");
    printf("Quit(4) \n");
    printf("Select a choice (1, 2, 3, 4): \n");
    scanf("%d", &menu);


    switch(menu)
    {
        case 1:
            printf("Enter radius of circle: \n");
            scanf("%lf", &radius);
            double C_area = PIE*(radius*radius);
            printf("Area of Circle of is: %lf", C_area);
            break;

        case 2:
            printf("Enter length of rectangle: \n");
            scanf("%lf", &length);
            printf("Enter width of rectangle: \n");
            scanf("%lf", &width);
            double R_area = length * width;
            printf("Area of rectange of is: %lf", R_area);
            break;


        case 3:
            printf("Enter base of triangle: \n");
            scanf("%lf", &base);
            printf("Enter height of rectangle: \n");
            scanf("%lf", &height);
            double T_area = base * height;
            printf("Area of rectange of is: %lf", T_area);
            break;


        case 4:
            printf("Quitting the program\n");
            break;

        // not a 1-4
        default:
            printf("Retry");
    }

    return 0;
}

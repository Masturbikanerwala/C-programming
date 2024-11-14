// C_Program_to_calculate_area_of_rectangle

#include <stdio.h>
int main()
{
    int l, b, area;
    printf("Enter your number of length: ");
    scanf("%d", &l);

    printf("Enter your number of breadth: ");
    scanf("%d", &b);
    area = l * b;
    {
        printf("%d", area);
    }
    return 0;
}
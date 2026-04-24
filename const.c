#include <stdio.h>

int main() {
    const float PI = 3.14;
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle = %.2f", area);

    return 0;
}

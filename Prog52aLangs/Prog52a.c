#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int length;
    printf("Enter the length of your rectangle: \n");
    scanf("%d", &length);
    int width;
    printf("Enter the width of your rectangle: \n");
    scanf("%d", &width);
    int area;
    int perim;
    area = length * width;
    perim = 2*length + 2*width;
    printf("Area: %d\n", area);
    printf("Perim: %d\n", perim);
    return 0;
}
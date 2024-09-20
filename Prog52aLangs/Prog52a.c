#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
    printf("Enter the length of your rectangle: \n");
    int length; scanf("%d", &length);
    printf("Enter the width of your rectangle: \n");
    int width; scanf("%d", &width);
    int area = length * width;
    int perim = 2*length + 2*width;
    printf("Area: %d\n", area);
    printf("Perim: %d\n", perim);
}
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
    int length = 0;
    printf("Enter the length of your rectangle: \n");
    // TODO
    int width = 0;
    printf("Enter the width of your rectangle: \n");
    // TODO
    int area = 0;
    int perim = 0;
    area = length * width;
    perim = 2*length + 2*width;
    printf("Area: %d\n", area);
    printf("Perim: %d\n", perim);
}
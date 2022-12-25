#include <stdio.h>

int main() {
    int x;
    int y;

    // get input values for x and y
    scanf("%d %d", &x, &y);

    // create a temporary variable
    int temp;

    // swap values using temp
    temp = y;
    y = x;
    x = temp;

    // print values after swapping
    printf("%d %d",x ,y);

    return 0;
}
#include <stdio.h>

int main(){

    int lenght;
    int breadth;
    
     // get length and breadth input
    scanf("%d %d", &lenght, &breadth);
    
    // find the area
    int Area = lenght * breadth;
    
    // print the area
    printf("%d", Area);

    return 0;    
} 
#include <stdio.h>

int main() {
    
    int students;
    // get input value for students
    scanf("%d", &students);
    int n = students;

    // use the formula to calculate maximum possible handshakes and print it
    int combination = (n * (n - 1)) / 2;
    printf("%d",combination);
    return 0;
}
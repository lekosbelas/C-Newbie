#include <stdio.h>

int main() {
    int chocolate;
    int children;

    // get input values for chocolate and children
    scanf("%d %d",&chocolate,&children );

    // find number of chocolate each children gets using the / operator
    int kart = chocolate/children;
    printf("%d\n",kart);
    // find remaining chocolate using the % operator
    int kurt = chocolate%children;
    printf("%d",kurt);
    return 0;
}
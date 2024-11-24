#include <stdio.h>
int main(void){

    int totalRow, row, space, star;

    printf("Enter your Total Row: ");
    scanf("%d", &totalRow);

    for(row = 1; row <= totalRow; row++){
        for(space = 1; space <= (totalRow - row); space++){
            printf(" ");
        }
        for(star = 1; star <= (2*row)-1; star++){
            printf("*");
        }
        printf("\n");
    }
}
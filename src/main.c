#include <stdio.h>

int main(){
    // int placeNum;
    // float nice = 69.420;
    // printf("\nhello there %.5f\n\n", nice);

    // scanf("%i", &placeNum);
    // printf("\n %i\n", placeNum);

    float num1;
    float num2;

    printf("add number: \n");
    scanf("%f" &num1);
    printf("+");
    scanf("%f", &num2);
    float result = num1 + num2;
    printf("%f\n", result);

    return 0;
}
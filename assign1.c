#include <stdio.h>

int main() {
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    
    if(num > 0) {
        printf("%d is positive", num);
    }
    else if(num < 0) {
        printf("%d is negative", num);
    }
    else {
        printf("The given number is zero");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    long long int num;
    int remainder;
    scanf("%llu", &num);
    while (num>0){
        remainder = num%10;
        printf("%d", remainder);
        num = (long long int)num/10;
    }
    printf("\n");
    return 0;
}

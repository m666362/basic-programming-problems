#include <stdio.h>
#include <math.h>

int main() {
    int dividend, divisor, quotient, remainder, newdividend;
    scanf("%d%d", &dividend, &divisor);
    if(dividend%divisor == 0 || dividend>0){
        quotient = (int)dividend/divisor;
        remainder = dividend%divisor;
    }else{
            newdividend = dividend - abs(divisor);
            quotient = (int)newdividend/divisor;
            remainder = abs((quotient*divisor) - dividend);
    }
    printf("%d %d\n", quotient, remainder);
    return 0;
}

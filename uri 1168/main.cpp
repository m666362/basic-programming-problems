#include <stdio.h>
#include <string.h>

int main() {
    int i, value, leds;
    char num[100];
    scanf("%d", &value);
    while (value>0){
        scanf("%s", &num);
        leds = 0;
        for (i=0; i<strlen(num) ; i++)
        {
            if (num[i]=='1')
                leds += 2;
            else if (num[i]=='4')
                leds += 4;
            else if (num[i]=='7')
                leds += 3;
            else if (num[i]=='8')
                leds += 7;
            else if (num[i]=='2' || num[i]=='3' || num[i]=='5')
                leds += 5;
            else
                leds += 6;
        }
        printf("%d leds\n", leds);
        value--;
    }
    return 0;
}

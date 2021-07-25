/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>

int main() {
    int y1, y2, y3;
    scanf("%d%d%d", &y1, &y2, &y3);
    if((y2-y1)>0){
        if((y3-y2)>=(y2-y1)){
            printf(":)\n");
        } else {
            printf(":(\n");
        }
    } else {
        if((y3-y2)>(y2-y1)){
            printf(":)\n");
        } else {
            printf(":(\n");
        }}
    return 0;
}

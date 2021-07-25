#include <stdio.h>

int main() {
    long long int testcase, sum = 0, noOfStlnStar = 0, stlnSheep = 0, j, k;
    scanf("%llu", &testcase);
    long long int star[testcase];
    for (int i = 0; i < testcase; ++i) {
        scanf("%llu", &star[i]);
        sum += star[i];
    }
    for (j = 0; j < testcase; ++j) {
        if(star[j]%2!=0){
            star[j]--;
            noOfStlnStar++;
            stlnSheep++;
        }else if(star[j]==0){
            break;
        }else{
            star[j]--;
            noOfStlnStar++;
            stlnSheep++;
            break;
        }
    }
    if(star[j]==0 || j==testcase){
    printf("%llu %llu\n", noOfStlnStar, sum-stlnSheep);
    }
    else{
        for (int i = j-1; i >= 0; --i) {
            if(star[i]==0)
                break;
            else{
                stlnSheep++;
            }
        }
        printf("%llu %llu\n", noOfStlnStar, sum-stlnSheep);
    }
    return 0;
}













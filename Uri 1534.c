#include<stdio.h>
int main(){
    int num, i, j;
    while(scanf("%d", &num) != EOF){
        for(i=1;i<=num;i++){
            for(j=1;j<=num; j++){
                if(i==num-j+1)
                    printf("2");
                else if(i==j)
                    printf("1");
                else
                    printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}

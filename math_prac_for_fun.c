#include<stdio.h>
int main(){
    int a, b, c;
    printf("Put 3 numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("Your value: %d %d %d\n", a, b, c);
    if(a>b){
        for(int i=b; i>=1; i--){
            if(b%i==0 && a%i==0 && c%i==0){
                    printf("Yes\n");
                    break;
            }
            else{
                    printf("NO\n");
                }
        }
    }else{
        for(int i=a; i>=1; i--){
            if(b%i==0 && a%i==0 && c%i==0){

                    printf("Yes\n");
            }
            else{
                    printf("NO\n");
                }
        }
    }
    return 0;
}

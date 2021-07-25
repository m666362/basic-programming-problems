#include <bits/stdc++.h>

using namespace std;

int main() {

    int m,n,num;
    scanf("%d", &num);
    while(num>0){

        scanf("%d%d", &m, &n);
        if(m==0 && n>0)
            printf("%d\n", n+1);
        else if(n==0 && m>0)
            printf("%d\n", m+1);

        num--;
    }
    return 0;
}

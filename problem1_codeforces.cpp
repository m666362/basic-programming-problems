#include<bits/stdc++.h>
using namespace std;
int main(){
    int length, width, square;
    int row, column, requiredStone;
    printf("Enter length, width and Square flagstone: \n");
    scanf("%d%d%d", &length, &width, &square);
    if(length%square==0){
        row = length/square;
    }else{
        row = length/square + 1;
    }
    if(width%square==0){
        column = width/square;
    }else{
        column = width/square +1;
    }
    requiredStone = row*column;
    printf("Required Stone: %d\n", requiredStone);
}

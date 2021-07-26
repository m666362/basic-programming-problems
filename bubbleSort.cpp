#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int lowPosition, int highPosition);
void printArray(int nums[], int size);

int main()
{
    int nums[] = { 95, 50, 80, 20, 30, 40 };
    for(int i=5; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(nums[j]>nums[j+1])
                swap(nums, j, j+1);
        }
        printArray(nums, 6);
    }
    printArray(nums, 6);
    return 0;
}


void swap(int nums[], int lowPosition, int highPosition){
    int temp = nums[lowPosition];
    nums[lowPosition] = nums[highPosition];
    nums[highPosition] = temp;
}

void printArray(int nums[], int size){
    for(int i=0; i<size; i++)
        cout << nums[i] << " ";
    cout << endl;
}
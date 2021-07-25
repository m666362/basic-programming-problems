#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int lowPosition, int highPosition);
void quickSort(int nums[], int lowPosition, int highPosition );
void swap(int arr[], int lowPosition, int highPosition);
void printArray(int nums[], int size);

int main()
{
    int nums[] = { 25, 50, 10, 20, 30, 40 };
    quickSort(nums, 0, 5);
    printArray(nums, 6);
    return 0;
}

void quickSort(int nums[], int lowPosition, int highPosition ){
    if(lowPosition < highPosition){
        int pivot = partition(nums, lowPosition, highPosition);
        quickSort(nums, lowPosition, pivot-1);
        quickSort(nums, pivot+1, highPosition);
    }
}

int partition(int nums[], int lowPosition, int highPosition){
    int pivot = nums[lowPosition];
    int i = lowPosition;
    int j = highPosition;

    while(i<j){
        while(pivot>=nums[i])
            i++;
        while(pivot<nums[j])
            j--;
        if(i<j)
            swap(nums, i, j);
    }
    swap(nums, lowPosition, j);
    return j;
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
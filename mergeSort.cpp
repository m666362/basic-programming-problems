#include<bits/stdc++.h>
using namespace std;

// int partition(int arr[], int lowPosition, int highPosition);
void merge(int nums[], int tempArray[], int leftPosition, int mid, int rightPosition);
void mergeSort(int nums[], int tempArray[], int leftPosition, int rightPosition );
void swap(int arr[], int lowPosition, int highPosition);
void printArray(int nums[], int size);

int main()
{
    int nums[] = { 25, 50, 10, 20, 30, 40 }, 
    tempArray[] ={0,0,0,0,0,0};
    mergeSort(nums, tempArray, 0, 5);
    printArray(tempArray, 6);
    return 0;
}


void mergeSort(int nums[], int tempArray[], int leftPosition, int rightPosition ){
    if(leftPosition < rightPosition){
        int mid = (leftPosition+rightPosition)/2;
        mergeSort(nums, tempArray, leftPosition, mid);
        mergeSort(nums, tempArray, mid+1, rightPosition);
        merge(nums,tempArray, leftPosition, mid, rightPosition);
    }
}

void merge(int nums[], int tempArray[], int leftPosition, int mid, int rightPosition){
    int i = leftPosition;
    int j = mid+1;
    int k = leftPosition;
    while(i<=mid && j<=rightPosition){
        if(nums[i]<nums[j]){
        tempArray[k] = nums[i];
        i++;
        }else{
            tempArray[k] = nums[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=rightPosition){
            tempArray[k] = nums[j];
            k++;j++;
        }
    }else{
        while(i<=mid){
            tempArray[k] = nums[i];
            k++;i++;
        }
    }
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
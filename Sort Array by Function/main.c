#include <stdio.h>
#include <string.h>

//todo: code for sortArray(), which will sort an array
void sortArray(int array[], int index)
{
    int i, j, temp;
    for(i=index-2; i>=0; i--){

        for(j=0; j<=i; j++) {

            if(array[j]>array[j+1]){

                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        printf("Sorted Array is : ");
        for (int i = 0; i < index; ++i) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}

int main() {

    int num[6], num2[10];
    printf("Enter first sequence : \n");
    for (int j = 0; j < 6; ++j)
        scanf("%d", &num[j]);
    sortArray(num, 6);
    printf("Final Sorted Array is : ");
    for (int i = 0; i < 6; ++i) {
        printf("%d ", num[i]);
    }
    printf("\nEnter Second sequence : \n");
    for (int k = 0; k < 10; ++k) {
        scanf("%d", &num2[k]);
    }
    sortArray(num2, 10);
    printf("Final Sorted Secong Array is : ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", num2[i]);
    }
    return 0;
}
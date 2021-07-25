#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9, 10, -5, 12, -9 , -45 , -36, -48, -2};

    int inOfMin=0,inOfPos, i, n = sizeof(arr)/sizeof(arr[0]);

    cout << endl << "Orginal: ";
    for(i=0;i<n; i++){
        cout << arr[i] << " ";
    }
    sort(arr, arr + n);
    cout << endl << "Sorted: ";
    for(i=0;i<n; i++){
        cout << arr[i] << " ";
    }

    for(inOfPos=0; inOfPos<n; inOfPos++){
        if(arr[inOfPos]>-1)
            break;
    }

    for(inOfMin=0; (inOfPos<n) && (arr[inOfMin]<0) && (inOfMin<inOfPos); inOfMin= inOfMin+2, inOfPos++){
        swap(&arr[inOfMin], &arr[inOfPos]);
        cout << endl << "Swap : " << arr[inOfMin] << " " << arr[inOfPos] << endl;
        cout << endl << "Swap : " << inOfMin << " " << inOfPos << endl;
        cout << endl << "Swaped : " ;
        for(i=0;i<n; i++){
            cout << arr[i] << " ";
        }
    }

    cout << endl << "Final : ";
    for(i=0;i<n; i++){
        cout << arr[i] << " ";
    }
}

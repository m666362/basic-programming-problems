#include <stdio.h>
#include <string.h>

//todo: code for shiftSequence() to shift string
void shiftSequence(char word[], int length, int start, int shift){

    for (int i = start-1; i < length; ++i) {
        word[i]=word[i]+shift;
    }
}

//todo: code for reverseString() to reverse string
void reverseString(char word[], int length){

    char temp;
    printf("length : %d\n", length);
    int param = (int)(length/2);
    printf("Param : %d\n", param);
    for (int i = length-1, j=0; i>=param ; i--, j++) {
        temp = word[i];
        word[i]=word[j];
        word[j]=temp;
    }
}

int main() {

    char password[100];
    gets(password);
    reverseString(password, strlen(password));
    printf("Reverse password is: %s\n", password);
    shiftSequence(password, strlen(password), 0, 3);
    printf("New password is: %s\n", password);
    return 0;
}

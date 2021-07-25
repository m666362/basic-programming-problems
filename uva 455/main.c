/*Bismillahir Rahmanir Rahim*/

#include <stdio.h>
#include <string.h>

//todo: code for occuredtimes() to find how many times 1st letter occured
int occuredtimes(char *word, int length){

    int occurance=0;
    for (int j = 1; j < length; ++j) {
        if(word[0]==word[j])
            occurance++;
    }
    return occurance;
}

// todo: code for psblPeriod() to find how many period is possible on that string
void psblPeriod(char *word, int length, int *num, int index){

    index=0;
    for (int j = 1; j < length; ++j) {
        if(word[0]==word[j])
            num[index++] = j;
    }
}

//todo: code for isPeriodTrue() to find how many period is true or can form that string
int isPeriodTrue(int length, int period, char word[]){

    int hasPeriod = 1;
    if(length%period == 0){

        for (int i = 0; i < period; ++i) {
            for (int j = 1; (j*period)<length ; ++j) {
                if(word[i]!=word[i+j*period]){

                    return length;
                }
            }
        }
        if(hasPeriod==1){
            printf("%d ", period);
            return period;
        }
    } else
        return length;

}

//todo: code for findMin() to find the minimum value with in an Array
void findMin(int num[], int index){

    int min=num[0];
    for (int i = 1; i < index; ++i) {
        if(min>num[i])
            min=num[i];
    }
    printf("The smallest period is : %d\n", min);
}

int main() {
    char word[80];
    int  length, index, value;
    printf("How many string do you want to put?\nAnswer is : ");
    scanf("%d", &value);
    printf("Enter %d String\n", value);
    while (value>0){

        scanf("%s", &word);
        length = strlen(word);
        index = occuredtimes(word, length);
        if(index>0){

            int periods[index];
            psblPeriod(word, length, periods, index);
            printf("Possible period are : ");
            for (int i = 0; i < index; ++i) {
                periods[i] = isPeriodTrue(length, periods[i], word);
            }
            printf(" %d\n", length);
            findMin(periods, index);
        } else
            printf("The smallest period is : %d\n", length);
        value--;
        if(value!=0)
            printf("\n");
    }
    return 0;
}

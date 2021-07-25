#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// universal variable
int index[25][25];
int semiIndex[25];
int arr[2];

// methods
void moveOnto(int a, int b);
void moveOver(int a, int b);
void pileOnto(int a, int b);
void pileOver(int a, int b);
int* searchNum(int *arr, int num, int block);


int main()
{
    int block;
    printf("Enter total block: ");
    scanf("%d", &block);
    int a, b, i, j;
    for(i=0; i<block; i++)
    {
        index[i][0]=i;
        semiIndex[i]=1;
    }
    for(i=0; i<block; i++)
    {
        printf("%d ", index[i][0]);
    }
    printf("\n");
    int* ptrBase;
    int* ptrSquare;
    char work[10], preposition[10];
    char move[]="move", onto[]="onto", pile[]="pile", over[]="over";

    for(i=0; i<4; i++)
    {
        scanf("%s%d%s%d", &work, &a, &preposition, &b);
        if(!strcmp(work, move))
        {
            if(!strcmp(preposition, onto))
            {
                printf("Its moveOnto: %s %d %s %d\n", work, a, preposition, b);
                ptrBase = searchNum(arr, b, block);
                ptrSquare = searchNum(arr, a, block);
                printf("mainBase: %d   sub: %d\n", ptrBase[0], ptrBase[1]);
                printf("mainSquare: %d   sub: %d\n", ptrSquare[0], ptrSquare[1]);
                if(ptrBase[0]==ptrSquare[0]){
                    printf("Invalid Command");
                }
                // moveOnto(a,b);
            }
            else if(!strcmp(preposition, over))
            {
                printf("Its moveOver: %s %d %s %d\n", work, a, preposition, b);
                moveOver(a,b);
            }
        }
        else if(!strcmp(work, pile))
        {
            if(!strcmp(preposition, onto))
            {
                printf("Its pileOnto: %s %d %s %d\n", work, a, preposition, b);
                pileOnto(a,b);
            }
            else if(!strcmp(preposition, over))
            {
                printf("Its pileOver: %s %d %s %d\n", work, a, preposition, b);
                pileOver(a,b);
            }
        }
    }
    for(i=0; i<block; i++)
    {
        printf("%d : ", i);
        for(j=0; j<semiIndex[i]; j++)
        {
            printf("%d ", index[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void moveOnto(int a, int b)
{

}

void moveOver(int a, int b)
{
    int temp = semiIndex[b];
    index[b][temp]= a;
    semiIndex[b] += 1;
    semiIndex[a] -= 1;
    temp = semiIndex[a];
    index[a][temp]=-5;
}

void pileOnto(int a, int b)
{

}

void pileOver(int a, int b)
{

}
int* searchNum(int *arr, int num, int block)
{
    int i, j;
    for(i=0; i<block; i++)
    {
        for(j=0; j<semiIndex[i]; j++)
        {
            if(num==index[i][j])
            {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
}






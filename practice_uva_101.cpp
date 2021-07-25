#include<bits/stdc++.h>
using namespace std;

//Functions
int * searchNumber(int number, int length);

int main()
{
    printf("------ Vector Code ------\n");
    // Declaring variable
    int a, b, length, testCondition, number;
    vector<int> index[25];
    scanf("%d", &length);
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<=i; j++)
        {
            index[i].push_back(j);
        }
    }
    while(scanf("%d", &testCondition))
    {
        if(testCondition==00 || testCondition==01)
        {
            if(testCondition==00)
            {
                moveOver();
            }
            else if(testCondition==01)
            {
                moveOnto();
            }
        }
        else if(testCondition==10 || testCondition==11)
        {
            if(testCondition==00)
            {
                pileOver();
            }
            else if(testCondition==01)
            {
                pileOnto();
            }
        }
    }


    int *searchNumber(int number, int length)
    {
        static int location[2];
        for(int i=0; i<length; i++)
        {
            for(int j=0; j<index[i].size(); j++)
            {
                if(number==index[i][j])
                {
                    location[0]= i;
                    location[1]= j;
                }
            }
        }
        return location;
    }






    for(int i=0; i<length; i++)
    {
        for(int j=0; j<index[i].size(); j++)
        {
            printf("%d", index[i][j]);
        }
        printf("\n");
    }
}







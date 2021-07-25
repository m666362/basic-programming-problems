#include<bits/stdc++.h>
using namespace std;

int drive(int initialSpeed, int endingSpeed=5);
int drive(int time, int distance, string method);
int main(){
    int averageSpeed = drive(5);
    printf("Average Speed: %d\n", averageSpeed);
    averageSpeed = drive(100, 5);
    printf("Average Speed By mean time: %d\n", averageSpeed);
}
int drive(int initialSpeed, int endingSpeed=5){
    // avg speed of car
    int averageSpeed = (initialSpeed + endingSpeed)/2;
    return averageSpeed;
}
int drive(int distance, int time, string method){
    //avg speed of truck
    int averageSpeed = distance/time;
    return averageSpeed;
}

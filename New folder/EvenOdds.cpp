#include <iostream>
// using namespace std;

int main(){
    long long n,k;
    std::cin >> n >> k;
    if(n%2!=0){
        if(k<=(n/2)+1)
            std::cout << (k*2)-1 << std::endl;
        else
            std::cout << (k-((n/2)+1))*2 << std::endl;
    }else{
        if(k<=n/2)
            std::cout << (k*2)-1 << std::endl;
        else
            std::cout << (k-(n/2))*2 << std::endl;
    }
}

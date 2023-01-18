#include<iostream>
using namespace std;

int Sum(int n){

    int previouSum=Sum(n-1);
    return n+previouSum;
}

int main(){
    int n;
    cin>> n;
   cout<< Sum(n)<<endl;
    return 0;
}
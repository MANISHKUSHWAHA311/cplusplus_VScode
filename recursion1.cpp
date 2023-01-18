#include<iostream>
using namespace std;

//add sum of n number
/*int Sum(int n){

   if(n==0){
       return 0;
   }

    int prevSum=n* Sum(n-1);
    return prevSum;
}
int main(){
    int n;
    cin>>n;

    cout<<Sum(n)<<endl;
}*/

//power of n^p
/*
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPower=power(n,p-1);
    return n*prevPower;
}
int main(){
    int n,p;
    cin>>n>>p;

    cout<<power(n,p)<<endl;
}*/

//fibonacci number

int fib(int n){
    if(n==0 || n==1){
        return  n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;

    cout<<fib(n)<<endl;
}
'''take two int values from user and print gretest
among them'''


#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cin>>num1>>num2>>endl;
    if(num1>num2){
        cout<<num1<<endl;
    }
    else 
    {
        cout<<num2<<endl;
    }
    return 0;

}
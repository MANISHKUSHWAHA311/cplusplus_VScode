/* input a number n and tell wheather is more than ,less than,or equal to 10? */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>10){
        cout<<"more than 10"<<endl;

    }else if(n<10){
        cout<<"less than 10"<<endl;

    }else{
        cout<<"equal to 10"<<endl;
    }
    return 0;
}
*/

/* write a program to output wheather it is divisible by boyh 2 and 3
,divisible by one of them */

#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"enter a number: "<<endl;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"divisble by both "<<endl;

    }else if(n%2==0){
        cout<<"divisble by 2 "<<endl;
    }else if(n%3==0){
        cout<<"divisble by 3 "<<endl;
    
    }
    else{
        cout<<"divisble by none "<<endl;
    }
    return 0;
}
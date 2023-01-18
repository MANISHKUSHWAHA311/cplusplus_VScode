#include<iostream>
using namespace std;
int main()
{
    /*
    int date;
    cin>>date;
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        
        if(pocketMoney==0){
            break;
        }
        cout<<"go out today";
        pocketMoney=pocketMoney-300;
        return 0;
    }*/

    int n;
    cin>>n;
    bool flag=0;
    int i=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
               cout<<"not a  prime";
               flag =1;
            break ;
        }
    }
     if(i==0){
    cout<<"prime";
    }
    return 0;

}
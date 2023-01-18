#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=1000;
    for(int date=1; date<=30; date++){
    if(date%2==0){
    continue;
    }
    if(pocketmoney==0){
        break;
    }

    cout<<"not to go "<<endl;
    pocketmoney =pocketmoney-200;
     }
return 0;
    
}
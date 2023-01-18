#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum<<endl;
    return 0;*/

   /* for(int i=1;i<5;i++){
        cout<<i<<endl;
    }*/
    /*
    int i=1;
    while(i<=5){
        cout<<i<<endl;
        i++;
        
    }*/
    int n;
   cout<<"enter a table/postive number:";
   cin>>n;
    

    for(int i=1;i<=10;++i){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
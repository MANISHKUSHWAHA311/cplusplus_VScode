#include<iostream>
using namespace std;
int main()
/*
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           if(j<=n-i){
               cout<<" ";

           }else{
               cout<<"* ";
           }
           
       }
       cout<<endl;
    }
    return 0;
}
*/
/*
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
    return 0;
}
*/
{
    int count =1;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
            count ++;
        }
        cout<<endl;
    }
    
    return 0;
}
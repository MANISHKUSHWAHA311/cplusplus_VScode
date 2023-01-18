//write a program to find all factors of a given number?


#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"enter a postive number:";
    cin>>n;
     cout<<"factor of a number " << n <<" is :  " <<endl;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
        cout<<i<<endl;
        }
    }
    
    return 0;
}
// {
    // char  ch;
    // cin>>ch;
// 
    // cout<<"ASCII value of charcter "<< ch << " is "<< int(ch)<<endl;
    // return 0;
// }
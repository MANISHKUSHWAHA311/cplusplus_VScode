#include<iostream>
using namespace std;

bool fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=2;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;

    fib(n);

    return 0;
}
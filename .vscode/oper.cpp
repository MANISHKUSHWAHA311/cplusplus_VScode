#include<iostream>
using namespace std;
int main()
/*
{
    int i=1;
    int j=2;
    int k=1;
    int sum;

    sum =i + j + i++ + ++j + j++ + ++i ;

    cout<<i<<" "<<j<<" "<<k<<endl;
    cout<<sum<<endl;

    return 0;

}
*/
{
    int i=1;
    int j=2;
    int k=3;
    int l=4;

    i=i++ + ++i; //3
    j=j++ + ++j; //8
    k=k++ + ++k; //9
    l= i + j + j++ + k++ + ++j + --i; //35

    cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<endl;
    return 0;

}
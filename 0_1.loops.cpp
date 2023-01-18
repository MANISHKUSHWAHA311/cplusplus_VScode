#include<iostream>
#include<climits>
using namespace std;

int reverse(int x){
    bool isNegative= x < 0 ?true: false;
    if(isNegative){
    x=x*-1;
}
int reverses=0;
    while(x>0){
    int lastDigit=x%10;
    reverses=reverses*10+lastDigit;
     x=x/10;
    }

    return isNegative==true?reverses*-1:reverses;
}

int main()
{
int x;cin>>x;
cout<< reverse(x);

    // int n;cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
        // cin>>arr[i];
    // }

    // int maxno=INT_MIN;
    // int minno=INT_MAX;

    // for(int i=0;i<n;i++){
        // maxno=max(maxno,arr[i]);
        // minno=min(minno,arr[i]);
    // }
    // cout<< maxno  <<" "<< minno <<endl;
}
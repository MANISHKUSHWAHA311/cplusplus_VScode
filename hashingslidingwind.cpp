#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define vi vector

int main(){

int n,k;
cin>>n>>k;

int  arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s=0;
int ans=INT_MAX;
for(int i=0;i<k;i++){
    s+=arr[i];
}
cout<< s <<" ";
ans=min(ans,s);

for(int i=1;i<n-k+1;i++){
    s-=arr[i-1];
    s+=arr[i+k-1];
    ans=min(ans,s);
    cout<< s <<" ";
}
cout<<endl;
cout<< ans <<endl;
    return 0;
}
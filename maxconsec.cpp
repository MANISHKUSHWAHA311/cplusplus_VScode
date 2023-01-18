#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int key;cin>>key;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    int zerocout=0;int ans=0;int i=0;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            zerocout++;
        }
        while(zerocout>key){
            if(a[i]==0){
                zerocout--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
    return 0;
}
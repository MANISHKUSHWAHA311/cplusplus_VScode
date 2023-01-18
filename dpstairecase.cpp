#include<bits/stdc++.h>
using namespace std;

const int N=1e5+3;
// --> recurrence relation (memonization approach)

int dp[N];

// int staireCase(int n){
    // if(n==0)
    // return 1;            //--> normal stairecase problem <-- //
    // if(n==1 || n==2)
    // return n;
    // 
    // if(dp[n]!=-1)
    // return dp[n];
    // dp[n] = staireCase(n-1)+staireCase(n-2)+staireCase(n-3);
    // return dp[n];
// }
// 
int main()
{
    // for(int i=0;i<N;i++){
        // dp[i]=-1;
    // }
    // int n;cin>>n;
    // cout<< staireCase(n) <<endl;

       // --> tabulation approach <-- //

    // int n;cin>>n;
    // vector<int> dp(n+1);

    // dp[0]=1;
    // dp[1]=1;
    // dp[2]=2;

    // for(int i=3;i<=n;i++){
        // dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    // }
    // cout<< dp[n] <<endl;

    return 0;
}
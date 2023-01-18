#include<iostream>
using namespace std;

// given a" 2*n" board and tiles of size "2*1", find the number of ways to tile the given the board using these lines?
/*
int tillingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tillingWays(n-1)+tillingWays(n-2);
}


int main()
{
    cout<<tillingWays(4);
    return 0;
}*/

// find the number of ways in which n friends can remain single or can be paird?
/*
int friendsParing(int n){
    if(n==0 || n==1 ||n ==2){
        return n;
    }
    return friendsParing(n-1)+friendsParing(n-2)*(n-1);
}

int main(){
    cout<<friendsParing(4)<<endl;
    return 0;
}*/

// put n items given weight and value of given knapesack capacity of weight W to get the maximum
//total value in a knapesack?

int knapesack(int value[],int wt[],int n,int W){
    if(n==0|| W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapesack(value,wt,n-1,W);
    }
    return max (knapesack(value,wt,n-1,W-wt[n-1])+value[n-1],knapesack(value,wt,n-1,W));
}
int main(){
    int value[]={100,50,200};
    int wt[]={10,20,30};
    int W=50;
    cout<<knapesack(value,wt,3,W);
    return 0;
}
#include<iostream>
using namespace std;

int findPartion(int boards[],int n,int limit){
    int sum=0;int painters=1;
    for(int i=0;i<n;i++){
         sum+=boards[i];
        if(sum>limit){
        sum=boards[i]; 
        painters++;
      }
    }
    return painters;
}

int paintersPartion(int boards[],int n,int m){
    int totalLenght=0;int k=0;
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totalLenght+=boards[i];
    }
    int low =k,high=totalLenght;
    while(low<high){
        int mid=(low+high)/2;
        int painters=findPartion(boards,n,mid);
        if(painters<=m){
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}

int main()
{
    int arr[]={10,20,30,40};int n=4;
    int m=2;
    cout<<"min time to paint boards:"<<paintersPartion(arr,n,m)<<"\n";
    return 0;
}
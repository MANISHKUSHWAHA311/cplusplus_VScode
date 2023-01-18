#include<iostream>
using namespace std;

int minSubSum(int arr[],int n,int x){
    int sum=0,minLength=n+1,start=0,end=0;
    while(end<n){
        while(sum<=x && end<n){
            sum+=arr[end++];
        }
        while(start>x && start<n){
            if(end-start<minLength){
                minLength=end-start;
            }
            sum-=arr[start++];
        }
    }
    return minLength;
}

int main()
{
    int arr[]={1,4,45,6,10,19};
    int n=6;
    int x=51;
    int minLenght=minSubSum(arr,n,x);
    if(minLenght==n+1){
        cout<<"doesnt exist"<<endl;
    }
    else
    {
        cout<<"minimun subarry sum is : "<< minLenght << endl;
    }
    
    return 0;
}
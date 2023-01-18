#include<iostream>
using namespace std;
int main()
//palindrome program
/*

{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    bool check=1;

    for(int i=0; i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }

    if(check==true){
        cout<<"word is palidrome";
    }
    else
    {
        cout<<"word is not palindrome";
    }
    return 0;

}*/
/*
{
    char arr[100]= "mangoes";
    cin>>arr;

    cout<<arr<<endl;
    return 0;

}*/

{
    char arr[100] = "mangoes";
    int i=0;

    while(arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    
    }
    return 0;
}
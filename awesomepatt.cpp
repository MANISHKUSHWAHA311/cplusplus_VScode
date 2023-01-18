#include<iostream>
using namespace std;
int main()/*
{
    int  row, coln;
    cin>>row>>coln;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=coln;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    
    return 0;

}*/
{
    int row,coln;
    cin>>row>>coln;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=coln;j++){
            if(i==1 || i==row || j==1 ||j==coln){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
    
            
            cout<<endl;
    }
        

       return 0;
}
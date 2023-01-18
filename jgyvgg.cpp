#include<iostream>
using namespace std;
int main()
/*{
    int rows,coln;
    cin>>rows>>coln;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=coln;j++){
            if(i==1 || i==rows || j==1 || j==coln){
            cout<< " * ";
        }else
        {
            cout<<"   ";
        }
        // cout<<endl;
        
    }cout<<endl;
// }cout<<endl;
}
return 0;
}*/
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            if(j<=n-i){
                cout<<" ";
            }
                else{
                    cout<<"*";
                }
        }
        cout<<endl;
    
    }
    return 0;
}

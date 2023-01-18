#include<iostream>
using namespace std;

int main()

{
    //menu
    
    int u_input;
    int amount=0;int count=0;
    while(true){
    cout<<"press 1 for rickshaw:"<<endl;
    cout<<"press 2 for cars:"<<endl;
    cout<<"press 3 for buses:"<<endl;
    cout<<"press 4 to show the full record:"<<endl;
    cout<<"press 5 to delete the full record:"<<endl;
    cin>>u_input;

    if(u_input==1){
        amount+=100;
        count+=1;
        cout<<amount<<" "<<count<<endl;
    }
    else if(u_input==2){
    amount+=200;
    count+=1;
    cout<<amount<<" "<<count<<endl;
}
else if(u_input==3){
    amount+=300;
    count+=1;
    cout<<amount<<" "<<count<<endl;
}
else if(u_input==4){
    cout<<"total amount is:"<<amount<<endl;
    cout<<"total count is :"<<count<<endl;
}
else if(u_input==5){
    amount=0;
    count=0;
    cout<<"delete all amount :"<<endl;
    cout<<amount<<"-"<<"and "<<count<<"-"<<endl;
}
else
{
    cout<<"invalid amount:"<<endl;
}
    }
    return false;

    return 0;
}
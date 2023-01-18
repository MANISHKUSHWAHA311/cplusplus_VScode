#include<iostream>
using namespace std;
int main()
{
    int quantity,price;
    cout<<"enter a quantity";
    cin>>quantity;
    price=quantity*100;
    if(price>1000){
        cout<<"total cost is "<<price-(price*1)<<endl;
        }
    else
    {
        cout<<"total cost is"<<price<<endl;
        }
    return 0;
}
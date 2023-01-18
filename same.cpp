#include<iostream>
using namespace std;
int main()
{
    int salary,bonus;
    cin>>salary>>endl;
    cout<<"enter a salary";
    if(salary<5/365)
    {
        cout<<"per year of salary"<<endl;
        }
        else
        {
            cout<<"net bonus "<<endl;
        }
        return 0;
        
}
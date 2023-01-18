#include<bits/stdc++.h>
using namespace std;


int main()
{
    priority_queue<int,vector<int>> pr;
    pr.push(1);
    pr.push(3);
    pr.push(4);
    cout<< pr.top()<<endl;
    pr.pop();
    cout<< pr.top()<<endl;
    pr.pop();
    cout<< pr.top()<<endl;
    pr.pop();
cout<< " minimum heap in stl:"<<endl;
    priority_queue<int,vector<int>,greater<int>> prm;
    prm.push(3);
    prm.push(4);
    prm.push(2);
    cout<<prm.top()<<endl;
    prm.pop();
    cout<<prm.top()<<endl;
    prm.pop();
    cout<<prm.top()<<endl;
    prm.pop();
    return 0;
}
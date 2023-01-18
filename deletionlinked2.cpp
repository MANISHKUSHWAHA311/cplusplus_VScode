#include<iostream>
using namespace std;

void deletion(node* &head ,int val){

    node*temp=&head;
     while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    return 0;
}
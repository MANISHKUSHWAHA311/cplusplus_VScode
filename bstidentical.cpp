#include<iostream>
using namespace std;

struct node{
    int data;
    node*left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool isidentical(node*root1,node*root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if (root1==NULL || root2==NULL){
        return false;
    }
    else
    {
        bool cond1=root1->data==root2->data;
        bool cond2=isidentical(root1->left,root2->left);
        bool cond3=isidentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        else
        {
            return false;
        }
        
    }
    
}

int main()
{
    node*root=new node(2);
    root->left=new node(3);
    root->right=new node(4);
    if(isidentical(root,root)){
        cout<<"bst is identical"<<endl;
    }
    else
    {
        cout<<"bst is not identical"<<endl;
    }
    
    return 0;
}
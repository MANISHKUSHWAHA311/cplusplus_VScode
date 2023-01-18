#include<iostream>
#include<map>
#include<vector>
using namespace std;

#define ss second
#define vi vector

struct Node{
    int key;
    Node *left,*right;
};

Node* newNode(int key){
    Node *node=new Node;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}

void verticalOrder(Node*root ,int hDis,map<int,vector<int>>&m){
    if(root==NULL){
        return ;
    }
    m[hDis].push_back(root->key);
    verticalOrder(root->left,hDis-1,m);
    verticalOrder(root->right,hDis+1,m);

}

int main()
{
    Node*root=newNode(10);
    root->left=newNode(7);
    root->right=newNode(4);
    root->left->left=newNode(3);
    root->left->right=newNode(11);
    root->right->left=newNode(14);
    root->right->right=newNode(6);

    map<int,vector<int>>m;
    int hDis=0;
    verticalOrder(root,hDis,m);

    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->ss).size();i++){
            cout<<(it->ss)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
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

node*sortedArrayBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    node*root=new node(arr[mid]);

    root->left=sortedArrayBST(arr,start,mid-1);
    root->right=sortedArrayBST(arr,mid+1,end);

    return root;
}
void printPreorder(node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{
    int arr[]={10,20,30,40,50};
    node*root=sortedArrayBST(arr,0,4);
    printPreorder(root);
    cout<<endl;
    }
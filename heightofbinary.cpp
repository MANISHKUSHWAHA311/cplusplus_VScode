#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

// int calHeight(node*root){
    // if(root==NULL){
        // return 0;
    // }
    // int lHeight=calHeight(root->left);
    // int rHeight=calHeight(root->right);
    // return max(lHeight,rHeight)+1;
//  }
// 
// int calDaimeter(node*root){
    // if(root==NULL){
        // return 0;
    // }
    // int lHeight=calHeight(root->left);        o(n2) complexivity
    // int rHeight=calHeight(root->right);
    // int currDaimeter=lHeight+rHeight+1;
// 
    // int lDaimeter=calDaimeter(root->left);
    // int rDiameter=calDaimeter(root->right);
// 
    // return max(currDaimeter,max(lHeight,rHeight));
// }

int calDaimeter(node*root,int*height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0, rh=0;
    int lDaimeter=calDaimeter(root->left,&lh);
    int rDiamter=calDaimeter(root->right,&rh);
    int currDimeter=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currDimeter,max(lDaimeter,rDiamter));
}

int main()
{
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // cout<<calHeight(root)<<" ";
    // cout<<calDaimeter(root);
    cout<<calDaimeter(root,&height)<<" ";

}
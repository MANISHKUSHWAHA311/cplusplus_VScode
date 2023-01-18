#include<stdlib.h>
#include<stdio.h>
#include<climits>
using namespace std;
struct  node{
    int data;
    struct node*link;
};
int main()
{
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;



}
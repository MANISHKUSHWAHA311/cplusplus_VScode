#include<bits/stdc++.h>
using namespace std;

class trie{
    public:
    class node{
    bool end;
    node* next[26];
    node(){
        end=false ;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
    };
    node* trie;
    trie(){
        trie=new node();
    }

    void insert(string word){
        int i=0;
        node*it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL)
            it->next[word[i]-'a']=new node();
            it=it->next[word[i]-'a'];
            i++;
        }
        it->end=true;
    }
    void search(string word){
        int i=0;
        node*it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL){
                return false;
                it=it->next[word[i]-'a'];
                i++;
            }
            return it->end;
        }
    }

};

int main()
{
    trie mytrie=new trie();
    vector<string >word={"ayush","alia"};
    for(auto w:words){
        mytrie->insert(w);
    }
    if(mytrie->search("ayush")){
        cout<<"ayush is found "<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    
    return 0;
}
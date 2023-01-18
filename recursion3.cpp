#include<iostream>
using namespace std;

//reverse a string using recursion
/*
void reverse(string s){
    if(s.length()==0){
        return ;
    }
    string  ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){
    reverse("binod");
    return 0;
    }
    */

//replacepi
   /*void replacepi(string s){
       if(s.length()==0){
           return ;
       }
       if(s[0]='p' && s[1]=='i'){
           cout<<"3.14";
           replacepi( s.substr(2));
       }
       else
       {
           cout<<s[0];
           replacepi( s.substr(1));
       }
   }
   int main(){
       replacepi("pippppiiiipi");
       return 0;
   }
*/

//towerofhanaoi
/*void towerofhanaoi(int n,char src,char dest,char helper){

    if(n==0){
        return;
    }

    towerofhanaoi(n-1,src,helper,dest);
    cout<<"move from  "<<src<<" to "<<dest<<endl;
    towerofhanaoi(n-1,helper,dest,src);
}
int main(){
    towerofhanaoi(3,'A','C','B');
    return 0;

}*/

//duplicate string

/*string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;

}
int main(){
    cout<<removeDup("aaaabbbeeecdddd");
    return 0;
}*/

//moveallx
/*
string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;

}
int main(){
    cout<<moveallX("axxbdxcefxhix");
    return 0;
}*/

//abc substring
/*

void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }

    char ch=s[0];
    string ros=(s.substr(1));
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
int main(){
    subseq("ABC","");
    return 0;
}*/

//sam as ascii number
/*void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }

    char ch=s[0];
    int code=ch;
    string ros=(s.substr(1));
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros, ans + to_string(code));
}
int main(){
    subseq("AB","");
    return 0;
}*/

//print all postive integer

string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuvw","xyz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string code=keypadarr[ch-'0'];
    string ros=s.substr(1);
for(int i=0;i<code.length();i++){
    keypad(ros, ans+code[i]);
}
}
int main(){
    keypad("23","");
    return 0;
}
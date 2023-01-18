#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //convert inti upper case
    string str="dgbhkjhdbkh";
 
     cout<< 'a' -'A'<<endl;
    
     for(int i=0;i<str.size();i++){
         if(str[i]>='a' && str[i]<='z')
         str[i] -= 32;
        
     }
    cout<< str <<endl;

    //convert into lower case 
    




string str1="BKBHBNBHNKJ";
 cout<< 'a' -'A'<<endl;
    
 for(int i=0;i<str1.size();i++){
     if(str1[i]>='A' && str1[i]<='Z')
     str1[i] += 32;
    
 }
cout<< str1 <<endl;

//transform method 

string s = "mnsbhhdhvhad";
cout<<'a'-'A'<<endl;

transform(s.begin(), s.end() , s.begin(), ::toupper);
cout<< s << endl;

transform(s.begin(), s.end() , s.begin(), ::tolower);
cout<< s << endl;
return 0;
}
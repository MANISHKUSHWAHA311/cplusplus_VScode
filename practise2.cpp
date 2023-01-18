#include<iostream>
using namespace std;
 int main()
 {
     int a, b , c;
     cin>> a  >> b >> c ;

     if(a>b){
         if(a>c){
             return a;
         }
             else{
            
                 return c;
                 }
         
     }

     else
         if(b>c){
             return b;
         }
             else{
             
                 return c;
             }
     return 0;
      
 }
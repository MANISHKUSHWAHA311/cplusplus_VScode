#include<iostream>
using namespace std;


/*{
    int a =10;
    int *aptr = &a;
    *aptr = 20;
    aptr++;
     

    cout<< aptr <<endl;
    cout<<*aptr <<endl;
    cout<< &a <<endl;
    return 0;
}*/

void increment (int a){
    a++;
}
int main(){
    int a=2;
    increment(a);
    cout<< a <<endl;
    return 0;
}
#include<iostream>
using namespace std;
class A{ 
public:
  int a;
  void funca(){
      cout<< "avnn"<<endl;
  }
  private:
  int b;
  void funcb(){
      cout<<"dbjdhb"<<endl;
  }
  protected:
  int c;
  void funcc(){
      cout<<"cjbc"<<endl;
  }
};


int main()
{
    A obj ;
    obj.funca();

}
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvalution(string S){
    stack<int>st;

    for(int i=0;i<S.length();i++){
        if(S[i]>='0' && S[i]<='9'){
            st.push(S[i]-'0');
        }
        else
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (S[i])
            {
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;

            }
        }
        
    }
    return st.top();
}

int main()
{
cout<<postfixEvalution("231*+9-");
return 0;
}
//"46+2/5*7+"
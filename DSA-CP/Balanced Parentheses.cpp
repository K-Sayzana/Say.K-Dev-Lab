#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool parenthesisChecker(string s){
    stack<char> p;
    
    for(int i=0; i<s.size(); i++) {
        bool o= s[i]=='(' ||  s[i]=='[' ||  s[i]=='{';
        bool c= s[i]==')' ||  s[i]==']' ||  s[i]=='}';
        if(o){
            p.push(s[i]);
        }
        
        else if(p.empty() && c){
            return false;
        }
        else {
            switch (p.top()){
                case '(':
                    if(s[i]==')'){
                        p.pop();
                    }
                    else{
                       return false;
                    }
                    break;
                case '{':
                    if(s[i]=='}'){
                        p.pop();
                    }
                    else{
                        return false;
                    }
                    break;
                case '[':
                    if(s[i]==']'){
                        p.pop();
                    }
                    else{
                        return false;
                    }
                    break;    
            }
        }
    
    }
    // check condition //
        if(p.empty()){
            return true;
        }
        else {
            return false;
        }
}


int main()
{
  
   
    return 0;
}

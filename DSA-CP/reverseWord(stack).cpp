#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseUsingStack(string word) {    
    stack<char> s;
    string revWord;
    
    for (int i = 0; i < word.size(); i++) {    
        if (word[i] != ' ') {
            s.push(word[i]);
        } else {
            while (!s.empty()) {
                revWord += s.top();
                s.pop();
            }
            revWord += " ";
        }
    }

    
    while (!s.empty()) {
        revWord += s.top();
        s.pop();
    }

    return revWord;
}

int main() {
    string word = "you will never walk alone!";
    cout << reverseUsingStack(word);
    return 0;
}

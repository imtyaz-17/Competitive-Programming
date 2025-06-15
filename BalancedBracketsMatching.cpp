#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<char, int> symbols = {
    {'[', -3}, {'{', -2}, {'(', -1},
    {']',  3}, {'}',  2}, {')',  1}
};

string isBalanced(string s) {
    stack<char> st;

    for (char bracket : s) {
        if (symbols[bracket] < 0) {
            st.push(bracket);
        } else {
            if (st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0)
                return "NO";
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main() {
    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    cout << isBalanced(s) << endl;
    return 0;
}

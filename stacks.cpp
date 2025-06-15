#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n, x;
    cout << "Enter the number of elements to push onto the stack: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);
    }

    cout << "Elements in the stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}

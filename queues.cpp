#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    int n, x;
    cout << "Enter the number of elements to enqueue: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i=0;i<n;i++){
        cin>>x;
        q.push(x);
    }
    cout << "Elements in the queue (front to back): ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
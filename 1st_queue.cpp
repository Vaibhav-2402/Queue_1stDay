#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<int> q;
    
    q.push(90);
    q.push(910);
    q.push(920);
    q.push(930);
    
    cout << " Element at front is : " << q.front() << endl;
    
    q.pop();
    
    cout << " Element at front is : " << q.front() << endl;
    
    q.pop();
    cout << " Element at front is : " << q.front() << endl;
    
    
    return 0;
}
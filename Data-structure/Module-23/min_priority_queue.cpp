#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq; // min priority queue
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(4);
    cout << pq.top() << endl;
    pq.pop(); // 4    
    pq.pop(); // 5
    cout << pq.top() << endl;

    cout << pq.empty() << endl;
    return 0;
}
/*
Priority Queue
 - provides the functionality of a Priority Queue data structure.
 - A priority Priority Queue is a special type of Priority Queue in which each element is associated with a priority value and elements are served based on their priority.
 - a Tree Data Structure is maintained
 - By default, STL priority_Priority Queue gives the largest element the highest priority.
*/

#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
    // Priority Queue declaration and initialization
    priority_queue<int> pq1;
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.emplace(4);
    pq1.emplace(5);

    // Printing The Priority Queues
    cout << "\nPriority Queue-1:" << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << "  ";
        pq1.pop();
    }

    // 1. Insert element to a Priority Queue
    // using push(), emplace(), or containers like Vector , list
    cout << "\n\n\n1. Insert/Add value to a Priority Queue:" << endl;
    pq1.push(7);
    pq1.push(9);
    pq1.emplace(2);
    pq1.emplace(11);
    cout << "Priority Queue-1" << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << "  ";
        pq1.pop();
    }

    // 2. Access elements from a Priority Queue
    // Using top()
    cout << "\n\n\n2. Access elements from a Priority Queue:" << endl;
    pq1.push(7);
    pq1.push(9);
    pq1.emplace(21);
    pq1.emplace(11);
    cout << "  Top = " << pq1.top() << endl;

    // 3. Remove/Delete value from a Priority Queue
    // using pop(), erase(), clear()
    cout << "\n\n\n3. Delete/Remove value from a Priority Queue:" << endl;
    cout << "  Top = " << pq1.top() << endl;
    pq1.pop();
    cout << "  Top = " << pq1.top() << endl;

    // 4. Other Function
    // size(), empty()
    cout << "\n\n\n4. Other Functions:" << endl;
    cout << "Priority Queue-1" << endl;
    cout << "  Size = " << pq1.size() << endl;
    cout << "  Empty = " << pq1.empty() << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << "  ";
        pq1.pop();
    }
    cout << "\n  Size = " << pq1.size() << endl;
    cout << "  Empty = " << pq1.empty() << endl;

    // Min-Heap Priority Queue
    // Ascending Order
    cout << "\n\n\n5. Min-Heap Priority Queue" << endl;
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(-2);
    pq2.push(10);
    pq2.push(20);
    pq2.emplace(8);

    cout << "\n  Top = " << pq2.top() << endl;
    cout << "Priority Queue-2" << endl;
    while (!pq2.empty())
    {
        cout << pq2.top() << "  ";
        pq2.pop();
    }

    return 0;
}
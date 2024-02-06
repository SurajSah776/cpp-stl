/*
QUEUE
 - provides the functionality of a queue data structure.
 - FIFO Principle
*/

#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
    // Queue declaration and initialization
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.emplace(4);
    q1.emplace(5);

    // You can initialize a queue with a container like Deque or List.
    list<int> l1 = {9, 5, 3, 1, 2, 4, 6};
    queue<int, list<int>> q2(l1);

    // Printing The Queues
    cout << "\nQueue-1:" << endl;
    while (!q1.empty())
    {
        cout << q1.front() << "  ";
        q1.pop();
    }

    cout << "\nQueue-2:" << endl;
    while (!q2.empty())
    {
        cout << q2.front() << "  ";
        q2.pop();
    }

    // 1. Insert element to a Queue
    // using push(), emplace(), or containers like queue , list
    cout << "\n\n\n1. Insert/Add value to a Queue:" << endl;
    q1.push(7);
    q1.push(9);
    q1.emplace(11);
    cout << "Queue-1" << endl;
    while (!q1.empty())
    {
        cout << q1.front() << "  ";
        q1.pop();
    }

    // 2. Access elements from a Queue
    // Using front(), back()
    cout << "\n\n\n2. Access elements from a Queue:" << endl;

    queue<int, list<int>> q3(l1);
    cout << "Queue-3" << endl;
    cout << "front() = " << q3.front() << endl;
    cout << "back() = " << q3.back() << endl;
    while (!q3.empty())
    {
        cout << q3.front() << "  ";
        q3.pop();
    }

    // 3. Change/Update elements
    // Using front(), back()
    cout << "\n\n3. Update/Change elements of a Queue:" << endl;
    queue<int, list<int>> q4(l1);
    q4.front() = 0;
    q4.back() = 0;
    cout << "Queue-4" << endl;
    while (!q4.empty())
    {
        cout << q4.front() << "  ";
        q4.pop();
    }

    // 4. Remove/Delete value from a Queue
    // using pop_front(), pop_back(), erase(), clear()
    cout << "\n\n\n4. Delete/Remove value from a Queue:" << endl;
    queue<int, list<int>> q5(l1);
    cout << "Queue-5" << endl;
    q5.pop();
    q5.pop();
    while (!q5.empty())
    {
        cout << q5.front() << "  ";
        q5.pop();
    }

    // 5. Other Function
    // size(), empty()
    cout << "\n\n\n5. Other Functions:" << endl;
    queue<int, list<int>> q6(l1);
    cout << "Queue-6" << endl;
    cout << "Size = " << q6.size() << endl;
    cout << "Empty = " << q6.empty() << endl;
    while (!q6.empty())
    {
        cout << q6.front() << "  ";
        q6.pop();
    }
    cout << "\nEmpty = " << q6.empty() << endl;

    return 0;
}

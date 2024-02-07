/*
DEQUE
 - provides the functionality of a double-ended queue data structure.
 -
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // Deque declaration and initialization
    deque<int> d1 = {5, 3, 8, 1, 3};

    deque<int> d2{7, 9, 8, 7, 6};

    deque<int> d3(5, 15);

    // Printing The deques
    cout << "\nDeque-1:" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }

    cout << "\n\nDeque-2:" << endl;
    for (auto it : d2)
    {
        cout << it << "  ";
    }

    cout << "\n\nDeque-3:" << endl;
    for (auto it : d3)
    {
        cout << it << "  ";
    }

    // 1. Insert element to a Deque
    // using push_front(), emplace_front(), push_back(), emplace_back()
    cout << "\n\n\n1. Insert/Add value to a deque:" << endl;
    cout << "Deque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }
    d1.push_front(100);
    d1.emplace_front(-100);
    d1.push_back(200);
    d1.emplace_back(-200);
    cout << "\nDeque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }

    // 2. Access elements from a Deque
    // Using at(),  operator[], front(), back()
    cout << "\n\n\n2. Access elements from a Deque:" << endl;
    cout << "Deque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }
    cout << "\n[0] = " << d1[0] << endl;
    cout << "at(1) = " << d1.at(1) << endl;
    cout << "front() = " << d1.front() << endl;
    cout << "back() = " << d1.back() << endl;

    // 3. Change/Update elements
    // Using at(), operator[], front(), back()
    cout << "\n\n3. Update/Change elements of a Deque:" << endl;
    d1.at(2) = -1;
    d1[3] = -2;
    d1.front() = 0;
    d1.back() = 0;
    cout << "Deque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }

    // 4. Remove/Delete value from a deque
    // using pop_front(), pop_back(), erase(), clear()
    cout << "\n\n\n4. Delete/Remove value from a deque:" << endl;
    cout << "Deque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }
    d1.pop_front();
    d1.pop_back();
    d1.erase(d1.begin() + 1);
    d1.erase(d1.end() - 1);
    cout << "\nDeque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }

    // 5. Other Function
    // size(), max_size(), empty()
    cout << "\n\n\n5. Other Functions:" << endl;
    cout << "Deque-1" << endl;
    for (auto it : d1)
    {
        cout << it << "  ";
    }
    cout << "\nSize = " << d1.size() << endl;
    cout << "Max Size = " << d1.max_size() << endl;
    cout << "Empty = " << d1.empty() << endl;

    return 0;
}
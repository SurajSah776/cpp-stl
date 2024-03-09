/*
UNORDERED_SET
 - stores unique elements (no duplicates allowed)
 - stores elements in unordered manner
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // Set declaration
    unordered_set<int> s1 = {5, 3, 8, 1, 3};

    unordered_set<int> s2{7, 9, 8, 7, 6};

    // Printing The Sets
    cout << "\nSet-1:" << endl;
    for (auto it : s1)
    {
        cout << it << "  ";
    }

    cout << "\n\nSet-2:" << endl;
    for (auto it : s2)
    {
        cout << it << "  ";
    }

    // 1. Insert value to a unordered_set
    // using insert(), emplace()
    cout << "\n\n1. Insert/Add value to a Set:" << endl;
    s1.insert(5); // Not inserted - Unique elements
    s1.insert(100);
    s1.emplace(6); // Not inserted - Unique elements
    s1.emplace(69);
    cout << "Set-1" << endl;
    for (auto it : s1)
    {
        cout << it << "  ";
    }

    // 2. Remove/Delete value from a Set
    // using erase(), clear()
    cout << "\n\n2. Delete/Remove value from a Set:" << endl;
    s1.erase(100);
    cout << "Set-1" << endl;
    for (auto it : s1)
    {
        cout << it << "  ";
    }

    // 3. Other Function
    // count(), find(), size(), max_size(), empty()
    cout << "\n\n3. Other Functions:" << endl;
    cout << "Set-1" << endl;
    for (auto it : s1)
    {
        cout << it << "  ";
    }

    cout << "\nSize = " << s1.size() << endl;
    cout << "Max Size = " << s1.max_size() << endl;
    cout << "Empty = " << s1.empty() << endl;
    cout << "Find = " << *(s1.find(8)) << endl;
    cout << "Count = " << s1.count(8) << endl;

    return 0;
}
/*
MULTISET
 - duplicates are allowed
 - stores elements in sorted manner
 - immutable (We can add or remove elements but can't change it)
 - every value is unique so the value itself act as the key for identifying the element/value (Associative)
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Set declaration
    multiset<int> s1 = {5, 3, 8, 1, 3};

    multiset<int> s2{7, 9, 8, 7, 6, 8, 8};

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

    // Sort the set in descending order
    cout << "\n\nSorting in descending order:" << endl;
    multiset<int, greater<int>> s3{1, 0, 2, 5, 6, 2, 1, 2, 2, 5, 2, 9};
    cout << "Set-3" << endl;
    for (auto it : s3)
    {
        cout << it << "  ";
    }

    // 1. Insert value to a Set
    // using insert(), emplace()
    cout << "\n\n1. Insert/Add value to a Set:" << endl;
    s1.insert(100);
    s1.emplace(200);
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
    cout << "Set-3" << endl;
    for (auto it : s3)
    {
        cout << it << "  ";
    }

    cout << "\nSize = " << s3.size() << endl;
    cout << "Max Size = " << s3.max_size() << endl;
    cout << "Empty = " << s3.empty() << endl;
    cout << "Find = " << *(s3.find(2)) << endl;
    cout << "Count = " << s3.count(2) << endl;

    return 0;
}
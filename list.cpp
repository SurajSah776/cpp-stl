/* List
  - Similar to Vector but it gives/allows us front operation as well
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    // List Initialization
    // Method-1
    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2{6, 7, 8, 9, 10};

    // Method-2
    list<int> l3(5, 10);

    // Printing the list
    cout << "List-1" << endl;
    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++)
    {
        cout << *(it) << "  ";
    }

    // Using auto keyword
    cout << "\n\nList-3" << endl;
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *(it) << "  ";
    }

    // Using for each loop
    cout << "\n\nList-2" << endl;
    for (auto it : l2)
    {
        cout << it << "  ";
    }

    // Operations on List
    // 1. Adding Elements to the List
    // Using push_front(), emplace_front(), push_back(), emplace_back(), insert()
    cout << "\n\n\n1. Insertion / Adding element:" << endl;
    cout << "List-1" << endl;
    for (auto it : l1)
    {
        cout << it << "  ";
    }

    l1.push_front(100);
    l1.push_back(100);
    l1.emplace_front(-1);
    l1.emplace_back(-1);
    l1.insert(l1.begin(), 0);
    l1.insert(l1.end(), 0);
    l1.insert(l1.end(), l2.begin(), l2.end());

    cout << endl;
    cout << "List-1" << endl;
    for (auto it : l1)
    {
        cout << it << "  ";
    }

    // 2. Accessing the Vector
    // using  front(), back()
    cout << "\n\n\n2. Access the List element:" << endl;
    cout << "List-2" << endl;
    for (auto it : l2)
    {
        cout << it << "  ";
    }

    cout << endl;
    cout << "l2.front() = " << l2.front() << endl;
    cout << "l2.back() = " << l2.back() << endl;
    cout << "l2.begin() = " << *(l2.begin()) << endl;

    // 3. Removing/Deleting elements from List
    // using  pop_front(), pop_back()
    cout << "\n\n\n3. Deletion" << endl;
    cout << "List-1" << endl;
    for (auto it : l1)
    {
        cout << it << "  ";
    }
    l1.pop_front();
    l1.pop_front();
    l1.pop_back();
    l1.pop_back();

    cout << "\nList-1" << endl;
    for (auto it : l1)
    {
        cout << it << "  ";
    }

    // Other Functions
    // reverse(), sort(), unique(), merge(), empty(), size(), clear()
    cout << "\n\nOther Functions" << endl;
    cout << "Size = " << l1.size() << endl;
    cout << "Empty = " << l1.empty() << endl;

    cout << "\nList-1 (Before Sort)" << endl;
    for (auto it : l1)
    {
        cout << it << "  ";
    }

    l1.sort();
    l1.unique(); // Removes Duplicates

    cout << "\nList-1 (After Sort)" << endl;
    for (auto it : l1)
    {
        cout << it << "  ";
    }

    return 0;
}
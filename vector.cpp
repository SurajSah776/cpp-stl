/*
Vector

*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // Vector Initialization
    // Method-1
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2{6, 7, 8, 9, 10};

    // Method-2
    vector<int> v3(5, 10);

    // Printing the Vector
    cout << "Vector-1" << endl;
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << "  ";
    }

    // Using auto keyword
    cout << "\n\nVector-3" << endl;
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *(it) << "  ";
    }

    // Using for each loop
    cout << "\n\nVector-2" << endl;
    for (auto it : v2)
    {
        cout << it << "  ";
    }

    // Accessing the Vector
    // using  [] or at()
    cout << "\n\nAccess the Vector element" << endl;
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1.at(0) << endl;
    cout << v1.at(1) << endl;

    // Changing/Updating the Vector
    // using  [] or at()
    cout << "\n\nUpdate the Vector element" << endl;
    cout << v1[0] << endl;
    cout << v1.at(1) << endl;
    v1[0] = -1;
    v1.at(1) = -2;
    cout << v1[0] << endl;
    cout << v1.at(1) << endl;

    // 1. Adding elements to vector
    // push_back(), emplace(), insert()
    cout << "\n\n1. Insertion:" << endl;
    v1.push_back(10);
    v1.emplace(v1.begin(), 20);
    v1.emplace(v1.end(), 30);
    v1.insert(v1.begin(), 100);
    v1.insert(v1.end(), 200);
    v1.insert(v1.end(), v2.begin(), v2.begin() + 3);
    v1.insert(v1.end(), v3.begin(), v3.end() - 3);

    cout << "Vector-1" << endl;
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << "  ";
    }

    // 2. Removing/Deleting elements from vector
    // pop_back(), erase()
    cout << "\n\n2. Deletion" << endl;
    v1.pop_back();
    v1.pop_back();
    cout << *(v1.begin()) << endl;
    v1.erase(v1.begin());
    v1.erase(v1.end() - 1);
    cout << "Vector-1" << endl;
    for (auto it : v1)
    {
        cout << it << "  ";
    }
    cout << endl;

    v1.erase(v1.begin() + 1, v1.begin() + 3);
    for (auto it : v1)
    {
        cout << it << "  ";
    }
    cout << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;

    // Other Function
    cout << "\n\nOther Functions" << endl;
    cout << "Size = " << v1.size() << endl;
    cout << "Capacity = " << v1.capacity() << endl;
    cout << "Empty = " << v1.empty() << endl;

    return 0;
}
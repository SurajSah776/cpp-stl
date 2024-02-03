#include <iostream>
using namespace std;

int main()
{
    // Pair-1
    pair<int, int> p1;
    p1.first = 3;
    p1.second = 9;

    cout << "Pair-1 : " << p1.first << " " << p1.second << endl;

    // Pair-2
    pair<int, int> p2 = {1, 2};
    cout << "Pair-2 : " << p2.first << " " << p2.second << endl;

    cout << "After Swapping" << endl;
    p1.swap(p2);

    cout << "Pair-1 : " << p1.first << " " << p1.second << endl;
    cout << "Pair-2 : " << p2.first << " " << p2.second << endl;

    // Pair-3
    pair<int, pair<int, int>> p3 = {6, {p2.first, p2.second}};

    cout << "Pair-3 : " << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    // Swapping pair-1 and pair-2

    // Pair Array
    cout << "\nPair Array:" << endl;
    pair<int, int> arr[] = {{2, 1}, {0, 5}, {3, 4}, {6, 9}};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    return 0;
}
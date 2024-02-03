#include <iostream>
using namespace std;

int main()
{
    // pair<int, int> p1 = make_pair(4, 5);
    pair<int, int> p1;
    p1 = {4, 9};
    p1 = make_pair(2, 5);

    pair<int, int> &p2 = p1;
    p2.first = 544;
    cout << p1.first << "  " << p1.second << endl;
    cout << p2.first << "  " << p2.second << endl;

    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    pair<int, int> pair_array[4];

    // Initializing
    int j = 0;
    for (int i = 0; i < 4; i++)
    {
        pair_array[i] = {j + 1, j};
        j = j + 2;
    }

    // Printing the Values
    for (int i = 0; i < 4; i++)
    {
        cout << pair_array[i].first << "  " << pair_array[i].second << endl;
    }

    // Swapping
    cout << "Before Swapping" << endl;
    cout << pair_array[1].first << " " << pair_array[1].second << endl;
    cout << pair_array[2].first << " " << pair_array[2].second << endl;

    pair_array[1].swap(pair_array[2]);
    cout << endl;

    cout << "After Swapping" << endl;
    cout << pair_array[1].first << " " << pair_array[1].second << endl;
    cout << pair_array[2].first << " " << pair_array[2].second << endl;
    return 0;
}

#include <iostream>
using namespace std;

int findAllIndices(int arr[], int n, int key, int indices[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            indices[count++] = i; // store index
        }
    }
    return count; // number of occurrences
}

int main()
{
    // works for first two test cases
    int arr1[] = {1, 2, 3, 2, 4, 2, 5};
    int indices1[10]; // random size to store indices
    int key1;
    cout << "Enter number to find indices: ";
    cin >> key1;
    int count1 = findAllIndices(arr1, 7, key1, indices1);
    cout << "Indices of " << key1 << ": ";
    for (int i = 0; i < count1; i++)
        cout << indices1[i] << " ";
    if (count1 == 0)
        cout << "(empty)";
    cout << endl;

    // third test case
    int arr2[] = {};
    int indices2[10];
    int key2;
    cout << "Enter number to find indices (empty array): ";
    cin >> key2;
    int count2 = findAllIndices(arr2, 0, key2, indices2);
    cout << "Indices of " << key2 << " in empty array: ";
    for (int i = 0; i < count2; i++)
        cout << indices2[i] << " ";
    if (count2 == 0)
        cout << "(empty)";
    cout << endl;

    return 0;
}

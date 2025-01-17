// C++ program to illustrate
// recursive approach to ternary search
#include <bits/stdc++.h>
using namespace std;

// Function to perform Ternary Search
int ternarySearch(int l, int r, int key, int arr[])
{
    if (r >= l)
    {

        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        // Check if key is present at any mid
        if (arr[mid1] == key)
        {
            return mid1;
        }
        if (arr[mid2] == key)
        {
            return mid2;
        }

        // Since key is not present at mid,
        // check in which region it is present
        // then repeat the Search operation
        // in that region
        if (key < arr[mid1])
        {

            // The key lies  between l and mid1
            return ternarySearch(l, mid1 - 1, key, arr);
        }
        else if (key > arr[mid2])
        {

            // The key lies  between mid2 and r
            return ternarySearch(mid2 + 1, r, key, arr);
        }
        else
        {

            // The key lies in between mid1 and mid2
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }

    // Key not found
    return -1;
}

int main()
{
    int l, r, p, key;

    // Get the array
    // Sort the array if not sorted
    int arr[] = {1, 2, 3, 3, 5, 5, 7, 7, 8, 9, 10};

    // Starting index
    l = 0;

    // length of array
    r = 9;

    // Checking for 5

    // Key to be searched in the array
    key = 5;

    // Search the key using ternarySearch
    p = ternarySearch(l, r, key, arr);

    // Print the result
    cout << "Index of " << key
         << " is " << p << endl;

    // Checking for 50

    // Key to be searched in the array
    key = 25;

    // Search the key using ternarySearch
    p = ternarySearch(l, r, key, arr);

    // Print the result
    cout << "Index of " << key
         << " is " << p << endl;
}

// This code is contributed
// Hardik agrawal

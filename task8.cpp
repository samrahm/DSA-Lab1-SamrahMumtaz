#include <iostream>
using namespace std;

// naive algorithm
int naiveSearch(const char text[], const char pattern[])
{
    // finding lengths
    int n = 0, m = 0;
    while (text[n] != '\0')
        n++;
    while (pattern[m] != '\0')
        m++;

    // check for empty pattern
    if (m == 0)
        return 0;

    // naive search
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && text[i + j] == pattern[j])
        {
            j++;
        }
        if (j == m)
            return i; // found at index i
    }

    return -1; // not found
}

int main()
{
    // Test 1: Pattern at beginning
    cout << "Test 1: Pattern at beginning" << endl;
    char text1[] = "hello world";
    char pat1[] = "hello";
    cout << "Index: " << naiveSearch(text1, pat1) << endl;

    // Test 2: Pattern at end
    cout << "Test 2: Pattern at end" << endl;
    char text2[] = "abcdef";
    char pat2[] = "def";
    cout << "Index: " << naiveSearch(text2, pat2) << endl;

    // Test 3: Pattern not present
    cout << "Test 3: Pattern not present" << endl;
    char text3[] = "openai";
    char pat3[] = "xyz";
    cout << "Index: " << naiveSearch(text3, pat3) << endl;

    // Test 4: Empty pattern
    cout << "Test 4: Empty pattern" << endl;
    char text4[] = "anything";
    char pat4[] = "";
    cout << "Index: " << naiveSearch(text4, pat4) << endl;

    return 0;
}

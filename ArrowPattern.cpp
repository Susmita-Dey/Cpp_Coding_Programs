/* Printing Arrow Pattern Using Stars */

#include <iostream>
using namespace std;

int main()
{
    int n, i, n1, n2, spaces, j;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    n1 = (n + 1) / 2;
    n2 = n / 2;

    // first part
    while (i <= n1)
    {
        spaces = 1;
        // spaces
        while (spaces <= i - 1)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        j = 1;
        // increasing sequence
        while (j <= i)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    // second part
    i = n2;
    while (i >= 1)
    {
        spaces = 1;
        // spaces
        while (spaces <= i - 1)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        j = 1;
        // decreasing sequence
        while (j <= i)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << "\n";
        i = i - 1;
    }
    return 0;
}

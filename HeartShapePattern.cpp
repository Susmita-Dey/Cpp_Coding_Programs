/* Printing Coloured Heart Shape In C++ */

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n = 6, row, col;
    system("cls");
    system("Color 0C"); // 0 for black background colour and C for light red color to the text of the terminal
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n + 1; col++)
        {
            if ((row == 0 && col % 3 != 0) || (row == 1 && col % 3 == 0) || (row - col == 2) || (row + col == 8))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

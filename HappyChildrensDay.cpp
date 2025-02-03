#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
    int n = 0, i;
    string text = "Happy Children's Day";
    system("cls");
    system("Color 0D");
    Sleep(2000);

    cout << "\n\n\t\tHello EveryOne(::)\n\nWelcome to My Channel!\t\tLet's Start Coding!!!\n\n\t\t";
    for (i = 0; i < text.length(); i++)
    {
        n > 9 ? n = 0 : n++;
        if (n == 0)
        {
            SetConsoleTextAttribute(colors, 1);
        }
        else
        {
            SetConsoleTextAttribute(colors, n);
        }
        // std::string::at can be used to extract characters by characters from a given string.
        cout << text.at(i);
        Sleep(100);
    }
    Sleep(3000);
    system("Color E4");
    cout << "\n\n\t\tThank You\n\n";
    return 0;
}

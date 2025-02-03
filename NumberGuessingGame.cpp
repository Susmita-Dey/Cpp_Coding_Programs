/* Problem:- Given an integer N. A number guessing game is a simple guessing game where a user is supposed to guess a number between 0 and N in a maximum of 10 attempts. The game will end after 10 attempts and if the player failed to guess the number, and then he loses the game. */

#include <bits\stdc++.h>
using namespace std;

int generateRandomNumbers(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside "stdlib.h".
    //It is used in generating random numbers
    return rand() % n;
}

int main()
{
    int n = 100;
    // cin >> n; //In case of taking input from user
    int compGuess, userGuess, flag;
    system("cls"); //clear the terminal

    system("Color 0D"); //change text color in the terminal
    cout << "----------------- Welcome to Number Guessing Game -----------------" << endl;
    cout << ":::::: Instructions ::::::" << endl;
    cout << "You have only 10 attempts.\nIf your guess matches with the computer, then you'll win otherwise you'll lose after 10 attempts." << endl;
    cout << "Enter your numbers less than 100 after the attempt number is dispalyed.\n\n";

    for (int i = 1; i <= 10; i++)
    {
        flag = 0;
        cout << "Attempt Number: " << i << endl;
        compGuess = generateRandomNumbers(n) + 1;
        cin >> userGuess;
        cout << "Computer entered " << compGuess << endl;
        cout << "You guessed " << userGuess << endl;
        if (compGuess == userGuess)
        {
            cout << "\n\nYou Win!" << endl;
            flag = 1;
            break;
        }
        else if (userGuess > compGuess)
        {
            cout << "\nLower number please!" << endl;
        }
        else
        {
            cout << "\nGreater number please!" << endl;
        }
    }

    if (flag == 0)
    {
        system("Color 0A"); //change text color in the terminal
        cout << "\n\nYou Lose! Better, Try Again!" << endl;
    }

    return 0;
}
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<ctime>
using namespace std;

void easyLevel(int secretNumber)
{
    // Ask guessed number
    int guessedNumber = 0;
    cout <<"\n\t Enter guessed number: ";
    cin >> guessedNumber;
    while (guessedNumber < 1 || guessedNumber > 100)
    {
        cout <<"\n\t You crossed the limit. Try again!";
        cout <<"\n\t Enter valid guessed number: ";
        cin >> guessedNumber;
    }
    // Check status
    int attempts = 10;
    while (guessedNumber != secretNumber)
    {
        attempts--;
        if (attempts == 0 )
        {
            cout <<"\n\n\t Press any key to continue...";
            _getch();
            system("cls"); 
            cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t          Oops! You've lose the game.      ";
            cout <<"\n\t\t\t\t\t\t          The correct number is " << secretNumber << ".";
            cout <<"\n\t\t\t\t\t\t          Try again to win.      \n";
            break;
        }           
        if (guessedNumber > secretNumber)
        {
            cout <<"\t Guessed Number is too high.";
            cout <<"\n\t You've " << attempts << " choices to left.";
            cout <<"\n\n\t Enter guessed number: ";
            cin >> guessedNumber;
        }
        else if (guessedNumber < secretNumber)
        {
            cout <<"\t Guessed Number is too low.";
            cout <<"\n\t You've " << attempts << " choices to left.";
            cout <<"\n\n\t Enter guessed number: ";
            cin >> guessedNumber;
        }
        if (attempts == 0 || guessedNumber != secretNumber)
        {
            cout <<"\n\n\t Press any key to continue...";
            _getch();
            system("cls"); 
            cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t          Oops! You've lose the game.      ";
            cout <<"\n\t\t\t\t\t\t          The correct number is " << secretNumber << ".";
            cout <<"\n\t\t\t\t\t\t          Try again to win.      \n";
            break;
        }
    }     
    if(secretNumber == guessedNumber)
    {
        cout <<"\n\n\t Press any key to continue...";
        _getch();
        system("cls");
        cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t         Congratulations! You've won the game.      \n";
    }     
}
void MediumLevel(int secretNumber)
{
    // Ask guessed number
    int guessedNumber = 0;
    cout <<"\n\t Enter guessed number: ";
    cin >> guessedNumber;
    while (guessedNumber < 1 || guessedNumber > 100)
    {
        cout <<"\n\t You crossed the limit. Try again!";
        cout <<"\n\t Enter valid guessed number: ";
        cin >> guessedNumber;
    }
    // Check status
    int attempts = 7;
    while (guessedNumber != secretNumber)
    {
        attempts--;
        if (attempts == 0 )
        {
            cout <<"\n\n\t Press any key to continue...";
            _getch();
            system("cls"); 
            cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t          Oops! You've lose the game.      ";
            cout <<"\n\t\t\t\t\t\t          The correct number is " << secretNumber << ".";
            cout <<"\n\t\t\t\t\t\t          Try again to win.      \n";
            break;
        }           
        if (guessedNumber > secretNumber)
        {
            cout <<"\t Guessed Number is too high.";
            cout <<"\n\t You've " << attempts << " choices to left.";
            cout <<"\n\n\t Enter guessed number: ";
            cin >> guessedNumber;
        }
        else if (guessedNumber < secretNumber)
        {
            cout <<"\t Guessed Number is too low.";
            cout <<"\n\t You've " << attempts << " choices to left.";
            cout <<"\n\n\t Enter guessed number: ";
            cin >> guessedNumber;
        }
    }     
    if(secretNumber == guessedNumber)
    {
        cout <<"\n\n\t Press any key to continue...";
        _getch();
        system("cls");
        cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t         Congratulations! You've won the game.      \n";
    }     
}
void HardLevel(int secretNumber)
{
    // Ask guessed number
    int guessedNumber = 0;
    cout <<"\n\t Enter guessed number: ";
    cin >> guessedNumber;
    while (guessedNumber < 1 || guessedNumber > 100)
    {
        cout <<"\n\t You crossed the limit. Try again!";
        cout <<"\n\t Enter valid guessed number: ";
        cin >> guessedNumber;
    }
    // Check status
    int attempts = 5;
    while (guessedNumber != secretNumber)
    {
        attempts--;
        if (attempts == 0 )
        {
            cout <<"\n\n\t Press any key to continue...";
            _getch();
            system("cls"); 
            cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t          Oops! You've lose the game.      ";
            cout <<"\n\t\t\t\t\t\t          The correct number is " << secretNumber << ".";
            cout <<"\n\t\t\t\t\t\t          Try again to win.      \n";
            break;
        }        
        if (guessedNumber > secretNumber)
        {
            cout <<"\t Guessed Number is too high.";
            cout <<"\n\t You've " << attempts << " choices to left.";
            cout <<"\n\n\t Enter guessed number: ";
            cin >> guessedNumber;
        }
        else if (guessedNumber < secretNumber)
        {
            cout <<"\t Guessed Number is too low.";
            cout <<"\n\t You've " << attempts << " choices to left.";
            cout <<"\n\n\t Enter guessed number: ";
            cin >> guessedNumber;
        }
    }     
    if(secretNumber == guessedNumber)
    {
        cout <<"\n\n\t Press any key to continue...";
        _getch();
        system("cls");
        cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t         Congratulations! You've won the game.      \n";
    }     
}
int main()
{
    system("cls");
    system("Color F4");
    cout <<"*****************************************************************************************************************************************************************\n";
    cout <<"\n\t\t\t\t\t\t         **********************************     \n";
    cout <<"\n\t\t\t\t\t\t          Welcome to Guess the Number game      \n";
    cout <<"\n\t\t\t\t\t\t         **********************************    \n\n";    
    cout <<"\n\t Instructions:- ";
    cout <<"\n\t In this game, the computer generates a secret number in the range of 1 to 100, and you have to guess it. The game has three difficulty levels."; 
    cout <<"\n\t Yours chances of guessing is limited by the level you choose. The easy level gives you 10 chances to guess the secret number, the medium level";
    cout <<"\n\t gives 7 chances, whereas the difficult level only offers 5 chances.\n";
    cout <<"\n\t Press any key to continue...";
    _getch();
    system("cls");
    cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t          OKAY, Let's get started!      \n";
    cout <<"\n\t Press any key to continue...";
    _getch();
    system("cls");
    int choice = 0;
    while (choice <= 0)
    {
        cout <<"\n\n\t 1) Easy level";
        cout <<"\n\t 2) Medium level";
        cout <<"\n\t 3) Hard level";
        cout <<"\n\t 4) Exit game";
        cout <<"\n\t Select difficulty level: ";
        cin >> choice;
        while (choice > 4 || choice <= 0)
        {
            cout <<"\t You entered wrong! Please try again!";
            cout <<"\n\t Select difficulty level: ";
            cin >> choice;
        }
        srand(time(0));
        int secretNumber = 1 + rand() % 100;
        switch (choice)
        {
            case 1:
            {
                cout <<"\n\t You have 10 choices to guess the number between 1 - 100.\n";
                easyLevel(secretNumber);
                break;
            }
            case 2:
            {
                cout <<"\n\t You have 7 choices to guess the number between 1 - 100.\n";
                MediumLevel(secretNumber);
                break;
            }
            case 3:
            {
                cout <<"\n\t You have 5 choices to guess the number between 1 - 100.\n";
                HardLevel(secretNumber);
                break;
            }   
            case 4:
            {

            }                     
            default:
                break;
        }
    }
    cout <<"\n\n\t Press any key to exit...";
    _getch();
    return 0;
}
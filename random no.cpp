#include <iostream>
#include <cstdlib> // Used for random num generator
#include <ctime> // Used for the seed

using namespace std;

int main()
{
    srand(static_cast<unsigned int> (time(0)));
    const int MAX_NUMBER = 100;
    int num = (rand() % MAX_NUMBER) + 1;
    int tries = 0;   // Number of times player has guessed
    int guess;       // Player's current guess

    cout << "\tGuess my Number" << endl << endl;
    cout << "Guess my number between 1 and ";
    cout << MAX_NUMBER << "." << endl << endl;

    do
    {
        cout << "Enter a guess; ";
        cin >> guess;
        ++tries;

        int diff = (num - guess);

        if (diff >= 50)  // If guess is off by 50 or more
        {
            if (guess < num)
                cout << "Way to Low!\n";
            else
                cout << "Way to high!" << endl;
        }

        if (diff >= 30 && diff < 50) // If guess is off by 30 to 50
        {
            if (guess < num)
                cout << "That guess was rather low!\n";
            else
                cout << "That guess was rather high!" << endl;
        }

        if (diff >= 15 && diff < 30) // If guess is off by 15 to 30
        {
            if (guess < num)
                cout << "That guess was low!\n";
            else
                cout << "That guess was high!" << endl;
        }

        if (diff > 0 && diff < 15) // If the guess is off under 15
        {
            if (guess < num)
                cout << "That guess was some what low.\n";
            else
                cout << "That guess was some what high." << endl;
        }
    } while ((guess != num) && (tries <= 5));

    if (guess == num)
    {
        cout << endl;
        cout << "You win! You got it in " << tries << " tries!";
        cout << endl;
    }
    else {
        cout << endl;
        cout << "You ran out of guesses!" << endl;
    }

    system("pause"); // Used to hold open the output window.
    return 0;
}

//number guessing game
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int num,guess,tries=0;
    srand(time(NULL));

    num = 1 + (rand() % 100);

    cout << "**************NUMBER GUESSING GAME**********************" << endl;
    do
    {
        cout << "Enter number between (1-100):";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too High" << endl;
        }
        else if (guess < num)
        {
            cout << "Too Low" << endl;
        }
        else
        {
            cout << "Correct ! # no. of tries: " << tries << endl;
        }

    } while (guess != num);

    cout << "********************************************************" << endl;
}
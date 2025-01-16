//

// number guessing game

#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    int num;
    int guess;
    int tries=0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

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
            cout << "Correct ! # no. of tries: " << tries << '\n';
        }

    } while (guess != num);

    cout << "********************************************************" << endl;
}
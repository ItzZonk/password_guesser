#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0));  
    int secretNumber = rand() % 10 + 1;  
    int guess;

    cout << "Guess number from 1 to 10 ";

    while (true) 
    {
        cin >> guess;

        if (guess == secretNumber) 
        {
            cout << "Correct!" << endl;
            break;
        } 
        else 
        {
            cout << "Wrong number, do it again: ";
        }
    }

    return 0;
}

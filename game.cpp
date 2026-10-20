
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int user, computer;
    srand(time(0));
    cout << "===== ROCK PAPER SCISSORS =====\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> user;
    if (user < 1 || user > 3) {
        cout << "Invalid choice!";
        return 0;
    }
    computer = rand() % 3 + 1;
    cout << "Computer choice: ";
    if (computer == 1)
        cout << "Rock\n";
    else if (computer == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";
    if (user == computer)
        cout << "Match Draw!";
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
        cout << "You Win!";
    else
        cout << "Computer Wins!";
    return 0;
}

#include<iostream>
using namespace std;
//features: tells if guess is greater or higher than target. counts number of tries. uses do-while loops.
int main(){
    int inp, x, tries = 0;
    srand(time(NULL));
    x = (rand() % 100) + 1;//getting a random number
    //all this time I was wondering how to do this. it was this easy.
    do {
        cout << "GUESS THE NUMBER!";
        cout << "\nThis program has picked a random number between 1-100.\nGuess it! :\n";
        do {
            cin >> inp;
            tries++;
            if (inp > x) {
                cout << "Too high! Try again.\n";
            } else if (inp < x) {
                cout << "Too low! Try again.\n";
            } else {
                cout << "\nCongratulations! That's the one.";
                cout << "\n\nIt took you " << tries << " tries to guess it.";
                cout << "\n\nYou have better things to do. \nStop wasting your time, there's so little you have left.";
                cout << "\nGet off your chair and go be productive.";
            }
        } while (inp != x);
        return 0;
    }while()
}
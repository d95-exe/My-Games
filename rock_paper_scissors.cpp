#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;

int user_score = 0;
int computer_score = 0;
char user_choice;
char computer_choice;

void set_user_choice(){
    do {
        cout << "\n\nEnter:\n'r' for rock\n'p' for paper\n's' for scissors\nEnter your choice:";
        cin >> user_choice;
        switch (user_choice) {
            case 'r':
                cout << "ROCK";
                break;
            case 'p':
                cout << "PAPER";
                break;
            case 's':
                cout << "SCISSORS";
                break;
            case 'e':
                cout<<"\nThanks for playing!";
                cout<<"\n******** ROCK PAPER SCISSORS ********\n************** VS A.I. **************";
                exit(EXIT_SUCCESS);
            case 'x':
                cout << "\nSCORE:\n"<<"AI:  "<<computer_score<<", You:  "<<user_score;
                break;
            default: cout<<"\nInput is invalid.";
        }
    }while(user_choice != 'r' && user_choice != 'p' && user_choice != 's');
}
void set_computer_choice(){
    srand(time(0));
    int num = rand() % 3+1;
    cout<<"\nThe A.I. chose:";
    switch(num){
        case 1:
            cout<<"\nROCK";
            computer_choice = 'r';
            break;
        case 2:
            cout<<"\nPAPER";
            computer_choice = 'p';
            break;
        case 3:
            cout<<"\nSCISSORS";
            computer_choice = 's';
            break;}
}
void referee(){
    if(user_choice == computer_choice){
        cout<<"\nIt's a tie.";
    }
    if(user_choice == 'r' && computer_choice == 'p'){
        computer_score++;
        cout<<"\nA.I. wins.";
    }
    if(user_choice == 'r' && computer_choice == 's'){
        user_score++;
        cout<<"\nYou win!";
    }
    if(user_choice == 'p' && computer_choice == 's'){
        computer_score++;
        cout<<"\nA.I. wins.";
    }
    if(user_choice == 'p' && computer_choice == 'r'){
        user_score++;
        cout<<"\nYou win!";
    }
    if(user_choice == 's' && computer_choice == 'r'){
        computer_score++;
        cout<<"\nA.I. wins.";
    }
    if(user_choice == 's' && computer_choice == 'p'){
        user_score++;
        cout<<"\nYou win!";
    }
}

int main() {
    cout<<"\n******** ROCK PAPER SCISSORS ********\n************** VS A.I. **************";
    cout<<"\nNOTE: Ensure Caps Lock OFF before playing.";
    cout<<"\nEnter 'e' to exit, enter 'x' to check the score.";
    do {
        set_user_choice();
        set_computer_choice();
        Sleep(1000);
        referee();
        Sleep(2000);
    }while(user_choice != 'e');
    return 0;
}

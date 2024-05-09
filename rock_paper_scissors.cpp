#include<iostream>
#include<windows.h>
#include<limits>
using namespace std;

int user_choice = 0;
int computer_choice;
int user_score = 0;
int computer_score = 0;

void scorer(){
    cout<<"\n\nYOU: "<<user_score<<", AI: "<<computer_score;
}

void intro(){
    cout<<"\n******** ROCK PAPER SCISSORS ********\n************** VS A.I. **************";
    cout<<"\nEnter '5' to exit, enter '4' to check the score.";
    cout << "\n\nEnter your contender's number:\n'1' for rock\n'2' for paper\n'3' for scissors";
}

void get_input(){
    while (true) {
        cout << "\n\nEnter your choice (1, 2, 3, 4, or 5):";
        cin >> user_choice;
        if (user_choice >= 1 && user_choice <= 5) {
            break;
        } else {
            cout << "Invalid input.\n";
            cin.clear(); // Clear the input stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    switch(user_choice){
        case 1:
            cout<<"You chose:\nROCK!";
            break;
        case 2:
            cout<<"You chose:\nPAPER";
            break;
        case 3:
            cout<<"You chose:\nSCISSORS";
            break;
        case 4:
            scorer();
        default:
            break;
    }
}

void set_computer_choice(){
    srand(time(0));
    int num = rand() % 3+1;
    cout<<"\nThe A.I. chose:";
    switch(num){
        case 1:
            cout<<"\nROCK";
            computer_choice = 1;
            break;
        case 2:
            cout<<"\nPAPER";
            computer_choice = 2;
            break;
        case 3:
            cout<<"\nSCISSORS";
            computer_choice = 3;
            break;}
}

void referee(){
    if(user_choice == computer_choice){
        cout<<"\nIt's a tie.";
    }else if((user_choice == 1 && computer_choice == 2) ||
             (user_choice == 2 && computer_choice == 3) ||
             (user_choice == 3 && computer_choice == 1)){
        cout<<"\nA.I. wins.";
        computer_score++;
    }else {
        cout<<"\nYou win!";
        user_score++;
    }
}

int main() {
    intro();
    while (true) {
        get_input();
        if(user_choice == 5) {
            break;
        }else if (user_choice != 4){
            set_computer_choice();
            Sleep(1500);
            referee();
            Sleep(2000);
        }
    }
    cout<<"\nThanks for playing!";
    cout<<"\n******** ROCK PAPER SCISSORS ********\n************** VS A.I. **************";
    return 0;
}
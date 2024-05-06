#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;

int user_score = 0;
int computer_score = 0;
int user_choice;
int computer_choice;
void set_user_choice(){
    cout << "\n\nEnter your contender's number:\n'1' for rock\n'2' for paper\n'3' for scissors\nEnter your choice:";
    cin >> user_choice;
    switch (user_choice) {
        case 1:
            cout << "ROCK";
            break;
        case 2:
            cout << "PAPER";
            break;
        case 3:
            cout << "SCISSORS";
            break;
        case 4:
            cout << "\nSCORE:\n"<<"AI:  "<<computer_score<<", You:  "<<user_score;
            Sleep(500);
            break;
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
    }
    if(user_choice == 1 && computer_choice == 2){
        computer_score++;
        cout<<"\nA.I. wins.";
    }
    if(user_choice == 1 && computer_choice == 3){
        user_score++;
        cout<<"\nYou win!";
    }
    if(user_choice == 2 && computer_choice == 3){
        computer_score++;
        cout<<"\nA.I. wins.";
    }
    if(user_choice == 2 && computer_choice == 1){
        user_score++;
        cout<<"\nYou win!";
    }
    if(user_choice == 3 && computer_choice == 1){
        computer_score++;
        cout<<"\nA.I. wins.";
    }
    if(user_choice == 3 && computer_choice == 2){
        user_score++;
        cout<<"\nYou win!";
    }
}
int main() {
    cout<<"\n******** ROCK PAPER SCISSORS ********\n************** VS A.I. **************";
    cout<<"\nNOTE: Ensure Caps Lock OFF before playing.";
    cout<<"\nEnter '5' to exit, enter '4' to check the score.";
    while(true){
        set_user_choice();
        if(user_choice == 5) {
            break;
        } else if (user_choice != 4) {
            set_computer_choice();
            Sleep(1000);
            referee();
            Sleep(2000);
        }
    }
    cout<<"\nThanks for playing!";
    cout<<"\n******** ROCK PAPER SCISSORS ********\n************** VS A.I. **************";
    return 0;
}
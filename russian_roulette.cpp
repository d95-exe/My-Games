#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int the_chamber, retry;
    char input;
    srand(time(NULL));
    do{
        int tries = 0;
        cout<<"\n**************RUSSIAN ROULETTE**************";
        cout<<"\n\nNo reward, stupid high risk.\nGod knows why you want to play it, but here you go.";
        the_chamber = (rand() % 6) + 1;
        int sequence[]={1,2,3,4,5,6};
        cout<<"\n\nClick any key and enter to shoot.\nThe key you press makes no difference, so just go ahead.\n>>>";
        cin>>input;
        for(int i=0; sequence[i]; i++) {
            if (sequence[i] != the_chamber) {
                cout<<"BANG!\n";
                Sleep(2000);
                cout << "*the gun smoke clears*";
                Sleep(2000);
                cout<<"\nYou got lucky. Wanna try again?\n>>>";
                cin >> input;
                tries++;
            } else {
                cout<<"BANG!";
                Sleep(3000);
                cout << "\n*the gun smoke clears*";
                Sleep(2000);
                cout<<"\nYour lifeless body falls to the floor, from which a pool of blood spreads.";
                cout << "\nYou died.";
                Sleep(1000);
                cout << "\n\nPlayer stats:\nRounds survived: " << tries<<"\n";
                break;
            }
        }
        if(tries == 5){
            cout<<"\n******BONUS******\nHIGHEST POSSIBLE SCORE ACHIEVED\nYou are one extra-lucky individual.\nCapitalise on it.\nGo start gambling or something.\nMaybe mess around with the stock market.";
        }
        cout<<"\n\nEnter 0 to quit, 1 to play again.\n";
        cin>>retry;
    }while(retry == 1);
    if(retry == 0){
        cout<<"\n**************RUSSIAN ROULETTE**************\n";
    }
}
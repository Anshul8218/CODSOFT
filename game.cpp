#include<iostream>
using namespace std;

int main(){
    int answer = 5;

    int guess=-1;
    int health = 0;
    int chance = 8;

    while(answer != guess && health < chance){
        cout<<"Enter your guess value:";
        cin>>guess;

        if(guess < answer){
            cout << "Too low" << endl;
        }
        else if(guess > answer){
            cout << "Too high" << endl;
        }
        else if(guess == answer){
            cout << "Congratulations, you are correct!" << endl;
            break; // Exit the loop if the guess is correct
        }

        health++;
    }

    if(health >= chance){
        cout << "Game over" << endl;
    }

    return 0;
}
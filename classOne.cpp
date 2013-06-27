//  main.cpp
//  Monster Game
//  Created by Allison Burtch on 6/21/13.
//  Copyright (c) 2013 Allison Burtch. All rights reserved.


#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    std::cout << "What's your name?";
    string name;
    cin >> name;
    int health;
    int monster;
    int random;
    
    health = 100;
    monster = 100;
    
    int answer;
    //while and break
    
    
    while (true) {
    
        cout << "A Monster is attacking you, " << name << ". You have three defenses. \nDo you...\n1: Run? \n2: Fight? \n3: Go nuts? \n" << endl;
        cin >> answer;
    
    if (answer == 1 ) {
        health = health -10;
        monster = monster +10;
        cout << "you have fewer points" << endl;
    }
    
    if (answer == 2) {
        health = health + 20;
        monster = monster - 20;
        cout << "good job" << endl;
    }
    
    if (answer == 3) {
        random = rand() % 100;
        health = health + random;
        monster = monster - random;
    }
        
    if (health <= 0) {
        cout << "You lose. Sorry bro. Better luck next time." << endl;
        break;
    }
            
    if (monster <= 0) {
        cout << "You win! The monster died! Yay!" << endl;
        break;
    }
    
        cout << "The monster has " <<monster <<" points." << endl;
        cout << "You have " << health <<" points." << endl;
        cout << endl;
        cout << endl;

    }
    cout << endl;
    cout << endl;
    cout << "Thanks for playing "<< name <<". Great job!" << endl;
    cout << endl;
    

}

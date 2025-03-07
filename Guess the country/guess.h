//
//  guess.h
//  Guess de country
//
//  Created by Phelippe D Ambrosio on 6/3/2025.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Game {
public:
    
    string country;
    string capital;
    string continent;
    
    Game(string cou, string cap, string cont);
    void showMenu();
    int menuChoice();
    void learn(Game c[], int n);
    void guess(Game c[], int n);
    
};



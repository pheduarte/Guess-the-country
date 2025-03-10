//
//  guess.h
//  Guess de country
//
//  Created by Phelippe D Ambrosio on 6/3/2025.
//

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
public:
    
    string country;
    string capital;
    string continent;
    
    Game(string cou, string cap, string cont);
    int showMenu();
    void learn(Game c[], int n);
    int guess(Game c[]);
    bool playAgain();
    
};



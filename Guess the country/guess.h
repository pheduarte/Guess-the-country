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
protected:
    string player;
    int score;
    
public:
    string country;
    string capital;
    string continent;
    
    Game();
    Game(string cou, string cap, string cont);
    int showMenu();
    void learn(Game c[], int n);
    void guess(Game c[], int n);
    int randNum();
    bool playAgain();
};

class Player : public Game {
public:
    Player(string name, int score);
    string getPlayer();
    int getScore();
    void getPoints();
};

string playerName();

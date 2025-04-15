//
//  guess.cpp
//  Guess de country
//
//  Created by Phelippe D Ambrosio on 6/3/2025.
//

#import "guess.h"

//constructor to set the object
Game::Game(){};
Game::Game(string a, string b, string c){
    country = a;
    capital = b;
    continent = c;
}

// method to capture user choice and return an interger
int Game::showMenu() {
    int choice;
    
        cout << "Select an option: " << endl;
            cout << "Option 1: Learn capitals" << endl;
            cout << "Option 2: Guess the capital" << endl;
            cout << "Option 3: Exit" << endl;
    
    cin >> choice;
    cin.ignore();
    
    return choice;
}


//start the game to learn the country capitals
void Game::learn(Game c[], int n) {
    string name;
    
    cout << "Type a country name to find out its capital!" << endl;
    
    //check if user input is empty
    do {
            getline(cin, name);
            if (name.empty()) {
                cout << "Input cannot be empty! Please enter a country name: " << endl;
            }
        } while (name.empty()); // Repeat if input is empty

    transform(name.begin(), name.end(), name.begin(), ::tolower);
    
    //loop to iterate through the array
    for (int i=0; i<n; i++){
        if (name == c[i].country){
            cout << "  " << endl;
            cout << "  " << endl;
            cout << "The capital of " << c[i].country << " is " << c[i].capital << endl;
            cout << "______________________________________________ " << endl;
            cout << "  " << endl;
            cout << "  " << endl;
            break;
        }
    }
}
//generates random numbers
int Game::randNum() {
    int n = 0 + (rand() % 49);
    return n;
}


//search random number in the list of countries
void Game::guess(Game c[], int n) { //int n comes from method randNum()
    cout << "What is the capital of " << c[n].country << " ?" << endl;    
}

//method to promp the user to play again
bool Game::playAgain() {
    bool cont = true;
    char yn;
    
    cout << "Do you want to play again? (y/n)" << endl;
    
    cin >> yn;
    cin.ignore();
    
    if (yn == 'y') {
        cont = true;
    } else {
        cont = false;
    }
    
    return cont;
}

Player::Player(string name, int score){
    this->player = player;
    this->score = score;
};

string Player::getPlayer() {
    return player;
}

int Player::getScore() {
    return score;
}

void Player::getPoints() {
    score++;
}

string playerName() {
    string name;
    
        cout << "Please enter your name: " << endl;
        getline(cin, name);
    
        return name;    
}

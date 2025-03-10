//
//  guess.cpp
//  Guess de country
//
//  Created by Phelippe D Ambrosio on 6/3/2025.
//

#import "guess.h"

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
    getline(cin, name);
        
//    for (char &ch : name) {
//            ch = tolower(ch);
//        }
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    
    for (int i=0; i<n; i++){
        if (name == c[i].country){
            cout << "The capital of " << c[i].country << " is " << c[i].capital << endl;
            cout << "______________________________________________ " << endl;
            cout << "  " << endl;
            cout << "  " << endl;
            cout << "  " << endl;
            break;
        }
    }
}

int Game::guess(Game c[]) {
    
    int n = 0 + (rand() % 49);
    
    cout << "What is the capital of " << c[n].country << " ?" << endl;
    return n;
}

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

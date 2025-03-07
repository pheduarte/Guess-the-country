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

void Game::showMenu() {
    cout << "Welcome " << endl;
    
        cout << "Select an option: " << endl;
            cout << "Option 1: Learn capitals" << endl;
            cout << "Option 2: Guess the capital" << endl;
            cout << "Option 3: Exit" << endl;
}

int Game::menuChoice(){
    int choice;
    
    cin >> choice;
    cin.ignore();
    
    return choice;
}

//start the game to learn the country capitals
void Game::learn(Game c[], int n) {
    string name;
    
    cout << "Enter a country: " << endl;
    getline(cin, name);
        
//    for (char &ch : name) {
//            ch = tolower(ch);
//        }
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    
    for (int i=0; i<n; i++){
        if (name == c[i].country){
            cout << "The capital of " << c[i].country << " is " << c[i].capital << endl;
            
            break;
        }
    }
}



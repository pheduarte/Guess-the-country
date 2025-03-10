//
//  main.cpp
//  Guess de country
//
//  Created by Phelippe D Ambrosio on 6/3/2025.
//


#import "guess.h"

int main(int argc, const char * argv[]) {
    int choice = 6;
    bool cont = true;
    int tes;
    srand(time(0));
    
    //creating the objects
        Game argentina("argentina", "buenos aires", "south america");
        Game australia("australia", "canberra", "oceania");
        Game austria("austria", "vienna", "europe");
        Game bangladesh("bangladesh", "dhaka", "asia");
        Game belgium("belgium", "brussels", "europe");
        Game brazil("brazil", "brasilia", "south america");
        Game canada("canada", "ottawa", "north america");
        Game chile("chile", "santiago", "south america");
        Game china("china", "beijing", "asia");
        Game colombia("colombia", "bogota", "south america");
        Game czech_republic("czech republic", "prague", "europe");
        Game denmark("denmark", "copenhagen", "europe");
        Game egypt("egypt", "cairo", "africa");
        Game ethiopia("ethiopia", "addis ababa", "africa");
        Game finland("finland", "helsinki", "europe");
        Game france("france", "paris", "europe");
        Game germany("germany", "berlin", "europe");
        Game greece("greece", "athens", "europe");
        Game hungary("hungary", "budapest", "europe");
        Game india("india", "new delhi", "asia");
        Game indonesia("indonesia", "jakarta", "asia");
        Game italy("italy", "rome", "europe");
        Game japan("japan", "tokyo", "asia");
        Game kenya("kenya", "nairobi", "africa");
        Game malaysia("malaysia", "kuala lumpur", "asia");
        Game mexico("mexico", "mexico city", "north america");
        Game netherlands("netherlands", "amsterdam", "europe");
        Game new_zealand("new zealand", "wellington", "oceania");
        Game nigeria("nigeria", "abuja", "africa");
        Game norway("norway", "oslo", "europe");
        Game pakistan("pakistan", "islamabad", "asia");
        Game peru("peru", "lima", "south america");
        Game philippines("philippines", "manila", "asia");
        Game poland("poland", "warsaw", "europe");
        Game portugal("portugal", "lisbon", "europe");
        Game romania("romania", "bucharest", "europe");
        Game russia("russia", "moscow", "europe/asia");
        Game saudi_arabia("saudi arabia", "riyadh", "asia");
        Game singapore("singapore", "singapore", "asia");
        Game south_africa("south africa", "pretoria", "africa");
        Game south_korea("south korea", "seoul", "asia");
        Game spain("spain", "madrid", "europe");
        Game sweden("sweden", "stockholm", "europe");
        Game switzerland("switzerland", "bern", "europe");
        Game thailand("thailand", "bangkok", "asia");
        Game turkey("turkey", "ankara", "europe/asia");
        Game ukraine("ukraine", "kyiv", "europe");
        Game united_kingdom("united kingdom", "london", "europe");
        Game united_states("united states", "washington, d.c.", "north america");
        Game vietnam("vietnam", "hanoi", "asia");
    
        Game ghost(" ", " ", " "); // object created to initialise methods of Game
    
    
    //stores countries in a object array
    Game countries[50] = {
        argentina, australia, austria, bangladesh, belgium, brazil, canada, chile, china, colombia,
        czech_republic, denmark, egypt, ethiopia, finland, france, germany, greece, hungary, india,
        indonesia, italy, japan, kenya, malaysia, mexico, netherlands, new_zealand, nigeria, norway,
        pakistan, peru, philippines, poland, portugal, romania, russia, saudi_arabia, singapore, south_africa,
        south_korea, spain, sweden, switzerland, thailand, turkey, ukraine, united_kingdom, united_states, vietnam
        };
    
    //welcome message to user
    cout << "Welcome " << endl;
    
    
    while (choice != 3) {
        choice = ghost.showMenu();
        
        
        switch (choice) {
            case 1:
                cont = true;
                while (cont == true) {
                    
                    ghost.learn(countries, 50);
                    
                    cont = ghost.playAgain();
                }
                break;
                
            case 2:
                cont = true;
                while (cont == true) {
                   
                    tes = ghost.guess(countries);
                    string name;
                                        
                    getline(cin, name);
                        
                    transform(name.begin(), name.end(), name.begin(), ::tolower);
                    
                    if (name == countries[tes].capital) {
                        cout << "Correct!" << endl;
                    } else {
                        cout << "Oops! The correct answer is: " << countries[tes].capital << endl;
                    }
                    
                    cont = ghost.playAgain();
                }
                break;
            
            case 3:
                break;
                
            default: //when user enter an invalid number it circles back to menu with a message
                cout << "Select a valid option!" << endl;
                cout << " " << endl;
                choice = ghost.showMenu();
                break;
        }
    }
    
    return 0;
}

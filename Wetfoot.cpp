// Wetfoot.cpp
// last edited by Hazel on 04/05/2021
//
//
// Tanner suxx
//

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    string inventory;
    char r1m1[50];
    char r1m2[50];
    char r1m3[50];

    cout << setw(20) << "WetFoot" << endl;
    cout << setw(25) << "by Tanner and Hazel" << endl;
    cout << setw(35) << "please type only in lowercase.\n\n";

    cout << setw(20) << "Beginning." << endl;
    cout << "You wake up in a small cobblestone room with no door. There is a bed and a bookshelf.\n";

    cin.getline(r1m1, 50);
    if (strcmp(r1m1, "look") == 0 || strcmp(r1m1, "look around") == 0 || strcmp(r1m1, "look at room") == 0) {
        cout << "This looks like an old dungeon bedroom, lit only by a single torch above the bookshelf. There are no windows, no doors, and it smells musky.\n";
    }
    else if (strcmp(r1m1, "bed") == 0 || strcmp(r1m1, "look at bed") == 0 || strcmp(r1m1, "approach bed") == 0 || strcmp(r1m1, "go towards bed") == 0 || strcmp(r1m1, "walk toward bed") == 0 || strcmp(r1m1, "approach bed") == 0) {
        cout << "The bed is neatly made. There is a note on the pillow.\n";
        cin.getline(r1m2, 50);
    }
    else {
        do {
            cout << "This program does not recognize that statement. Remember to type your answers in lowercase and check for typos.\n";
            cout << "You wake up in a small cobblestone room with no door. There is a bed and a bookshelf.";
            cin.getline(r1m1, 50);
        } while (strcmp(r1m1, "look") > 0 || strcmp(r1m1, "look around") > 0 || strcmp(r1m1, "look at room") > 0);
    }

    if (strcmp(r1m2, "read note") == 0 || strcmp(r1m2, "note") == 0) {
        cout << "Welcome to Wetfoot! This is a five room text adventure game with high stakes. We’re talking life or death. Hazel and Tanner made this.\n";
        cin.getline(r1m3, 20);
    }
    else if (strcmp(r1m2, "take note") == 0 || strcmp(r1m2, "grab note") == 0 || strcmp(r1m2, "put note in inventory") == 0) {
        cout << "Note taken.\n";
        inventory = "note";
        cin.getline(r1m3, 20);
    }
    else if (strcmp(r1m2, "sleep") == 0 || strcmp(r1m2, "go to sleep") == 0 || strcmp(r1m2, "lay down") == 0 || strcmp(r1m2, "rest head") == 0) {
        cout << "You *just* woke up!\n";
    }
    else {
        do {
            cout << "This program does not recognize that statement. Remember to type your answers in lowercase and check for any typos.\n";
            cout << "The bed is neatly made. There is a note on the pillow.\n";
            cin.getline(r1m2, 50);
        } while (strcmp(r1m2, "read note") > 0 || strcmp(r1m2, "note") > 0 || strcmp(r1m2, "lay down") > 0 || strcmp(r1m2, "take note") > 0 || strcmp(r1m2, "grab note") > 0 || strcmp(r1m2, "put note in inventory") > 0);
    }















    return 0;
}

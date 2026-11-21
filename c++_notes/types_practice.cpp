#include <iostream>
using namespace std;

int main() {
    string name = "Aarin";
    int age = 13;
    double height = 5.8;
    char favoriteLetter = 'A';
    bool likesCoding = true;

    cout << name << endl;
    cout << age << endl;
    cout << height << endl;
    cout << favoriteLetter << endl;
    cout << boolalpha << likesCoding << endl;
    
    int lives = 3;
    string player = "Aarin";

    lives = 3;

    cout << player << " has " << lives << " lives" << endl;
    double temp_f = 98.6;
    double temp_c = (temp_f - 32) * 5 / 9;

    cout << "Fahrenheit: " << temp_f << endl;
    cout << "Celsius: " << temp_c << endl;

    return 0;

}




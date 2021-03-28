#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    double APPLES = 2.0;
    double ORANGES = 1.0;
    int BRANDY = 60;
    int ORANGE_JUICE = 120;
    int WINE = 750;

    string favorite_wine;
    int servings;


    cout << "Enter your favorite type of red wine (Ex: Cabernet Sauvignon): \n";
    getline(cin, favorite_wine);

    std::cout << "How many servings of sangria do you need? " << std::endl;
    cin >> servings;
    cin.ignore();

    std::cout << "Sangria recipe using " << favorite_wine << " for " << servings << " servings:" << std::endl;

    APPLES = (APPLES / 6) * servings;
    ORANGES = (ORANGES / 6) * servings;
    BRANDY = (BRANDY / 6) * servings;
    ORANGE_JUICE = (ORANGE_JUICE / 6) * servings;
    WINE = (WINE / 6) * servings;

    cout << setprecision(2) << fixed;

    cout << left << setw(15) << "Wine (ml): " << right << setw(7) << WINE << endl;
    cout << left << setw(15) << "OJ (ml): " << right << setw(7) << ORANGE_JUICE << endl;
    cout << left << setw(15) << "Brandy (ml): " << right << setw(7) << BRANDY << endl;
    cout << left << setw(15) << "Orange (cups): " << right << setw(7) << ORANGES << endl;
    cout << left << setw(15) << "Apples (cups): " << right << setw(7) << APPLES << endl;

    cout << endl << "Press Enter key to end this program";
    cin.get();

}
<<<<<<< HEAD
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

string imie, nazwisko;
int nr_tel;


int main() {
    cout << "Zmiana hihi";
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj nr telefonu: ";
    cin >> nr_tel;
    cout << "Wprowadzona osoba: " << imie << "   " << nazwisko<< "   " << nr_tel;
    fstream plik;
    plik.open("wizyt owka.txt", ios::out | ios::app);
    plik << imie << endl << nazwisko << endl << nr_tel;
    plik.close();
};
=======
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

string imie, nazwisko;
int nr_tel;


int main() {
    cout << "Zmiana hihi";
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj nr telefonu: ";
    cin >> nr_tel;
    cout << "Wprowadzona osoba: " << imie << "   " << nazwisko<< "   " << nr_tel;
    fstream plik;
    plik.open("wizyt owka.txt", ios::out | ios::app);
    plik << imie << endl << nazwisko << endl << nr_tel;
    plik.close();
};
>>>>>>> 342e29f62938948d45ca9a655c475f6db9ca1e41

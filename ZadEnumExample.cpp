/** 1.0
  * \author: Bartosz Krawczyk
  * \date 17/05/2024
  * \brief Typy danych w C++
  */

/*
Napisac krotki program oparty na pliku LTypeEnumerated.cc, zawierajacy przyklad uzycia typu enum 
(scoped lub unscoped, z miesiacami) - nazwac program: ZadEnumExample.cc
*/

#include <iostream>
using namespace std;

// Definicja enum dla miesiecy, zaczynajac od stycznia jako 1
enum miesiace {
    styczen = 1,
    luty,
    marzec,
    kwiecien,
    maj,
    czerwiec,
    lipiec,
    sierpien,
    wrzesien,
    pazdziernik = 69, //  Przykladowe przypisanie innej wartosci dla pazdziernika
    listopad,
    grudzien
};

//----------------------------------------------------------------------------------------------
/*! Scoped enumerations (also known as strongly-typed enums) were introduced in C++11.
 * The enumerators are declared within the scope of the enumeration itself.
 * You need to qualify the enumerator names with the enumeration name.
 */
// Definicja scoped enum dla typów danych.
enum class ScopedTypes {
    Int,
    Double,
    String
};

// Definicja unscoped enum dla typów danych.
enum UnscopedTypes {
    Int,
    Double,
    String
};
//----------------------------------------------------------------------------------------------

int main() {
    // Przykladowe uzycie enum dla miesiecy
    miesiace moj_miesiac_urodzenia = sierpien;

    // Sprawdzanie i wyswietlanie przyslow zwiazanych z miesiacami
    if (moj_miesiac_urodzenia == sierpien) { 
        cout << "Kiedy styczen mokry trzyma, zwykle bywa dluga zima             " << styczen << endl;
        cout << "Idzie luty podkuj buty                                         " << luty  << endl;
        cout << "W marcu jak w garncu                                           " << marzec << endl;
        cout << "Kwiecien plecien bo przeplata troche zimy troche lata          " << kwiecien << endl;
        cout << "Jak w maju plucha, to w czerwcu posucha                        " << maj << endl;
        cout << "W czerwcu sie okaze co nam bog da w darze                      " << czerwiec << endl;
        cout << "W lipcu upaly, styczen bedzie mrozny caly                      " << lipiec << endl;
        cout << "Poczatki sierpnia pogodne wroza zimy lagodne                   " << sierpien << endl;
        cout << "Jaki pierwszy wrzesien, taka bedzie jesien                     " << wrzesien << endl;
        cout << "Gdy pazdziernik cieplo trzyma, zwykle mrozna bywa zima         " << pazdziernik << endl;
        cout << "Slonce listopada mrozy zapowiada                               " << listopad << endl;
        cout << "Jesli w grudniu czesto dmucha, w marcu, kwietniu bedzie plucha " << grudzien << endl;
    }

    //----------------------------------------------------------------------------------------------
    // Przykłady użycia scoped i unscoped enum.
    /* ScopedTypes a = ScopedTypes::Double; // Poprawnie
     * // ScopedTypes b = Double; // Błąd: Wymaga kwalifikacji nazwą typu enum
     * UnscopedTypes c = UnscopedTypes::Double;
     * UnscopedTypes d = Double; */

    // Wyświetlanie wartości enum unscoped.
    cout << UnscopedTypes::Int << endl;
    cout << UnscopedTypes::Double << endl;
    cout << UnscopedTypes::String << endl;
    cout << Int << endl;
    cout << Double << endl;
    cout << String << endl;

    //----------------------------------------------------------------------------------------------

    return 0;                              
}

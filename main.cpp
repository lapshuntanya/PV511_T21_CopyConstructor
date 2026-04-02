#include "Medicine.h"

int main() {
    Medicine a("Analgin", "Pills", 55);
    a.showInfo();

    cout << "-----------------------------\n";
    //Конструктор копіювання
    // b = this (куди),    a = obj (звідки)
    Medicine b = a; //"Analgin", "Pills", 55
    b.setTitle("Analgin Forte");


    a.showInfo();//"Analgin", "Pills", 55
    b.showInfo();//"Analgin Forte", "Pills", 55

    return 0;
}
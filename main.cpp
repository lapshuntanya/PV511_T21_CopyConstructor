#include "Pharmacy.h"

int main() {
   /* Medicine a("Analgin", "Pills", 55);
    a.showInfo();

    cout << "-----------------------------\n";
    //Конструктор копіювання
    // b = this (куди),    a = obj (звідки)
    Medicine b = a; //"Analgin", "Pills", 55
    b.setTitle("Analgin Forte");


    a.showInfo();//"Analgin", "Pills", 55
    b.showInfo();//"Analgin Forte", "Pills", 55
    cout << "-----------------------------\n";

    Medicine c; //"Undefined", "Undefined", 0
    //...
    c = a; //Оператор присвоювання

    c.setTitle("Nurofen");
    c.showInfo();*/


    Pharmacy pharm("911");

    Medicine a("Analgin", "Pills", 55);
    pharm.addMedicine(a);
    pharm.addMedicine(Medicine("Nurofen", "Pills", 120));
    pharm.addMedicine(Medicine("Dr MOM", "Syrop", 90));


    pharm.sortByPrice(); //+ show

    return 0;
}
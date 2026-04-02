//
// Created by Tetiana Perederii on 02.04.2026.
//

#include "Pharmacy.h"

Pharmacy::Pharmacy(const char *name) {
    int len_name = strlen(name) + 1;
    this->name = new char[len_name];
    strcpy(this->name, name); // Clion
    //strcpy_s(this->name, len_name, name); // VS

    sizeMed = 0;
    arrMed = nullptr;
}

Pharmacy::~Pharmacy() {
    delete[] name;

    if (arrMed != nullptr) {
        delete[] arrMed;
        arrMed = nullptr;
    }
}

void Pharmacy::addMedicine(Medicine obj) {
    addItemBack(arrMed, sizeMed, obj);
}

void Pharmacy::showPharm() const {
    cout << "Pharmacy: " << name << endl;
    cout << "Medicine: " << sizeMed << endl;
    for (int i = 0; i < sizeMed; i++) {
        cout << i+1 << ". " << arrMed[i].getTitle() << endl;
        //arrMed[i].showInfo();
    }
}

void Pharmacy::sortByPrice() {
    mySort<Medicine>(arrMed, sizeMed, [](Medicine a, Medicine b) {
        return b.getPrice() > a.getPrice();
    });

    showPharm();
}

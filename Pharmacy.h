//
// Created by Tetiana Perederii on 02.04.2026.
//

#ifndef PV511_T21_COPYCONSTRUCTOR_PHARMACY_H
#define PV511_T21_COPYCONSTRUCTOR_PHARMACY_H
#include "Array_Template.h"
#include "Medicine.h"

class Pharmacy {
    char* name; //set, get
    int sizeMed; //get
    Medicine* arrMed;

public:
    Pharmacy(const char* name);
    ~Pharmacy();

    //setters+getters

    void addMedicine(Medicine obj);//edit array
    void showPharm()const;
    void sortByPrice();
};


#endif //PV511_T21_COPYCONSTRUCTOR_PHARMACY_H
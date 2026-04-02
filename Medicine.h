//
// Created by Tetiana Perederii on 02.04.2026.
//

#ifndef PV511_T21_COPYCONSTRUCTOR_MEDICINE_H
#define PV511_T21_COPYCONSTRUCTOR_MEDICINE_H

#include <iostream>
#include <cstring>
using namespace std;

class Medicine {
private:
    char* title;
    char* type;
    float price;

public:
    Medicine();
    Medicine(const char* title, const char* type, float price);
    Medicine(const Medicine& obj); //obj - звідки копіюємо
    Medicine& operator = (const Medicine& obj);
    ~Medicine();

    const char* getTitle()const;
    const char* getType()const;
    float getPrice()const;

    void setTitle(const char* title);
    void setType(const char* type);
    void setPrice(float price);

    void showInfo()const;
};


#endif //PV511_T21_COPYCONSTRUCTOR_MEDICINE_H
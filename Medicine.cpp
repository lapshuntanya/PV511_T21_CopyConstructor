//
// Created by Tetiana Perederii on 02.04.2026.
//

#include "Medicine.h"

Medicine::Medicine() {
    title = new char[10]{"Undefined"};
    type = new char[10]{"Undefined"};
    price = 0;
}

//user => title="Aspiryn", user_type = "pills", price = 45
//this->title = властивість класу
//title = зовнішній параметр
Medicine::Medicine(const char * title, const char * user_type, float price) {

    int len_title = strlen(title) + 1;
    this->title = new char[len_title];
    strcpy(this->title, title); //Clion
   // strcpy_s(this->title, len_title, title); // VS

    int len_type = strlen(user_type)  + 1;
    type = new char[len_type];
    strcpy(type, user_type); //CLion
    //strcpy_s(type, len_type, user_type); //VS

    this->price = price;
}

Medicine::Medicine(const Medicine &obj) {
    //Конструктор копіювання
    // b = this (куди),    a = obj (звідки)
    //main: Medicine b = a; //"Analgin", "Pills", 55

    int len_title = strlen(obj.title) + 1;
    this->title = new char[len_title];
    strcpy(this->title,obj.title ); //Clion
    //strcpy_s(this->title,len_title, obj.title ); //VS

    int len_type = strlen(obj.type) + 1;
    this->type = new char[len_type];
    strcpy(this->type, obj.type ); //Clion
    //strcpy_s(this->type,len_type, obj.type ); //VS

    this->price = obj.price;
}

Medicine::~Medicine() {
    delete[] title; title = nullptr;
    delete[] type; type = nullptr;
    price = 0;
}

const char * Medicine::getTitle() const {
    return title;
}

const char * Medicine::getType() const {
    return type;
}

float Medicine::getPrice() const {
    return price;
}

void Medicine::setTitle(const char *title) {
    if (strlen(title) >= 2) {
        delete[] this->title;

        int len_title = strlen(title) + 1;
        this->title = new char[len_title];
        strcpy(this->title, title); //CLion
        //strcpy_s(this->title, len_title, title); //VS
    }
}

void Medicine::setType(const char *type) {
    if (strlen(type) >= 2) {
        delete[] this->type;

        int len_type = strlen(type) + 1;
        this->type = new char[len_type];
        strcpy(this->type, type); //CLion
        //strcpy_s(this->type, len_type, type); //VS
    }
}

void Medicine::setPrice(float price) {
    if (price > 0) {
        this->price = price;
    }
}

void Medicine::showInfo() const {
    cout << "Title: " << title << endl;
    cout << "Type: " << type << endl;
    cout << "Price: " << price << endl << endl;
}

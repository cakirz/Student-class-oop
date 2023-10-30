#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
//Gerekli kütüphaneler eklendi.
#pragma once

using namespace std;// Kodlarýn baþýna tek tek std:: yazmamak için bu kod kullanýldý.

class Student {
private:
    string name;
    string surname;
    int age;
    //Veri üyeleri tanýmlandý.
public:
    Student( string n, string s, int a);    //Sýnýfýn constructor fonksiyonu tanýmlandý.

    string getName() ;  //Ýsimler için setter getter fonksiyonlarý tanýmlandý.
    void setName(string n);

    string getSurname() ;   //Soyisimler için setter getter fonksiyonlarý tanýmlandý.
    void setSurname(string s);

    int getAge() ;  //Yaþlar için setter getter fonksiyonlarý tanýmlandý.
    void setAge( int a);
    
    void printInfo();   //Bilgileri ekrana basan fonksiyon tanýmlandý.
};

#endif


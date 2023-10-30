#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
//Gerekli k�t�phaneler eklendi.
#pragma once

using namespace std;// Kodlar�n ba��na tek tek std:: yazmamak i�in bu kod kullan�ld�.

class Student {
private:
    string name;
    string surname;
    int age;
    //Veri �yeleri tan�mland�.
public:
    Student( string n, string s, int a);    //S�n�f�n constructor fonksiyonu tan�mland�.

    string getName() ;  //�simler i�in setter getter fonksiyonlar� tan�mland�.
    void setName(string n);

    string getSurname() ;   //Soyisimler i�in setter getter fonksiyonlar� tan�mland�.
    void setSurname(string s);

    int getAge() ;  //Ya�lar i�in setter getter fonksiyonlar� tan�mland�.
    void setAge( int a);
    
    void printInfo();   //Bilgileri ekrana basan fonksiyon tan�mland�.
};

#endif


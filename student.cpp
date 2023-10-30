#include "student.h"//Sýnýf eklendi.

#include <string>
#include <iostream>

//Kütüphaneler eklendi.

using namespace std;

Student::Student(string n, string s, int a) : name(n), surname(s), age(a) //Gerekli kurallarýn saðlanýp saðlanmadýðýný kontrol eden constructor fonksiyon yazýldý.
{
    if (a < 6 or a > 25) {
        cerr << "GECERSIZ YAS ! SADECE 6 - 25 YAS ARASI KABUL EDILMEKTEDIR.)" << endl;
        exit(1); 
    }
    else
        cout << "Ogrenci olusturuldu." << endl;
}

void Student::printInfo() { //Bilgileri ekrana basan fonksiyon yazýldý.
    cout << "\nAd: " << name << "\nSoyad: " << surname << "\nYas: " << age << endl << endl;
}

string Student::getName() {
    return name;
}
void Student::setName(string n) {
    name = n;
}

//Ýsimler için setter getter fonksiyonlarý yazýldý.

string Student::getSurname() {
    return surname;
}
void Student::setSurname(string s) {
    surname = s;
}

//Soyisimler için setter getter fonksiyonlarý yazýldý.

int Student::getAge() {
    return age;
}
void Student::setAge(int a) {
    age = a;
}
//Yaþlar için setter getter fonksiyonlarý yazýldý.


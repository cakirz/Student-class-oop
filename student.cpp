#include "student.h"//S�n�f eklendi.

#include <string>
#include <iostream>

//K�t�phaneler eklendi.

using namespace std;

Student::Student(string n, string s, int a) : name(n), surname(s), age(a) //Gerekli kurallar�n sa�lan�p sa�lanmad���n� kontrol eden constructor fonksiyon yaz�ld�.
{
    if (a < 6 or a > 25) {
        cerr << "GECERSIZ YAS ! SADECE 6 - 25 YAS ARASI KABUL EDILMEKTEDIR.)" << endl;
        exit(1); 
    }
    else
        cout << "Ogrenci olusturuldu." << endl;
}

void Student::printInfo() { //Bilgileri ekrana basan fonksiyon yaz�ld�.
    cout << "\nAd: " << name << "\nSoyad: " << surname << "\nYas: " << age << endl << endl;
}

string Student::getName() {
    return name;
}
void Student::setName(string n) {
    name = n;
}

//�simler i�in setter getter fonksiyonlar� yaz�ld�.

string Student::getSurname() {
    return surname;
}
void Student::setSurname(string s) {
    surname = s;
}

//Soyisimler i�in setter getter fonksiyonlar� yaz�ld�.

int Student::getAge() {
    return age;
}
void Student::setAge(int a) {
    age = a;
}
//Ya�lar i�in setter getter fonksiyonlar� yaz�ld�.


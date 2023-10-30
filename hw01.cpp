#include <iostream>
#include <string>
//K�t�phaneler eklendi.
#include "student.h" // S�n�f eklendi.
int main() {
    
    Student ogrenci1("Ismail", "Enver", 20);
    Student ogrenci2("Ahmet", "Cemal", 18);
    Student ogrenci3("Mehmed", "Talat", 23);
    // 3 ��renci olu�turuldu.
    
    ogrenci1.printInfo();
    ogrenci2.printInfo(); 
    ogrenci3.printInfo(); 
    // ��renci bilgileri ekrana bas�ld�.

    std::cout << "-----------" << endl; //G�rsel olarak eski ve g�ncel verilerin ayr�lmas� i�in �izgi �ekildi.

    ogrenci1.setName("Ali");
    ogrenci2.setAge(19); 
    ogrenci3.setSurname("Pasa"); 
    // ��renci bilgileri g�ncellendi.
    
    ogrenci1.printInfo(); 
    ogrenci2.printInfo(); 
    ogrenci3.printInfo(); 
    // Tekrar ekrana bas�ld�.
    return 0;
}

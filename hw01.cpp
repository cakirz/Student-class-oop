#include <iostream>
#include <string>
//Kütüphaneler eklendi.
#include "student.h" // Sýnýf eklendi.
int main() {
    
    Student ogrenci1("Ismail", "Enver", 20);
    Student ogrenci2("Ahmet", "Cemal", 18);
    Student ogrenci3("Mehmed", "Talat", 23);
    // 3 öðrenci oluþturuldu.
    
    ogrenci1.printInfo();
    ogrenci2.printInfo(); 
    ogrenci3.printInfo(); 
    // Öðrenci bilgileri ekrana basýldý.

    std::cout << "-----------" << endl; //Görsel olarak eski ve güncel verilerin ayrýlmasý için çizgi çekildi.

    ogrenci1.setName("Ali");
    ogrenci2.setAge(19); 
    ogrenci3.setSurname("Pasa"); 
    // Öðrenci bilgileri güncellendi.
    
    ogrenci1.printInfo(); 
    ogrenci2.printInfo(); 
    ogrenci3.printInfo(); 
    // Tekrar ekrana basýldý.
    return 0;
}

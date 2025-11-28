#include "Ctverec.h"
#include <iostream>

Ctverec::Ctverec() : strana(1.0f) {}
Ctverec::Ctverec(float s) : strana(s) {}


// obvod štvorca (4 * strana)
float Ctverec::obvod() {
    return 4.0f * strana;
}

// Vypočíta obsah štvorca (strana * strana).

float Ctverec::obsah() {
    return strana * strana;
}

std::string Ctverec::jmeno() {
    return "Ctverec";
}


void Ctverec::setStrana(float s) {
    if (s >= 0) {
        strana = s;
    } else {
        std::cerr << "Chyba: Dĺžka strany nemôže byť záporná." << std::endl;
        strana = 0.0f;
    }
}

float Ctverec::getStrana() const {
    return strana;
}
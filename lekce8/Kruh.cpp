#include "Kruh.h"
#include <iostream>
#include <cmath>

Kruh::Kruh() : radius(1.0f) {}

Kruh::Kruh(float r) : radius(r) {}


//obvod kruhu (2 * PI * r).
 
float Kruh::obvod() {
    return 2.0f * (float)M_PI * radius;
}

// obsah kruhu (PI * r^2).

float Kruh::obsah() {
    return (float)M_PI * radius * radius;
}

std::string Kruh::jmeno() {
    return "Kruh";
}


void Kruh::setRadius(float r) {
    if (r >= 0) {
        radius = r;
    } else {
        std::cerr << "Chyba: Polomer nemôže byť záporný." << std::endl;
        radius = 0.0f; 
    }
}

float Kruh::getRadius() const {
    return radius;
}

void Kruh::printRadius() const {
    std::cout << "Radius kruhu je: " << radius << std::endl;
}
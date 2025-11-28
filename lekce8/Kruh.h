#ifndef KRUH_H
#define KRUH_H

#include "Tvar.h" 
#include <string>

class Kruh : public Tvar { 
private:
    float radius;

public:
    Kruh();
    Kruh(float r);
    
    virtual ~Kruh() {} 

    float obvod() override;
    float obsah() override;
    std::string jmeno() override;

    void setRadius(float r);
    float getRadius() const;
    void printRadius() const;
};

#endif // KRUH_H
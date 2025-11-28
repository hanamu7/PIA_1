#ifndef CTVEREC_H
#define CTVEREC_H

#include "Tvar.h" 
#include <string>

class Ctverec : public Tvar { 
private:
    float strana;

public:
    Ctverec();
    Ctverec(float s);
    
    virtual ~Ctverec() {}

    float obvod() override;
    float obsah() override;
    std::string jmeno() override;

    void setStrana(float s);
    float getStrana() const;
};

#endif // CTVEREC_H
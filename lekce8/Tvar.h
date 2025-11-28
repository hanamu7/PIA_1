#ifndef TVAR_H
#define TVAR_H

#include <string>

class Tvar {
public:
  Tvar() {};
  virtual ~Tvar() {}; 
  
  virtual float obvod() = 0;
  virtual float obsah() = 0;
  virtual std::string jmeno() = 0;
};

#endif // TVAR_H
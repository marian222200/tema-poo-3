#include "Masina_inexistenta.h"
Masina_inexistenta::Masina_inexistenta(const char*what_arg)throw(){
    this->what_arg=what_arg;
}
const char* Masina_inexistenta::what()const throw(){
    return this->what_arg;
}
Masina_inexistenta::~Masina_inexistenta()throw(){
}

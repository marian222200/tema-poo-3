#include<exception>
#pragma once
using namespace std;
class Masina_inexistenta : public exception {
const char* what_arg;
public:
    Masina_inexistenta(const char*)throw();
    ~Masina_inexistenta()throw();
    const char* what()const throw();
};

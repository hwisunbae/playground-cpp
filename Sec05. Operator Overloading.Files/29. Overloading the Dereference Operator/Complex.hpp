//  Complex.hpp

#ifndef Complex_hpp
#define Complex_hpp
#include <iostream>
using namespace std;

class Complex{
    
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double, double);
    Complex(const Complex& c);
    double getReal() const;
    double getImaginary() const;
    Complex& operator=(const Complex& c);
    friend ostream& operator<<(ostream& ostr, const Complex& c);
    bool operator==(const Complex& obj);
    bool operator!=(const Complex& obj);
    Complex operator*() const;
};

Complex operator+(const Complex& obj1, const Complex& obj2);
Complex operator+(const Complex& obj1, double d);
Complex operator+(double d, const Complex& obj1);

#endif /* Complex_hpp */

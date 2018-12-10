//  Complex.hpp

#ifndef Complex_hpp
#define Complex_hpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double , double);
    Complex(const Complex& obj); // copy constructor
    const Complex& operator=(const Complex& obj);//assignment operator
    friend ostream& operator<<(ostream& ostr, const Complex& obj);//binary operator
    double getReal() const { return real;}
    double getImaginary() const { return imaginary;}
    
};
//ostream& operator<<(ostream& ostr, const Complex& obj);

#endif /* Complex_hpp */

//  Complex.cpp

#include "Complex.hpp"

ostream& operator<<(ostream& ostr, const Complex& obj){
    ostr << "(" << obj.getReal() << " : " << obj.getImaginary() << ")" ;
    return ostr;
    }
Complex::Complex():real(0.0), imaginary(0.0){
    
}
Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){
    
}
Complex::Complex(const Complex& obj){            // copy constructor
    cout << "copy " << endl;
    *this = obj;
}
const Complex& Complex::operator=(const Complex& obj){
                                        //assignment operator
    cout << "assignment " << endl;
    real = obj.real;
    imaginary = obj.imaginary;
    return *this;
    
}

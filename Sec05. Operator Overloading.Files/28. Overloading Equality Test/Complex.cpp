//  Complex.cpp

#include "Complex.hpp"

Complex::Complex():real(0), imaginary(0){

}
Complex::Complex(double r, double i):real(r), imaginary(i){
    
}
Complex::Complex(const Complex& c){
    real = c.real;
    imaginary = c.imaginary;
}
Complex& Complex::operator=(const Complex& c){
    real = c.real;
    imaginary = c.imaginary;
    return *this;
}
ostream& operator<<(ostream& ostr, const Complex& c){
    ostr << c.real << " : " << c.imaginary << endl;
    return ostr;
}
Complex operator+(const Complex& obj1, const Complex& obj2){
    return Complex((obj1.getReal() + obj2.getReal()), (obj1.getImaginary()+ obj2.getImaginary()) );
}
Complex operator+(const Complex& obj1, double d){
    return Complex(obj1.getReal()+d , obj1.getImaginary());
}
Complex operator+(double d, const Complex& obj1){
    return Complex(obj1.getReal()+d , obj1.getImaginary());
}
double Complex::getReal() const{
    return this->real;
}
double Complex::getImaginary() const{
    return this->imaginary;
}
bool Complex::operator==(const Complex& obj){
    return (real == obj.real) && (imaginary == obj.imaginary);
}
bool Complex::operator!=(const Complex& obj){
//    return (real != obj.real) || (imaginary != obj.imaginary);
    return !(*this == obj);
}

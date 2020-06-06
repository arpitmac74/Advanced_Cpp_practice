#include "complex.h"


namespace oshi{
    ostream &operator<<(ostream &out, const complex &c){
        out<<"("<<c.getreal()<<","<<c.getimaginary()<<")";
        return out;
    }
    complex::complex(): real(0), imaginary(0){
    }

    complex::complex(double real, double imaginary) : real(real) ,imaginary(imaginary){
    }

    complex::complex(const complex &other){
        cout<<"copy"<<endl;
        real = other.real;
        imaginary =other.imaginary;
    }
    const complex &complex::operator=(const complex &other){
        real = other.real;
        imaginary =other.imaginary;
        return *this;
    }
}
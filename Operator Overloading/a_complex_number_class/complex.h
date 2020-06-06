#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
using namespace std;

namespace oshi {
    class complex{
    private:
        double real;
        double imaginary;

    public:
        complex();
        complex(double real, double imaginary);
        complex(const complex &other);
        const complex &operator=(const complex &other);
        double getreal() const { return real;}
        double getimaginary() const {return imaginary;}

    };
ostream &operator<<(ostream &out, const complex &c);

}

#endif
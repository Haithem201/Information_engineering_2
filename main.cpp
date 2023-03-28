#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

class Complex {
private:
    float _real;
    float _img;

public:
    Complex(float real = 0, float img = 0) : _real(real), _img(img) {}

    void print() {
        if (_real != 0) {
            std::cout << _real;
            if (_img != 0) {
                if (_img > 0) {
                    std::cout << "+";
                }
                std::cout << _img << "i" << std::endl;
            }
        }
    }

    Complex add(Complex c1) {
        Complex c3;
        c3._real = _real + c1._real;
        c3._img = _img + c1._img;
        return c3;
    }

    void set_real(float real = 0) {
        _real = real;
    }

    float get_real() {
        return _real;
    }

    void set_img(float img = 0) {
        _img = img;
    }

    float get_img() {
        return _img;
    }
};

int main() {
    Complex a(1.0, -2.0); // creates 1-2i
    Complex b(3.14); // creates 3.14
    b.set_img(-5);
    Complex c = a.add(b);
    c.print(); // prints 4.14-7i
    return 0;
}

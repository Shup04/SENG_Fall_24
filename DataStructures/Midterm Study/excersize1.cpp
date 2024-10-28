#include <iostream>

class Complex {
    public:
        int real, imag;

        Complex (int real, int imag) {
            this->real = real;
            this->imag = imag;
        };

        Complex () {
            this->real = 0;
            this-> imag = 0;
        }

        Complex operator+ (Complex& obj) {
            Complex result;
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
        };

        Complex operator- (Complex& obj) {
            Complex result;
            result.real = real - obj.real;
            result.imag = imag - obj.imag;
            return result;
        }

        Complex operator* (Complex& obj) {
            Complex result;
            result.real = (real*obj.real - imag*obj.imag);
            result.imag = (real*obj.imag + imag*obj.real);
            return result;
        }

        Complex operator/ (Complex& obj) {
            Complex result;
            int denominator = obj.real*obj.real + obj.imag*obj.imag;
            result.real = (real*obj.real + imag*obj.imag) / denominator;
            result.imag = (imag*obj.real - real*obj.imag) / denominator;
            return result;
        }

        void print () {
            std::cout << real << " + " << imag << "i" << std::endl;
        };
};

int main () {
    Complex c1(5, 3), c2(2, 1);
    Complex c3 = c1+c2;
    Complex c4 = c1-c2;

    c3.print();
    c4.print();
}
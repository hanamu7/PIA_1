/*
UKOL 

class Vector

vector a,b;

a + b
a . b
dot(a, b)
cross(a, b)

podle matrix z lekce6
*/


#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

class Vector {
public:
    // Constructor: initialize vector with given size, filled with zeros
    Vector(size_t n) : data(n, 0.0) {}

    // Constructor: initialize vector from std::initializer_list
    Vector(std::initializer_list<double> list) : data(list) {}

    // Access elements with operator()
    double& operator()(size_t i) {
        if (i >= data.size()) throw std::out_of_range("Vector index out of bounds");
        return data[i];
    }

    const double& operator()(size_t i) const {
        if (i >= data.size()) throw std::out_of_range("Vector index out of bounds");
        return data[i];
    }

    // Get size
    size_t size() const { return data.size(); }

    // Vector addition
    Vector operator+(const Vector& other) const {
        if (data.size() != other.size()) throw std::invalid_argument("Vectors must have same size for addition");
        Vector result(data.size());
        for (size_t i = 0; i < data.size(); ++i) {
            result(i) = data[i] + other(i);
        }
        return result;
    }

    // Dot product using operator*
    double operator*(const Vector& other) const {
        if (data.size() != other.size()) throw std::invalid_argument("Vectors must have same size for dot product");
        double sum = 0.0;
        for (size_t i = 0; i < data.size(); ++i) {
            sum += data[i] * other(i);
        }
        return sum;
    }

    // Dot product as function
    double dot(const Vector& other) const {
        return (*this) * other;
    }

    // Cross product (only for 3D vectors)
    Vector cross(const Vector& other) const {
        if (data.size() != 3 || other.size() != 3) throw std::invalid_argument("Cross product only defined for 3D vectors");
        return Vector{
            data[1]*other(2) - data[2]*other(1),
            data[2]*other(0) - data[0]*other(2),
            data[0]*other(1) - data[1]*other(0)
        };
    }

    // Print vector
    void print() const {
        for (double val : data) std::cout << val << " ";
        std::cout << std::endl;
    }

private:
    std::vector<double> data;
};

// Example usage
int main() {
    try {
        Vector a{1, 2, 3};
        Vector b{4, 5, 6};

        std::cout << "Vector a: "; a.print();
        std::cout << "Vector b: "; b.print();

        // Addition
        Vector c = a + b;
        std::cout << "a + b: "; c.print();

        // Dot product
        double d = a * b;
        std::cout << "a . b: " << d << std::endl;

        // Dot using method
        double e = a.dot(b);
        std::cout << "dot(a, b): " << e << std::endl;

        // Cross product
        Vector f = a.cross(b);
        std::cout << "cross(a, b): "; f.print();

    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}


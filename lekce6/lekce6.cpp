
#include<iostream>

class Kruh
{
    private:

    float radius;
    const float PI = 3.14159;

    public:
    Kruh() : radius(1.0f) {}          
    Kruh(float r) : radius(r) {} 

    void setRadius(float r)
    {
        radius = r;
    }   
    float getRadius() const
    {
        return radius;
    }
    float spocitejPlochu() const
    {
        return PI * radius * radius;
    }
    float spocitejObvod() const
    {
        return 2 * PI * radius;
    }
    void printRadius() const
    {
        std::cout << "Radius kruhu je: " << radius << std::endl;
    }
};

int main()
{
    float prvniRadius = 2;
    Kruh prvniKruh;
    prvniKruh.setRadius( prvniRadius );
    prvniKruh.printRadius();
    

    float druhyRadius = 4;
    Kruh druhyKruh( druhyRadius);
    std::cout << "Plocha kruhu: " << prvniKruh.spocitejPlochu() << std::endl;
    std::cout << "Obvod kruhu: " << prvniKruh.spocitejObvod() << std::endl;

    std::cout << "\n";

    druhyKruh.printRadius();
    std::cout << "Plocha druheho kruhu: " << druhyKruh.spocitejPlochu() << std::endl;
    std::cout << "Obvod druheho kruhu: " << druhyKruh.spocitejObvod() << std::endl;

    return 0;
}

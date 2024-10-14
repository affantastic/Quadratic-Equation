#include <iostream>
#include <cmath>
using namespace std;

class Quad
{
    private:
    int a,b,c;

    public:
    Quad (int a, int b, int c)
    {
        this-> a = a;
        this-> b = b;
        this-> c = c;
    }

    Quad ()
    {
        a = 0;
        b = 0;
        c = 0;
    }

//getters//
    int getA (int a)
    {
        return a;      
    }

    int getB (int b)
    {
        return b;
    }

    int getC (int c)
    {
        return c;
    }

//setters//
    void setA (int a)
    {
        this-> a = a;
    }

    void setB (int b)
    {
        this-> b = b;
    }

    void setC (int c)
    {
        this-> c = c;
    }

    void calculateQuad()
    {
        double x = b*b - 4*a*c;
        if (x > 0)
        {
            double root1 = -b + sqrt(x) / 2*a;
            double root2 = -b - sqrt(x) / 2*a;
            cout << "Root 1= " << root1 << endl;
            cout << "Root 2= " << root2 << endl;
        }
        else if (x == 0)
        {
            double root = -b / 2*a;
            cout << "Root= " << root <<endl;
        }
        else
        {
            double real = -b / 2*a;
            double imag = sqrt(-x) / 2*a;
            cout << "Root 1= " << real << "+" << imag << "i" << endl;
            cout << "Root 1= " << real << "-" << imag << "i" << endl;  
        }
    }

};
int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    Quad equation(a, b, c);
    equation.calculateQuad();

    return 0;
}
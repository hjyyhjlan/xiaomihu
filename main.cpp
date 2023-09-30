#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double ar;

    cout<< "Enter the floor area, in square feet, of your home: ";
    cin>> ar;
    double si;
    si=sqrt(ar);
    cout<< "That's the equivalent of a square " <<si
        << " feet to the side." <<endl;
    cout<< "How fascinating!" <<endl;

    return 0;

}

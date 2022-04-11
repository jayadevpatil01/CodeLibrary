#include <iostream>
#include <cmath>
using namespace std;

static void roots(double, double, double);

static void roots(double a, double b, double c) {
  double D = b*b - 4*a*c;
  if (D >= 0) {
    double x1 = (-b + sqrt(D))/(2*a);
    double x2 = (-b - sqrt(D))/(2*a);
    cout<<"Roots are: "<<x1<<", "<<x2<<"\n";   
  } else {
    double x1 = -b/(2*a);
    double x2 = sqrt(-D)/(2*a);
    cout<<"Roots are: "<<x1<<"±"<<x2<<"i\n";
  }
}

int main() {
  cout<<"Equation is x*x+5x+4=0\n";
  roots(1,5,4);
  cout<<"\nEquation is x*x+4x+5=0\n";
  roots(1,4,5);
  return 0;
}

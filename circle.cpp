#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;



int main(){
    const double pi = acos(-10);
    double s;
    cin >> s;
    cout <<fixed<<setprecision(7) <<s*s*pi <<endl;

    return 0;
}
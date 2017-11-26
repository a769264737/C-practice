#include <iostream>
#include "student.h"
using namespace std;


int main(){
    student std;
 /*   for(int i = 0; i < 10 ;i++)
        std[i].set();
    for(int i = 0; i < 0 ;i++)
        std[i].print();*/
    std.set();
    std.print();
    return 0;
}
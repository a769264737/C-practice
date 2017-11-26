#include <iostream>
#include <string>
using namespace std;

class student{
public:
    student(){
        string name ("none");
        string number("00000000");
        string subject("none");
        int score = 0;
    }    
    string name,number,subject;
    int score;

    void set();
    void print();
};

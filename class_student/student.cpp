#include "student.h"

void student::set(){
    cout << "please input name,number,name of subject,score:"<<endl;
    cin >> name >> number >> subject >> score;
}


void student::print(){
    cout << "name:" << name << endl;
    cout << "number:"<< number << endl;
    cout << "subjet:"<< subject << endl;
    cout << "score:" << score << endl; 
}
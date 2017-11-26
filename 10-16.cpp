#include <iostream>
#include <string>
using namespace std;

string Num10to16(int a);

int main(){
    int num_10;
    int temp;
    string temp_str;
    cin >> num_10;
    do {
        temp = num_10 % 16;
        temp_str += Num10to16(temp);
        num_10 = num_10 /16;
    }   
    while(num_10!=0);

    
    int len = temp_str.length();
    for(int i = 0;i < len;i++)
            cout << temp_str[len-1-i];
}

string Num10to16(int a){
    switch (a){
        case 0:return "0"; break;
        case 1:return "1"; break;
        case 2:return "2"; break;
        case 3:return "3"; break;
        case 4:return "4"; break;
        case 5:return "5"; break;
        case 6:return "6"; break;
        case 7:return "7"; break;
        case 8:return "8"; break;
        case 9:return "9"; break;
        case 10:return "A"; break;
        case 11:return "B"; break;
        case 12:return "C"; break;
        case 13:return "D"; break;
        case 14:return "E"; break;
        case 15:return "F"; break;
    }
}
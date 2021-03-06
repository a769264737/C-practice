#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string Num16to2(char a);
string Num16to2_0(char a);
int main(){
    string num_16;
    string num_2;
    cin >> num_16;
    num_2 = Num16to2_0(num_16[0]);
    for(int t = 1;t<num_16.length();t++){
        num_2 += Num16to2(num_16[t]);
    }
    int temp = num_2.length();
    long num = 0;
    for(int t = 0 ;t<num_2.length();t++){
        num += (num_2[t]-'0') * pow(2,temp-t-1);
    }

    cout << num << endl;
    
    return 0;
}

string Num16to2(char a){
    switch (a){
        case '0':return "0000"; break;
        case '1':return "0001"; break;
        case '2':return "0010"; break;
        case '3':return "0011"; break;
        case '4':return "0100"; break;
        case '5':return "0101"; break;
        case '6':return "0110"; break;
        case '7':return "0111"; break;
        case '8':return "1000"; break;
        case '9':return "1001"; break;
        case 'A':return "1010"; break;
        case 'B':return "1011"; break;
        case 'C':return "1100"; break;
        case 'D':return "1101"; break;
        case 'E':return "1110"; break;
        case 'F':return "1111"; break; 
    }
}

string Num16to2_0(char a){
    switch (a){
        case '0':return "0000"; break;
        case '1':return "1"; break;
        case '2':return "10"; break;
        case '3':return "11"; break;
        case '4':return "100"; break;
        case '5':return "101"; break;
        case '6':return "110"; break;
        case '7':return "111"; break;
        case '8':return "1000"; break;
        case '9':return "1001"; break;
        case 'A':return "1010"; break;
        case 'B':return "1011"; break;
        case 'C':return "1100"; break;
        case 'D':return "1101"; break;
        case 'E':return "1110"; break;
        case 'F':return "1111"; break; 
    }
}
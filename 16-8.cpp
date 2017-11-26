#include <iostream>
#include <string>

using namespace std;

string Num16To2(char num);
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string num_16;
        string num_2;
        cin >> num_16;
        for(int t = 0;t < num_16.length();t++)
            num_2+=Num16To2(num_16[t]);
        int len = num_2.length();

        if(len%3 == 1)
            num_2="00"+num_2;
        if(len%3 == 2)
            num_2="0"+num_2;
        int flag = 0;
        for(int i = 0;i <= num_2.length()-3;i+=3){
            int num = 4*(num_2[i]-'0') + 2 *(num_2[i+1]-'0') + (num_2[i+2]-'0');
            if(num)
                flag = 1;
            if(flag)
                cout << num;
            
        }
    cout << endl;


    }
    return 0;
}


string Num16To2(char num){
    switch(num){
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

#include <iostream>
using namespace std;

int main(){
    int a[4];
    for(int i = 1001;i>1000 && i<=9999;i++){
        int temp = i;
        for(int t = 0; t < 4 ; t++){

            a[t] = temp % 10;
            temp /= 10;
        }    
        if(a[0] == a[3] && a[1] == a[2])
                cout << i << endl;
    }

    return 0;
}
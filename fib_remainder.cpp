#include <iostream>

using namespace std;

int main(){
    int i=3;
    int a[1000000]={0,1,1};
    int n;
    cin >> n;
    while(i<=n){
        a[i]=(a[i-1]+a[i-2])%10007;
        i++;
    }

    cout << a[n] << endl;    
}
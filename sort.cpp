#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[200];
    for(int i = 0 ; i < n; i++)
        cin >> a[i];

    for(int i = 0 ; i < n ; i++){
        for(int t = 0 ; t <n - i - 1 ; t++){
            if(a[t]>a[t + 1]){
                int temp = a[t];
                    a[t] = a[t+1];
                    a[t+1] = temp;
            }
        }
    }

    for(int i = 0; i < n ;i++)
        cout << a[i] << " ";

    return 0;
}
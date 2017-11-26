#include <iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
    int a[34][34]={0};
    for(int i = 0 ; i < 34; i++){
        a[i][0]=1;
        a[i][i]=1;
    }    
    for(int i = 2 ; i < 34 ; i++){
        for(int t = 1 ; t < i ; t++){
            a[i][t] = a[i-1][t-1] + a[i-1][t];
        }    
    }        
    
    for (int i = 0;i < n;i++){
        for(int t = 0 ; t <= i;t++)
            cout << a[i][t] << " ";
        cout << endl;
    }    
    return 0;
}
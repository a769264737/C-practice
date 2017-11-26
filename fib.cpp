#include <iostream>
using namespace std;

int fib(int n);


int main(){
    int n;
    cin >> n;
    cout << fib(n)<<endl;

    return 0;
}

int fib(int n){
    if(0==n)
        return 0;
    if(1==n)
        return 1;
    if(2==n)
        return 1;
    int f_Old = 1;
    int f_New = 1;
    int fn = 0;
    for(int i = 3;i <= n; i++){
        fn = f_Old + f_New;
        f_Old = f_New;
        f_New = fn;
    }
    return fn;
}
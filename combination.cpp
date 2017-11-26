#include <iostream>
using namespace std;
long long  factorial(long long n);

int main(){
    long long n,m;
    cin >> n >> m ;
    int temp = n;
    for(int i = 0 ; i < n-m ;i++)
        temp *= (temp - 1);
    long long temp2 =factorial(n-m);
    cout <<temp/temp2;
    return 0;
}

long long  factorial(long long  n ){

    if (n==0)
        return 1;
    else 
        return n*factorial(n-1);
}
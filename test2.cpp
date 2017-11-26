#include <iostream>
using namespace std;
int* array(int* a);
int main(){
        int *a,temp;
        cout <<"please input the number of digits you need."<<endl;
        cin >> temp;
	a = new int(temp);
        cout << "please input " << temp <<"number: "<< endl;
        for(int i = 0;i<temp;i++)
                cin >> a[i];
        for(int i =0;i<temp;i++){
                cout << a[i]<<endl;
        }
        delete[]a;

        return 0;
}
int* array(int *a){
        
}




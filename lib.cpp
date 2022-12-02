#include <iostream>
# include "libreria.h"
using namespace std;
int main() {
    int a=0;
    cin >> a ;
    if (numeroprimo(a)){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }


    return 0;
}


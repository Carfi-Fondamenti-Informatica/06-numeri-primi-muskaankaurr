#include "lib.h"
using namespace std;

bool numeroprimo ( int a ){
    bool segnalibro = false;
    int i=2;
    if ( a != 2 ){
        for (;i<a ; i++){
            if (a%i==0){
                break;
            }
        }
    }else{
        segnalibro=true;
    }
   if (i==a){
       segnalibro=true;
   }
return segnalibro;
}



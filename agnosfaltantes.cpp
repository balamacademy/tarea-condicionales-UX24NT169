#include <iostream>
using namespace std;

 int main(){
            int año1,año2;
  
            cin>>año1;
            cin>>año2;
    
            if(año1>=año2){
                          int pasados=año1-año2;
            cout<< "Han pasado "<< pasados <<" años";}
          
           else{
               int faltantes=año2-año1;
               cout<<"Faltan " <<faltantes<< " años";}

          return 0;
}
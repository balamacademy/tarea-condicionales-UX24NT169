#include<iostream>
using namespace std;

int main(){
          int edad;
          cin>> edad;

          if(edad<4){
          cout<<"¡¡Gratis!!";}
          else if (edad<=18){
          cout<<"Paga $5";
            
}
          else{
          cout<<"Paga $10";
}

          return 0;
}
#include <iostream>
using namespace std;

int main(){
         int numero1,numero2,residuo;

         cin>>numero1;
         cin>>numero2;
   
        residuo=numero1 % numero2;

        if (residuo==0){
                       cout<<"La division es exacta\n";}
        else{
            cout<<"La division NO es exacta\n";}

         return 0;
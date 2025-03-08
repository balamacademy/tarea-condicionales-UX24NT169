include <iostream>
using namespace std;

int main(){
          float cantidad,precio,total,mult,iva,preciobruto,descuento;
          cin>>cantidad;
          cin>>precio;
          
          mult=cantidad*precio;
   
          iva=mult*0.15;
          preciobruto=mult+iva; 
 
          if(preciobruto>1000){
                              descuento=preciobruto*0.05;
          total=preciobruto-descuento;
          cout<<"Pagar $"<<total;}
    
          else{
          cout<<"Pagar $"<<preciobruto;}
     
          return 0;
}
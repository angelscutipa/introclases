#include <iostream>

using namespace std;


int main()
{
   int numero=0,i=0;
   int billetes[7];
   int canbilletes[7];
   billetes[0]=200;
   billetes[1]=100;
   billetes[2]=50;
   billetes[3]=20;
   billetes[4]=10;
   billetes[5]=5;
   billetes[6]=2;
   billetes[7]=1;
   cout<<"ingrese la cantidad: "<<endl;
   cin>>numero;
   for (i=0; i<8;i++){
       canbilletes[i]=0;
   }
   for (int i=0; i<8; i++){
        canbilletes[i]=numero/billetes[i];
        if (canbilletes[i]==0)
            continue;
        numero=numero%billetes[i];
   }
   for (int i=0; i<8;i++){
       cout<<"la cantidas de billetes de "<<billetes[i]<<" es "<<canbilletes[i]<<endl;
   }
   return 0;
}

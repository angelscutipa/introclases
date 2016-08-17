#include <iostream>

using namespace std;

int optmod(int num, int mod){
    return num%mod;
}

int operation(int num1, int num2, char ope, int modulo){
    int modnum1=optmod(num1,modulo);
    int modnum2=optmod(num2,modulo);
    if (ope=='+')
        return modnum1+modnum2;
    if (ope=='-'){
        int num=modnum1-modnum2;
        if (num<0)
            num=modulo+num;
        else
            num=num%modulo;
        return num;
    }
    if (ope=='*'){
        return (modnum1*modnum2)%modulo;
    }
}


int main()
{
   int num1=0,num2=0, mod=0;
   char ope;
   
   cout<<"ingrese el primer numero: "<<endl;
   cin>>num1;
   cout<<"ingrese el segundo numero: "<<endl;
   cin>>num2;
   cout<<"ingrese el operador: "<<endl;
   cin>>ope;
   cout<<"ingrese el modulo: "<<endl;
   cin>>mod;
   
   cout<<operation(num1,num2,ope,mod)<<endl;
   
   return 0;
}


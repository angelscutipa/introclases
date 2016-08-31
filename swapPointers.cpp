#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int *c;
    c=a;
    *a=*b;
    *b=*c;
}

int main()
{
    int a=0, b=0;
    cout<<"ingrese a: ";cin>>a;
    cout<<"ingrese b: ";cin>>b;
   cout <<"a es: "<<a << endl; 
   cout <<"b es: "<<b << endl; 
   swap(a,b);
   cout <<"a es: "<<a << endl; 
   cout <<"b es: "<<b << endl;
   
   return 0;
}

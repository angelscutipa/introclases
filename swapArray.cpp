#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int *c;
    c=a;
    *a=*b;
    *b=*c;
}

void swapArray(int *a,int tam){
    for(int i=0;i<tam/2;i++){
        swap(*(a+i),*(a+tam-(i+1)));
    }
}

int main()
{
    int l=6;
    int a[l]={1,2,3,4,5,6};
   int *p;
   p=a;
   for(int i=0;i<l;i++){
       cout<<a[i]<<endl;
   }
    
   swapArray(p,l);
   
   cout<<"aqui esta la segunda parte:"<<endl;
   
   
   for(int i=0;i<l;i++){
       cout<<a[i]<<endl;
   }
   
   return 0;
}

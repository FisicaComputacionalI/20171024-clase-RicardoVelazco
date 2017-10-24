//Te dice si numero es primo
//Ricardo Alfonso Velazco Castillo
//Martes 24 de octubre de 2017
#include <iostream>
using namespace std;
int main ()
{
 long N=12; 
 long Flag=0;
 long divisor=0;
 cout <<"dame un numero entero"<< endl;
 cin>>N;
 for(long i=2; i<=(N/2); i++)
   {
     cout << i << endl;
     if(N%i==0){
       Flag=1;
       divisor=i;
       break;
     }
   }  
 if(Flag==1){
   cout<<"Tu mùmero no es primo "<<endl;
   cout<<"Se divide entre "<<divisor<<endl;}
 else
   cout<<"Tu numero es primo "<<endl;
 return 0;
} 

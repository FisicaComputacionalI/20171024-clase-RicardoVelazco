//Programa que sume los primeros N nùmeros naturales
//Ricardo Alfonso Velazco Castillo
//Martes 24 de octubre de 2017
#include <iostream>
using namespace std;
int main ()
{
  long sum=0;
  long N;
  cout<<"Dame un nùmero natural "<< endl;
  cin>>N;
  for(long i=1; i<=N; i++)
    {sum=sum+i;}
  cout<<"La suma es "<<sum<<endl;
  return 0;
}

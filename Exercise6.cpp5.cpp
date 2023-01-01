#include <iostream>
using namespace std;
bool isPrime(int num)
{  
if(num == 1 || num == 0)
  return false;
for(int i = 2; i < num; i++)
{
  if(num % i == 0)
  return false;
}
return true;
}
int main()
{
int num1;
cout<<"Enter the number:";
cin>>num1;
bool isPrime(int num);
for(int i = 1; i <= num1; i++)
{
  if(isPrime( i))
  {
   cout<<"\n prime numbers:";
   cout <<i << " ";
  }
}
return 0;
}


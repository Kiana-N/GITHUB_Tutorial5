#include <iostream>
using namespace std; 
int main() 
{ int num1,num2,temp; 
cout<<"\n Enter tow numbers:"; 
cin>>num1>>num2; 
while(true) 
   {   if (num2==0)   
     break;
     temp=num1%num2;   
	 num1=num2;   
	 num2=temp; 
   } cout<<"gcd of tow numbers is:"<<num1; 
   
   return 0; 
}

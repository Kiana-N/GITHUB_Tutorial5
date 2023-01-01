#include <iostream>
using namespace std;
int main()
{
    int x,grades,max,min;
	float sum=0.0;
    cout<<" How many students?";
    cin>>x;
    for(int i=0; i<x; i++)
    {
    	cout<<"\n Enter the grades:";
        min=grades;
        cin>>grades;
        if(grades>min)
         max=grades;
       sum+=grades;
     }
      cout<<"\n The max grade:"<<'\t'<<max<<'\t';
      cout<<"\n The min grade:"<<'\t'<<min<<'\t';
      cout<<"\n The average of grades:"<<'\t'<<(double)sum/x<<'\t';
    return 0;
}

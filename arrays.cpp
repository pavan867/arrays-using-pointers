#include <iostream>


using namespace std;

int main()
{
   int arr[5];
   int i,*p;

   cout<<"enter the elements:";



       for(i=0;i<5;i++)
       {
           
           cin>>arr[i];

       }
       cout<<"you entered:";
       p=arr;

       for(i=0;i<5;i++)
       {
           cout<<*p<<" ";
           p++;

       }



    return 0;
}


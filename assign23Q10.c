#include<iostream>
using namespace std;
int main()

{
   int arr[10],i,sum=0;
   cout<<"enter nos:";
   for(i=0;i<10;i++)
        cin>>arr[i];
   for(i=0;i<10;i++)
    sum+=arr[i];
   cout<<"\n sum="<<sum;
   return 0;
}

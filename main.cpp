#include<iostream>
using namespace std;
 int main()
{
int sum=0,Sum1,Sum2;
int size, i, a[10];
int Positive_Count = 0,
 Negative_Count = 0;
 cout<<"\n Please Enter the Size of an Array : ";
 cin>>size;
cout<<"\nPlease Enter the Array Elements\n";
for(i = 0; i < size; i++)
{
cin>>a[i];
}
 for(i = 0; i < size; i ++)
{
 if(a[i] >= 0)
 {
    Sum1=sum + a[i];
  Positive_Count++;
 }
 else
 {
 Negative_Count++;
    Sum2=sum + a[i];
 }
}
cout<<"\n Total Number of Positive Numbers in this Array ="<< Positive_Count<<Sum1;
 cout<<"\n Total Number ofNegative Numbers in this Array = "<<Negative_Count<<Sum2;
return 0;
}

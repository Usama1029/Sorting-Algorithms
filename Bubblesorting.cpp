#include<iostream>
using namespace std;
  
       //function for sorting the array
void bubblesort(int arr[],int size)
{
      for(int i = 0;i<size-1;i++)
{
bool isSwaped = false;
          for(int j = 0;j<size-i-1;j++)
{
          if(arr[j] >arr[j+1])
{
                swap(arr[j],arr[j+1]);
               isSwaped = true;
}
}
if(!isSwaped)
{
break;
}
}
}
     // function for swap the elements of array
void swap(int a,int b)
{
     int temp;
temp = a;
a = b;
b = temp;
}

// main function
main()
{
  int size;
cout<<"enter size of array:"<<endl;
cin >>size;
int arr[size];
for(int i = 0;i<size;i++)
{
cout<<"enter element "<<endl;
cin>>arr[i];
}
            
   bubblesort(arr,size);
for(int i = 0;i<size;i++)
{
cout<<arr[i]<<" "<<endl;
}

  
}
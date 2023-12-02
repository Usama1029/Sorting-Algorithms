#include<iostream>
using namespace std;


       //function for sorting the array
void insertionsort(int arr[],int size)
{
     
               for(int i = 1;i<size;i++)
{
              int key = arr[i];
              int y = i-1;
           while(y>= 0 && arr[y] > key )
{
            arr[y+1] = arr[y];
            y--;
    
}

 arr[y+1] = key;
}
 
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
  insertionsort(arr,size);
  for(int j = 0;j<size;j++)
{
     cout<<arr[j]<<" ";          
  }

  
}
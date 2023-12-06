#include<iostream>
using namespace std;

     // function for merge the arrays
void merge(int arr[],int l,int mid,int r)
{
     int n1 = mid-l+1;
     int n2 = r-mid;
     int a[n1];
     int b[n2];
     for(int i = 0;i<n1;i++)
{
             a[i] = arr[l+i];
}
    for(int i = 0;i< n2;i++)
{
     b[i] = arr[mid+i+1];
}
//cout<<"usama"<<b[0];
int i = 0;
int j = 0;
int k = l;
     while(i < n1 && j< n2)
{
         if(a[i] < b[j])
{
      arr[k] = a[i];
      k++;
      i++;
}
else{
     arr[k] = b[j];
     k++;
     j++;
}
}
     while(i < n1)
{
    arr[k] = a[i];
k++;
i++;
}
         while(j<n2)
{
 arr[k] = b[j];
k++;
j++;
}
}
       //function for sorting the array
void mergesort(int arr[],int l,int r)
{
       if(l < r)
{
       int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

       merge(arr,l,mid,r);
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
  mergesort(arr,0,size-1);
  for(int j = 0;j<size;j++)
{
     cout<<arr[j]<<" ";          
  }

  
}
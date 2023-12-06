#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int parentindex(int i)
{
    return (i-1)/2;
}
int leftindex(int i)
{
    return (i*2)+1;
}
int rightindex(int i)
{
    return (i*2)+2;
}
void heapify(int arr[],int size,int index)
{
    int maxindex;
    while(true)
    {
       int lidx = leftindex(index);
       int ridx = rightindex(index);
       if(ridx >= size)
      if(lidx >= size)
      {
        return;
      }
      else{
        maxindex = index;
      }
      else{
        if(arr[lidx] > arr[ridx])
        {
            maxindex = lidx;
        }
        else{
            maxindex = ridx;
        }
      }
      if(arr[index] < arr[maxindex])
      {
        swap(arr[index],arr[maxindex]);
        index = maxindex;
      }
      else{
        return;
      }
    }

}
void heapsort(int arr[],int size)
{
    for(int i = (size/2)-1;i>=0;i--)
    {
        heapify(arr,size,i);

    }
    for(int j = size-1;j>0;j--)
    {
        swap(arr[0],arr[j]);
        heapify(arr,j,0);
    }
}
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
heapsort(arr,size);
 for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
}
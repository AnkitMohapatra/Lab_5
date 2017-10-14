#include<iostream>
using namespace std;

int inc(int arr[],int size)
{
     for(int i=0 ; i<size ; i++)
        {
         if(arr[i]>arr[i+1])
            arr[i+1]=arr[i];
        }
for(int i=0 ; i<size ; i++)
    cout << arr[i] << endl;
}

float lar(int arr[],int size)
{
       int maximum=0;
       for(int i=0 ; i<size ; i++)
          {
           if(maximum<arr[i])
              maximum=arr[i];
          }
       cout << "\nLargest element in the array is : " << maximum;
}

float sml(int arr[],int size)
{
       int minimum = arr[1];
       for(int i=0 ; i<size ; i++)
          {
           if(minimum>arr[i])
              minimum = arr[i];
          }
       cout << "\nSmallest element in the array is : " << minimum;
}


int mer(int size1,int size2,int arr1[],int arr2[])
{
     int i,j;
     int size = size1 + size2;
     int arr[size];
     for(i=0 ; i<size1 ; i++)
         arr[i]=arr1[i];
     for(j=0 ; j<size2 ; j++)
         arr[size1+j] = arr2[j];
     inc(arr,size);
     lar(arr,size);
     sml(arr,size);
}

int main ()
{
     int size1,size2,i,j;
     cout << "Enter the size of the first array : ";
     cin >> size1;
     int arr1[size1];
     for(int i=0 ; i<size1 ; i++)
        {
         cout << "Enter the element  : ";
         cin >> arr1[i];
        }
     int arr2[size2];
     cout << "Enter the size of the second array : ";
     cin >> size2;
     for(i=0 ; i<size2 ; i++)
        {
         cout << "Enter the element  : ";
         cin >> arr2[i];
        }
     mer(size1,size2,arr1,arr2);
     return 0;
}

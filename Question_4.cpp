#include<iostream>
using namespace std;

void inc(int arr[],int input){
     int c=0;int d=0;
     for(int i=0;i<input;i++){
        for(int j=i+1;j<input;j++){
         if(arr[i]>arr[j]){
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;

            }
}}
for(int i=0;i<input;i++){
    cout<<arr[i]<<endl;
}
}
float lar(int arr[],int input){
int maximum=0;
for(int i=0;i<input;i++){
if(maximum<arr[i]){
    maximum=arr[i];
}}
cout<<"\nLargest element in the array is : "<<maximum;
}

float sml(int arr[],int input){
int minimum=arr[1];
for(int i=0;i<input;i++){
    if(minimum>arr[i]){
    minimum=arr[i];
}}
cout<<"\nSmallest element in the array is : "<<minimum;
}


int mer(int sz1,int sz2,int x[],int y[]){
int i,j;
int sz=sz1+sz2;
int z[sz];

for(i=0;i<sz1;i++){
    z[i]=x[i];

}
for(j=0;j<sz2;j++){
    z[sz1+j]=y[j];
    }

inc(z,sz);
z[sz];
lar(z,sz);
sml(z,sz);


}

int main (){
int sz1,sz2,i,j;
cout<<"Enter the size of the first array : ";
cin>>sz1;
int x[sz1];
for(int i=0;i<sz1;i++){
    cout<<"Enter the element  : ";
    cin>>x[i];
}
int y[sz2];
cout<<"Enter the size of the second array : ";
cin>>sz2;
for(i=0;i<sz2;i++){
    cout<<"Enter the element  : ";
    cin>>y[i];
}
mer(sz1,sz2,x,y);
return 0;
}

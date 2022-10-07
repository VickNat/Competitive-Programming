#include<iostream>

using namespace std;

int main(){
   int temp;
   int n, arr[100];

   cout<<"enter the number of arr: ";
   cin>>n;

   cout<<"Enter the elements: \n";
   for(int i=0; i<n; i++){
    cout<<i+1<<": ";
    cin>>arr[i];
    cout<<endl;
   }
       
       for(int i=0; i<n; i++){
           if(arr[i]>arr[i+1] && arr[i]<n){
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
           }else{
               continue;
           }
       }
       for(int i=0; i<n; i++){
       	cout<<arr[i]<<" ";
	   }

  return 0;
}

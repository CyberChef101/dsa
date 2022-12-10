#include<iostream>
using namespace std;

void print (int arr [], int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<< " ";

    } cout<<endl;

}
    


bool BinarySearch(int arr[],int s,int e,int k){
    //base case
     print(arr,s,e);
    //element not found
    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    //element found
    if(arr[mid]==k)
    return true;

    if(arr[mid]<k){
        return BinarySearch(arr,mid+1, e, k);
    }
    else{
        return BinarySearch(arr,s,mid-1, k);
    }
   
  
}

int main(){

int arr[10]={1,5,8,32,49,53,66,73,86,91};
int size=10;
int key=86;
bool ans=BinarySearch(arr,0,size-1,key);

if(ans){
    cout<<"key is present"<<endl;

}
else{
    cout<<"key is not present"<<endl;
}

    return 0;
}
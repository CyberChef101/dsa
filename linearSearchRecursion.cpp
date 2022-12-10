#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"Size of array is:"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }cout<<endl;
}


bool LinearSearch(int arr[],int size,int k){
   
   print(arr,size);
    //base case
    if(size==0 ){
        return false;
    }
    if(arr[0]==k){
        return true;

    }
    else{
        bool ans=LinearSearch( arr+1,size-1,k);
        return ans;
    }
}

int main(){

int arr[5]={3,109,7,9,10};
int size=5;
int key=10;
bool ans=LinearSearch(arr,size,key);

if(ans){
    cout<<"key is present"<<endl;

}
else{
    cout<<"key is not present"<<endl;
}

    return 0;
}
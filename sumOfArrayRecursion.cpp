#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    //base case
    if(size==0){
        return 0 ;
    }
    if(size==1){
        return arr[0];

    }
   int remainPart=getSum(arr+1,size-1);
   int sum=arr[0]+remainPart;
   return sum;

}

int main(){

int arr[5]={3,7,7,9,10};
int size=5;
int ans=getSum(arr,size);
cout<<"Sum of Array Elements Are:"<<ans<<endl;



    return 0;
}
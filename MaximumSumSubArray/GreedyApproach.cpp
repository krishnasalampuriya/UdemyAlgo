#include <iostream>
using namespace std;
int Left,Right,MaxSum;
void maxsum(int a[],int length){
    int sum =0 ,ans = a[0];
  //  int left=0,right=0,l=0;
    for(int i=0;i<=length;i++){
      //  left=i;
        sum+=a[i];
        if(sum>ans){
          //  left = l;
          //  right = i;
            ans =sum;
           
        }
        if(sum<0){
            sum=0;
         //   l= i+1;
        }
            
    }
    MaxSum = ans;
   // Left = left;
   // Right = right;
}
int main(){
    int a[]={5,-6,3,4,-2,3,-3};
    maxsum(a, 7);
    cout<<MaxSum<<" "<<Left<<" "<<Right;
    return 0;
}
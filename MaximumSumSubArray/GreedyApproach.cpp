#include <iostream>
using namespace std;
int Left,Right,MaxSum=0;
const int Nmax = 1000;
void maxsum(int a[],int length){
    int sum =0 ;
    int ans = a[0];
   int left=0,right=0;
    for(int i=0;i<length;i++){
        if (sum==0) {
            left=i;
        }
        sum+=a[i];
        if(sum>ans){
         
            right = i;
            ans =sum;
           
        }
        if(sum<0){
            sum=0;
         //   l= i+1;
        }
            
    }
    MaxSum = ans;
    Left = left;
    Right = right;
}
int main(){
    int length,array[Nmax];
    cout<< "Enter the length of Array";
    cin>>length;
    cout<<"Enter elements of Array";
    for(int i=0;i<length;i++)
        cin>>array[i];

    maxsum(array, 7);
    cout<<"Max Sum is - "<<MaxSum<<" Left- "<<Left<<" Right- "<<Right;
    return 0;
}
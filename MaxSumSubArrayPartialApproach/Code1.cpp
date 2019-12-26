#include<iostream>
using namespace std;
const int Nmax = 10001;
int maxSum(int a[Nmax],int length){
    int s[Nmax];
    s[1]=a[1];
    for(int i=2;i<=length;i++){
        s[i]= a[i]+s[i-1];
    }
    int sum=s[1],mins=0;
    for (int i=1; i<=length; i++) {
        if(s[i]-mins>sum){
            sum=s[i]-mins;    
        }
        if(mins>s[i])
            mins=s[i];

    }
    return sum;
}
int main(){
    int length,a[Nmax]; 
    cout<<"Enter the length of Array";
    cin>>length;
    for(int i=1;i<=length;i++)
        cin>>a[i];
    cout<<"Maximum sum of Sub Array is : "<<maxSum(a,length);
  return 0;
}

#include<iostream>
using namespace std;
const int Nmax = 100001;
int a[Nmax],n,k;
int main(){
    cout<<"Enter the length of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<"Enter the limit of distinct elements : ";
    cin>>k;
    return 0;
}

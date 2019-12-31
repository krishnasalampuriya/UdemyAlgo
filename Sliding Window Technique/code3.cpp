#include<iostream>
using namespace std;
const int Nmax = 100001;
int a[Nmax],n,k;
int fr[Nmax];
int slidingWindow(){
    int Left=1,Right,ans=0,counter=0;
    for(Right=1;Right<=n;Right++){
        if(++fr[a[Right]]==1)
            counter++;
        if(counter>k)
            break;
    }
    if(counter<=k)
        return n;
    if(--fr[a[Right--]]==0)
        counter--;
    ans = Right-Left+1;
    for(Left=2;Left<=n;Left++){
        if(--fr[a[Left-1]]==0)
            counter--;
        while(Right<n){
            Right++;
            if(++fr[a[Right]]==1)
                counter++;
            if(counter>k)
                break;
        }
        if(counter<=k)
            return max(n-Left+1,ans);
        if(--fr[a[Right--]] ==0)
            counter--;
        ans=max(Right-Left+1,ans);        
    }
    return ans;

}
int main(){
    cout<<"Enter the length of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<"Enter the limit of distinct elements : ";
    cin>>k;
    cout<<slidingWindow();

    return 0;
}

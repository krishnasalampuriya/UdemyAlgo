#include<iostream>
using namespace std;
const int Nmax=1001;
int a[Nmax],n;
bool fr[Nmax];
int longestConsecutiveArray(){
    int ans=0;
    for(int Left=1;Left<=n;Left++){
        int Min=a[Left],Max=a[Left];
        for(int i=1;i<=n;i++)
            fr[i]=false;
        for(int Right =Left;Right<=n;Right++){
            if(fr[a[Right]]==true)
                break;
            fr[a[Right]]=true;
            Max=max(Max,a[Right]);
            Min=min(Min,a[Right]);
            if(Max-Min==Right -Left)
                ans=max(Right-Left+1,ans);
        }
    }
    return ans;
}
int main(){
    
    cout <<"Enter the Length of Array : ";
    cin>>n;
    cout<<"Enter the elements ";
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<longestConsecutiveArray();
    return 0;
}

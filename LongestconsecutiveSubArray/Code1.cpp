#include<iostream>
using namespace std;
const int Nmax=1001;
int a[Nmax],n;
bool fr[Nmax];
int longestConsecutiveArray(){
    for(int Left=1;Left<=n;Left++){
        int Min=a[Left],Max=a[Left];
        for(int i=1;i<=n;i++)
            fr[i]=false;
        for(int Right =Left;Right<=n;Right++){
            if(fr[Right]==true)
                break;
            fr[Right]=true;
            Max=max(Max,a[Right]);
            Min=mi
        }
    }
}
int main(){
    return 0;
}

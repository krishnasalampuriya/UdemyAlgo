#include <iostream>
using namespace std;
int Left,Right,maxsum;
void sumsubarray(int array[],int length){
    for (int left = 0; left<length; left++) {
        int sum = 0;
        for(int right = left ; right<length;right++){
            sum = sum +array[right];
            if(sum>maxsum){
                maxsum = sum;
                Left =left;
                Right = right;
            }
        }
    }
}
int main(){
    int array[] = {1,-3,5,-6,3,8,9};
    sumsubarray(array, 7);
    cout<<"Maxsum is "<<maxsum<<" Right = "<<Right<<" Left = "<<Left;
    return 0;
}
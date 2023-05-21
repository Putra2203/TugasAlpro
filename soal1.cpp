// judul
    //Nama      : Erdin Purwa Putra
    //kelompolk : 4211

#include<iostream>
using namespace std;

// kamus
bool isGanjil (int x){
    return x % 2 == 0;
}

void smallestEven(int arr[], int n){
    int minE = arr[0];
    int index = 0;

    for(int i = 0;i < n;i++){
        if(!isGanjil(arr[i])){
            if(arr[i]< minE){
                minE = arr[i];
                index=i;
            }
        }
    }
    cout<<" Ganjil terkecil : "<<minE<<endl;
    cout<<" index ke : "<<index<<endl;

}

int main()
{
    int arr[5] = {9,3,5,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    smallestEven(arr,n);
}

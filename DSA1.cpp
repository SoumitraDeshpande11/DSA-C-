#include<iostream>
using namespace std;
int main(){
     
    int arr[5] = {1,2,3,4,5};
    
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<endl;
    }
    int arr1[5] = {6,7,8,9,10};
    for (int i = 0; i < 5; i++){
        if (i == 2){
            continue;
        

        }
        arr1[i] = arr[i];
        cout<<arr1[i]<<endl;

    }

    return 0;
}
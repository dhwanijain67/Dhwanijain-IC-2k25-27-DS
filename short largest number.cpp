// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[5]={23, 45, 67, 80, 50};
    int largest= arr[0];
    
    for(int i=1; i<5; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    
    cout<<"Largest number="<<largest;
    
    return 0;
}// Online C++ compiler to run C++ program online

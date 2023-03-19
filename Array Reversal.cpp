#include <stdio.h>
using namespace std;

//Time Complexity: O(n)
//Iterative Method
//Recursive exists as well

void reverseArray(int arr[], int start, int end){
    int temp;
    while(start<end){
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}
void printArr(int arr[], int size){
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
          
}

int main(){
    int arr[]= {1,2,3,4,5};
     int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    reverseArray(arr, 0, n-1);
    cout << "Reversed array is" << endl;
    printArr(arr, n);
     
    return 0;

}

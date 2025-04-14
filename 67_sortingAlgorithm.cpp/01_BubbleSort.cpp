// Time Complexity : O(n²)
// As array is getting more sorted in every loop, we need to do less comparisons and less swaping 
// Formula to decrease numbers of comparisons = arrSize - i - 1

// Example : arrSize = 6  
// -- Pass 1 : 6 - 0 - 1 = 5 comparisons <--- swaped 5 elements 
// -- Pass 2 : 6 - 1 - 1 = 4 comparisons <--- swaped 4 elements 
// -- Pass 3 : 6 - 2 - 1 = 3 comparisons <--- swaped 3 elements
// -- Pass 4 : 6 - 3 - 1 = 2 comparisons <--- swaped 2 elements
// -- Pass 4 : 6 - 4 - 1 = 1 comparisons <--- swaped 1 elements
// -- Pass 4 : 6 - 5 - 1 = 0 comparisons <--- loop will not run, because we dont need to sort the last element as it was automatically sorted. 

#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size){  
    
    // this forloop will swap the values 
    for (int i = 0; i < size-1; i++) // Number of Passes = size -1 
    {
        for (int j = 0; j < size - i - 1; j++) // loop for each element 
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
        cout << "Pass : " << i+1 << endl;
    }
}

void printArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main(){
    int arr[] = {1,88,89,989,889,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    bubbleSort(arr, size );
    printArray(arr, size);
    
    return 0;
}
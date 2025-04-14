// As we know the [Pass] loop runs the [comparison loop]
//      Pass = 1, comparison loop will runs 5 times <--- means 5 elements were compared 
// then Pass = 2, comparison loop will runs 4 times <--- means 4 elements were compared 
// then Pass = 3, comparison loop will runs 3 times <--- means 3 elements were compared
// ... untill Pass = 5

// the number of Passes will be decreased if array was found sorted 

// In normalBubbleSort : the swap_forloop runs and swaps the values no matter even if the array is sorted 
// But in advanceBubbleSort : the forloop will

#include <iostream>
using namespace std;

void normalBubbleSort(int* arr, int size){  
    
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)  
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
        cout << "Pass : " << i+1 << endl;
    }
}

void advanceBubbleSort(int* arr, int size){ 
    int isSorted = 0; 

    // this forloop will swap the values 
    for (int i = 0; i < size-1; i++) // loop to run on updated array
    {
        isSorted = 1; // if no elements were 

        for (int j = 0; j < size - i - 1; j++) // this loops run for each element 
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSorted= 0;
            }
        }
        cout << "Pass : " << i+1 << endl;

        if (isSorted)
        {
            return;
        }
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
    
    return 0;
}
#include <iostream>
using namespace std;

void isertionSort(int array[], int size)
{
    int key, counter, inCounter; 
    for ( counter = 1; counter < size; counter++)
    {
        key = array[counter];
        inCounter = counter - 1;
        while (inCounter>=0 && array[inCounter]>key)
        {
            array[inCounter + 1] = array[inCounter];
            inCounter--;
        }
        array[++inCounter] = key;
    }
}

void printArray(int array[], int size)
{
    cout << "[ ";
    for (int counter = 0; counter < size; counter++)
    {
        cout << array[counter] << " ";
    }
    cout << "]" << endl;
}

int main()
{
    int arr[8] = { 5,10,12,7,1,6,4,3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    isertionSort(arr, size);
    printArray(arr, size);
    return 0;
}


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

void bubbleSort(int array[], int size)
{
    //int checkIfficiency = 0;
    bool sorted = true;
    int counter, inCounter, temp;
    for (counter = 0; counter < size-1; counter++)
    {
        for ( inCounter = 0; inCounter < size-counter-1; inCounter++)
        {
            if (array[inCounter] > array[inCounter + 1])
            {
                temp = array[inCounter];
                array[inCounter] = array[inCounter + 1];
                array[inCounter + 1] = temp;
                sorted = false;
            }
            //checkIfficiency++;
        }
        if (sorted == true)
        {
            break;
        }
    }
    //cout << checkIfficiency << endl;
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
    int arr2[8] = { 10,20,30,40,50,60,70,80 };
    int size = sizeof(arr) / sizeof(arr[0]);
    //isertionSort(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}


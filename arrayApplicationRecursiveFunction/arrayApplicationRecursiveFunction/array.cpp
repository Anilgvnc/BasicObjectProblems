#include <iostream>
using namespace std;

void printArray(int arr[], int size, int i) {
    if (arr == NULL){
        cout << endl;
        return;
    }
    
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 3, 1, 6, 9 };
    printArray(arr, 3, 2);
    printArray(arr, 2, 2);
    printArray(arr, 1, 2);


    system("pause");
    return 0;
}
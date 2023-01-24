#include <iostream>
using namespace std;

void SelectionSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[j]<array[i])
            {
                int temp = array[j];
                array[j]=array[i];
                array[i]=temp;
            }
            
        }
        
    }
    
}

void Output(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    SelectionSort(array, n);
    Output(array, n);
    return 0;
}





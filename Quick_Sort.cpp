#include <iostream>
using namespace std;

int partition(int array[], int low, int high, int pivot)
{
    int i = low;
    int j = low;
    while (i <= high)
    {
        if (array[i]>pivot)
        {
            i++;
        }
        else
        {
            int temp = array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j++;
        }
        
    }
    return j-1;
}

void QuickSort(int array[], int low, int high)
{
    if(low<high)
    {
        int pivot = array[high];
        int pos = partition(array, low, high, pivot);

        QuickSort(array, low, pos - 1);
        QuickSort(array, pos + 1, high);
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
    QuickSort(array, 0, n - 1);
    Output(array, n);
    return 0;
}





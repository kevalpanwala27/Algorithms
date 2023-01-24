#include <iostream>
using namespace std;

void InsertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = array[i];
        int j = i - 1;

        while (array[j]>current && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1] = current;
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
    InsertionSort(array, n);
    Output(array, n);
    return 0;
}




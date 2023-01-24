#include <iostream>
using namespace std;

void BubbleSort(int array[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = 1;   
            }
            
        }
        if (flag==0)
        {
            break;
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
    BubbleSort(array, n);
    Output(array, n);
    return 0;
}





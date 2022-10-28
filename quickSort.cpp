//TUSHAR PANJETA
//Quicksort with two pivots
#include<iostream>
#define size 100
using namespace std;

class QuickSort
{
    public :

    int array[size] , n , leftpivot , rightpivot;

    void createArray();

    void DualPivotQuickSort(int low, int high);

    void partition(int low, int high);

};

void QuickSort::createArray()
{
    cout<<"\nEnter no. of elements in array : ";
    cin>>n;
    while(n<=0)
    {
        cout<<"\n[ERROR] Invalid input , TRY AGAIN";
        cout<<"\nEnter no. of elements in array : ";
        cin>>n;
    }

    cout<<"\nEnter the "<<n<<" elements : ";
    for(int i=0 ; i<n ;i++)
    {
        cin>>array[i];
    }
}

void QuickSort::DualPivotQuickSort(int low, int high)
{
    if (low < high) 
    {
        partition(low, high);//provide left and right pivots
        DualPivotQuickSort(low, leftpivot - 1);
        DualPivotQuickSort(leftpivot + 1, rightpivot - 1);
        DualPivotQuickSort(rightpivot + 1, high);
    }
}

void QuickSort::partition(int low, int high)
{
    if(array[low] > array[high])//checking that left pivot is greater than right pivot if yes than swap them
    {
        swap(array[low], array[high]);
    }

    int j = low + 1, g = high - 1, k = low + 1, leftpiv = array[low], rightpiv = array[high];
    while (k <= g) 
    {
        if (array[k] < leftpiv) // if elements are less than the left pivot
        {
            swap(array[k], array[j]);
            j++;
        }

        else if (array[k] >= rightpiv) // if elements are greater than or equal to right pivot
        {
            while (array[g] > rightpiv && k < g)
            {
                g--;
            }
                
            swap(array[k], array[g]);
            g--;

            if (array[k] < leftpiv) //checking after swaping that if element is less than left pivot
            {
                swap(array[k], array[j]);
                j++;
            }
        }
        k++;
    }
    j--;
    g++;
  
    // bring pivots to their appropriate positions.
    swap(array[low], array[j]);
    swap(array[high], array[g]);

    leftpivot = j;
    rightpivot = g;
}

int main()
{
    QuickSort q1;

    q1.createArray();
    q1.DualPivotQuickSort(0,q1.n-1);
    
    cout<<"\nSorted array : ";
    for(int i=0 ; i<q1.n ; i++)
    {
        cout<<q1.array[i]<<" ";
    }
    return 0;
}

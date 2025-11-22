#include<iostream>
#include<vector>

using namespace std;
int  selection_sort(vector<int>& new_vec)
{
    int min_idx,i,j, swap_count = 0;

    int n = new_vec.size();

    for( i = 0 ; i< n-1 ; i++)
    {
        min_idx = i;

        for( j = i+1; j<n ; j++)
        {
            if(new_vec[j] < new_vec[min_idx])
            {
                min_idx = j;
            }
        }

        if( i != min_idx)
        {
            swap(new_vec[i], new_vec[min_idx]);
            swap_count++;
        }
    }
    return swap_count;
}

int main()
{
    vector<int> vec = {64, 25, 12, 22, 11};

    cout<<"Before Sorting: ";
    for(int x : vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int swap_count = selection_sort(vec);

    cout<<"After Sorting: ";
    for(int x : vec)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"total swapping : " << swap_count;

}

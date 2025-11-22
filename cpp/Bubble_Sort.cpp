#include<iostream>
#include<vector>

using namespace std;

void bubble_sort(vector<int>& vec)
{
    int n = vec.size();

    for(int i = 0; i<n-1 ; i++)
    {
        for(int j = 0; j < n-1-i ; j++)
        {
            if(vec[j] > vec[j+1])
            {
                swap(vec[j], vec[j+1]);
            }
        }
    }
}

void optimized_bubble_sort(vector<int>& vec)
{
    int n = vec.size();
    bool swapped = false;

    for(int i = 0; i<n-1 ; i++)
    {
        swapped = false;
        for(int j = 0; j < n-1-i ; j++)
        {
            if(vec[j] > vec[j+1])
            {
                swap(vec[j], vec[j+1]);
                swapped  = true;
            }
        }

        if(swapped == false)
        {
            break;
        }
    }
}


int main()
{
    vector<int> new_vec = {10,16,15,13,8};

    cout<<"Before Sorting : ";
    for(int x: new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    bubble_sort(new_vec);

    cout<<"After Sorting : ";
    for(int x: new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

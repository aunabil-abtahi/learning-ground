#include<iostream>
#include<vector>

using namespace std;

void insertion_sort(vector<int>& new_vec)
{
    int n = new_vec.size();
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = new_vec[i];

        for( j = i-1 ; j>=0 && key < new_vec[j]; j--)
        {
            new_vec[j+1] = new_vec[j];
        }
        new_vec[j+1] = key ;
    }
}

void absolute_insertion_sort(vector<int>& new_vec)
{
    int n = new_vec.size();
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = new_vec[i];

        for( j = i-1 ; j >= 0 && abs(key) < abs(new_vec[j]); j--)
        {
            new_vec[j+1] = new_vec[j];
        }
        new_vec[j+1] = key ;
    }
}


void print_vec(vector<int> vec)
{
    for(int x: vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}


int main()
{
//    vector<int> vec = {12, 10, 13, 5, 18};
//    cout<<"Before Sorting: ";
//    for(int x : vec)
//    {
//        cout<<x<<" ";
//    }
//    cout<<endl;
//
//    insertion_sort(vec);
//
//    cout<<"After Sorting: ";
//    for(int x : vec)
//    {
//        cout<<x<<" ";
//    }
//    cout<<endl;
//
//    cout<<" Find smallest : ";
//    int k;
//    cin>>k;
//
//    cout<< k <<"th smallest element of the vector is : "<<vec[k-1]<<endl;
//
//    if(vec.size() % 2 == 1)
//    {
//        cout<< "Median of the vector : "<< vec[vec.size()/2]<<endl;
//    }
//
//    else
//    {
//        int mid1 = vec[vec.size()/2];
//        int mid2 = vec[(vec.size()/2) +1];
//        cout<< "Median of the vector : "<< (mid1+mid2)/2 <<endl;;
//    }
//
//    int smallest_diff = INT_MAX;
//
//    for(int i = 0; i < vec.size()-1; i++)
//    {
//        int diff = vec[i+1] - vec[i];
//        if(diff < smallest_diff)
//        {
//            smallest_diff = diff;
//        }
//    }
//    cout<< "Smallest difference is : "<<smallest_diff<<endl;
//

    // absolute value wise sorting;

    vector<int> vec2 = {-10, 5, -3, 7, -2 };
    cout<<"Before Absolute Sorting: ";
    print_vec(vec2);

    absolute_insertion_sort(vec2);

    cout<<"After Absolute Sorting: ";
    print_vec(vec2);
}

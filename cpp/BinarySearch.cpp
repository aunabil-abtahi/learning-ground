#include<iostream>
#include<vector>
using namespace std;

bool binary_search_l(vector<int> search_list, int search_value)
{
    int low_index = 0;
    int high_index = search_list.size() - 1;

    while(low_index <= high_index)
    {
        int mid_index = (low_index + high_index)/2;

        if(search_list[mid_index] == search_value)
        {
            return true;
        }

        else if ( search_value < search_list[mid_index]){
            high_index = mid_index - 1;
        }

        else if (search_value > search_list[mid_index])
        {
            low_index = mid_index + 1;
        }
    }
    return false;
}

int main()
{
    vector<int> search_list = {10,40,50,90};

    int search_value;
    cout<<"Enter your search value : ";
    cin>>search_value;

    bool found = binary_search_l(search_list, search_value);

    if(found)
    {
        cout<<search_value<<" is found"<<endl;
    }
    else
    {
        cout<<search_value<<" is not found"<<endl;
    }
}



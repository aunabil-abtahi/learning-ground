#include<iostream>
#include<vector>
using namespace std;

bool linear_search(vector<int> search_list, int search_value)
{
    for(int i=0; i<search_list.size(); i++)
    {
        if(search_list[i] == search_value)
        {
            return true;
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

    bool found = linear_search(search_list, search_value);

    if(found)
    {
        cout<<search_value<<" is found"<<endl;
    }
    else
    {
        cout<<search_value<<" is not found"<<endl;
    }
}

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void insertion_sort_string(vector<string>& new_vec)
{
    int n = new_vec.size();
    int i, j;
    string key;

    for(i = 1; i < n; i++)
    {
        key = new_vec[i];

        for( j = i-1 ; j>=0 && key.length() < new_vec[j].length(); j--)
        {
            new_vec[j+1] = new_vec[j];
        }
        new_vec[j+1] = key ;
    }
}

void print_vec(vector<string> vec)
{
    for(string x: vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<string> new_vec = {"apple", "bat", "carrot", "dog"};
    print_vec(new_vec);
    insertion_sort_string(new_vec);
    print_vec(new_vec);
}


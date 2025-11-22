#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> new_vec = {10,20,30};

    //insert 40 at last
    new_vec.push_back(40);
    for(int x : new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    //insert 50 at index 2
    new_vec.insert(new_vec.begin() + 2, 50);
    for(int x : new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //update element at index 3
    new_vec[3] = 60;
    for(int x : new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // delete element from last
    new_vec.pop_back();

    for(int x : new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    //delete element at index 2
    new_vec.erase(new_vec.begin() + 2);

    for(int x : new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //delete element in a range (begin of range-inclusive but end of range-exclusive)
    new_vec.erase(new_vec.begin()+1, new_vec.begin() + 2);
    for(int x : new_vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    //vector empty
    if(new_vec.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
    {
        cout << "Vector size : "<<new_vec.size()<<endl;
    }


    //multidimensional vector

    vector<vector<int>> multi_vec = {{1,2,3},{4,5}};
    //vector<vector<int>> multi_vec;


    //traversing multidimensional vector
    for(int i=0; i<multi_vec.size(); i++)
    {
        for(int j = 0; j<multi_vec[i].size(); j++)
        {
            cout<<multi_vec[i][j]<<" ";
            //cin>>multi_vec[i][j];
        }
        cout<<endl;
    }

    //pushing element at last index of row 1
    multi_vec[1].push_back(6);
    for(int i=0; i<multi_vec.size(); i++)
    {
        for(int j = 0; j<multi_vec[i].size(); j++)
        {
            cout<<multi_vec[i][j]<<" ";
            //cin>>multi_vec[i][j];
        }
        cout<<endl;
    }

}


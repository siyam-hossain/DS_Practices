#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>a,int sz);
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> a(n);
    
    for (auto i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // for (auto i = a.begin(); i < a.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    
    selection_sort(a,n);
    
    
    return 0;
}
void selection_sort(vector<int>a,int sz)
{
    for (int i = 0; i < sz; i++)
    {
        //i mistake here j = i+1
        for (int j = i+1; j < sz; j++)
        {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for (auto i : a)
    {
        cout<<i<<" ";
    }
}

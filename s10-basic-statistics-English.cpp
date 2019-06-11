#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;

    vector<int> v;
    for (int i=0;i<n;i++)
    {
        double x;
        cin>>x;
        v.push_back(x);
    }

    double mean=0,mode,median;

    sort(v.begin(),v.end());

    for (int i=0;i<n;i++)
    {
        mean = mean + v[i];
    }

    mean = mean/n;

    if (n%2==0)
    {
        median = v[n/2] + v[n/2 - 1];
        median = median/2;
    }
    else
    {
        median = v[n/2];
    }

    int count[100000];
    for (int i=0;i<100000;i++)
    {
        count[i]=0;
    }

    for (int i=0;i<n;i++)
    {
        count[v[i]-1]++;
    }

    int maxcount = count[0];
    mode = 1;
    for (int i=0;i<100000;i++)
    {
        if (maxcount<count[i])
        {
            maxcount=count[i];
            mode=i+1;
        }
    }

    cout<<mean<<endl;
    cout<<median<<endl;
    cout<<mode<<endl;

    return 0;
}

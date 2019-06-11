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

    double numbers[n];
    double weights[n];

    for (int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    double sum_of_weights=0;
    for (int i=0;i<n;i++)
    {
        cin>>weights[i];
        sum_of_weights+=weights[i];
    }

    double weighted_mean = 0;
    for (int i=0;i<n;i++)
    {
        weighted_mean+= (numbers[i]*weights[i]);
    }

    weighted_mean/=sum_of_weights;

    printf("%.1lf",weighted_mean);

    return 0;
}

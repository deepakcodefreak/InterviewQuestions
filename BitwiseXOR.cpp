//Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number

#include<iostream>

using namespace std;

int main()
{
    int a[]= {12,12,13,13,90,4,4,7,7};
    int res = 0;
    int n = sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        res^=a[i];
    }
    cout<<res;
}

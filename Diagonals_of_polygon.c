#include<iostream>
using namespace std; 
int digonalCount(int n)
{
    return n* (n-3)/2;
}
int main()
{
    int n;
    scanf("%d",&n);
    cout<<digonalCount(n);
}

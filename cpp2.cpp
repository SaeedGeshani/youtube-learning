#include<iostream>

using namespace std;
int factoral(int n)
{
    for sum = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        sum *= i;
    }
    return sum;
}


int main()
{
    int n; 

    cin >> n;
    cout << factoral(n);
    return 0;
}
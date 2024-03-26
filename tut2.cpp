// Print all prime divisors of a number

#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void solve(int n)
{
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) ans.push_back(i);
        while (n%i == 0)
        {
            n = n/i;
        }
    }
    if(n != 1)
    {
        ans.push_back(n);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
int main()
{
    int n = 780;
    solve(n);
    return 0;
}
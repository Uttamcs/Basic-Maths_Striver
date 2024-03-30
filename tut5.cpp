// Count Prime in a range L-R (Queries type)

#include<bits/stdc++.h>
using namespace std;
vector<int> getSieve(int n)
{
    vector<int>prime((n+1), 1);
    for(int i=2; i*i <= n ; i++)
    {
        if(prime[i] == 1)
        {
            for (int j = i*i; j<= n; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
    return prime;
}
int main()
{
    vector<vector<int>> q = {{3,11},{5,15},{7,27}};
    vector<int>prime = getSieve(1000000);
    int cnt = 0;
    for (size_t i = 2; i <= 1000000; i++)
    {
        cnt = cnt+prime[i];
        prime[i] = cnt;
    }
    for (size_t i = 0; i < q.size() ; i++)
    {
        int l = q[i][0], r = q[i][1];
        cout<<prime[r]-prime[l-1]<<endl;
    }
    
    return 0;
}
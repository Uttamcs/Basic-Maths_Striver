//  Sieve of Eratosthenes (It will find all the prime number till n)


#include<bits/stdc++.h>
using namespace std;
void seiveOfErantosthenes(int n)
{
    vector<int>prime((n+1), 1);
    for(int p = 2; p*p <= n ; p++)
    {
        if(prime[p] == 1)
        {
            for (size_t i = p*p; i <= n; i+=p)
            {
                prime[i] = false;
            }
        }
    }
    for (size_t i = 2; i <= n; i++)
    {
        if(prime[i] == 1)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n = 31;
    seiveOfErantosthenes(n);
    return 0;
}
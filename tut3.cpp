// Power Exponentiation

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    int m = 21;
    int ans = 1;
    while (m > 0)
    {
        if(m %2 == 1)
        {
            ans = ans * n;
            m--;
        }
        else
        {
            m = m/2;
            n = n*n;
        }
    }
    cout<<ans<<endl;
    return 0;
}
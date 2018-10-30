#include<bits/stdc++.h>
using namespace std;

//https://www.luogu.org/problemnew/solution/P1029
int gcd(int x,int y)
{
return x==0? y:gcd(y%x,x);
}

/*int maxgcd(int x,int y)
{
return x==0? y:x*y/gcd(y%x,x);
}
*/

int main()
{
    int m,n,ans;
    cin>>n>>m;
    for(int i=1;i<=sqrt(m*n);i++)
    {
        if((n*m)%i==0&&gcd(i,(n*m)/i)==n)  ans++;
    }
    cout<<ans*2;
    return 0;
}
//================================================================================
/*#include<iostream>
using namespace std;
int main()
{
    long long n,i,x,b,c,t=0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        b=i;
        while(b!=0)
        {
            c=b%10;
            b=b/10;
            if(c==x) t++;
        }
    }
    cout<<t<<endl;
    return 0;
}*/

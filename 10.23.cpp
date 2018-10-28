#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
//https://www.luogu.org/problemnew/show/P1075
/*int main()
{
    int n;
    cin>>n;
    for (int i=2;i<=n;i++)
      if (n%i==0)
        {
            cout<<n/i;
            break;
        } 
    return 0;
}
*/



/*尝试输出质数并写入
bool IsPrime(int num)	
{
	for (int i = 2; i < sqrt(num); i++)		
	{
		if (num%i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
long long input;
cin>>input;
ofstream outfile;
outfile.open("prime.txt");
for(int i=2;i<=input;i++)
{
    if(IsPrime(i))
    {
    outfile<<i<<",";
    if(i%10==0)cout<<endl;
    }
}
outfile.close();
}
*/


//可行的代码https://www.luogu.org/problemnew/show/P2955
/*int res[maxn];
int main()
{
    string num;
    int ti;
    cin>>ti;
    for(int i=0;i<ti;i++)
    {
        cin>>num;
        res[i]=(num[num.size()-1]-'0')%2==0?0:1;
    }
    for(int i=0;i<ti;i++)
    {
        res[i]==0?cout<<"even":cout<<"odd";
        cout<<endl;
    }
    */
    
    
    /*https://www.luogu.org/problemnew/show/P2955
    数据高达10^60，40分
    int num[maxn],ti,res[maxn];
    //input number
    cin>>ti;
    for(int i=0;i<ti;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<ti;i++)
    {
        if(num[i]%2==0)
        {
            res[i]=0;
        }
        else
        {
            res[i]=1;
        }
    }
    for(int i=0;i<ti;i++)
    {
        if(res[i]==0)cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
*/
}
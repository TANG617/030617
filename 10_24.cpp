#include<bits/stdc++.h>
using namespace std;  
//成功的代码  https://www.luogu.org/problemnew/show/P1553
int main()
{
    string s;
    char p=0;//放符号 
    int cnt=0; 
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9') cnt++;//记录第一个数长度
        else    /= 
        {
            p=s[i];
            break;
        } 
    }
    int x=cnt;//记下第一个数末后一个的位置，也就是符号的位置，如果是分数或小数就要用 
    cnt--;
    while(s[cnt]=='0'&&cnt>0) cnt--;//去除多余前导0； 
    for(int i=cnt;i>=0;i--)//输出第一个数 
       cout<<s[i];
    if(p==0) return 0;//无符号return 0 
    else
      if(p=='%') {cout<<p;return 0;} 
      else cout<<p;
    int m=s.size()-1;
    while(s[x+1]=='0'&&x<m-1) x++;
    while(s[m]=='0'&&m>x+1) m--;
    for(int i=m;i>x;i--)
        cout<<s[i];
    return 0; 
}



/*//gcd_code(lcm=x*y/gcd(x,y))
long long gcd(long long x,long long y)
{
return x==0? y:gcd(y%x,x);
}
//Tri_Gcd
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<(a*b*c/gcd(a,b))/gcd(a*b/gcd(a,b),c);
}*/




//一次string的练习
/*string change(string s)
{
    string tmp;
    int lenth;
    lenth=s.size();
    for(int i=0;i<lenth;i++)
    {
       tmp.push_back(s[lenth-1-i]);
    }
    return tmp;
}

int main()
{
    string num_cin,num_cout;
    int pos;
    cin>>num_cin;
    //判断分整数，分数，小数，百分数
    bool int_num=0,fraction_num=0,decimal_num=0,percentage_num=0;
    if(num_cin.find(".")!=string::npos)
    {
        decimal_num=1;
    }
    if(num_cin.find("/")!=string::npos)
    {
        fraction_num=1;
    }
    if(num_cin.find("%")!=string::npos)
    {
        percentage_num=1;
    }
    else
    {
        int_num=1;
    }
    //数据处理
    if(fraction_num)
    {
        pos=num_cin.find("/");
        string tmp_1,tmp_2;
        tmp_1=num_cin.substr(0,pos);
        tmp_2=num_cin.substr(pos+1,num_cin.size()-pos-1);
        tmp_1=change(tmp_1);
        tmp_2=change(tmp_2);
        while(tmp_1[0]=='0')
        {
            tmp_1.erase(0,1);
        }
        while(tmp_2[0]=='0')
        {
            tmp_2.erase(0,1);
        }
        num_cout.insert(0,tmp_1);
        num_cout+="/";
        num_cout.insert(num_cout.size(),tmp_2);
    }
    if(decimal_num)
    {
        pos=num_cin.find(".");
        string tmp_1,tmp_2;
        tmp_1=num_cin.substr(0,pos);
        tmp_2=num_cin.substr(pos+1,num_cin.size()-pos-1);
        tmp_1=change(tmp_1);
        tmp_2=change(tmp_2);
        while(tmp_1[0]=='0')
        {
            tmp_1.erase(0,1);
        }
        while(tmp_2[0]=='0')
        {
            tmp_2.erase(0,1);
        }
        num_cout.insert(0,tmp_1);
        num_cout+=".";
        num_cout.insert(num_cout.size(),tmp_2);
        
    }
    if(percentage_num)
    {
        string tmp;
        tmp=num_cin.substr(0,num_cin.size()-1);
        tmp=change(tmp);
        while(tmp[0]=='0')
        {
            tmp.erase(0,1);
        }
        num_cin.replace(0,tmp.size(),tmp);
        num_cout=num_cin;
    }
    if(int_num)
    {
        num_cout=change(num_cin);
        while(num_cout[0]=='0')
        {
            num_cout.erase(0,1);
        }
    }
cout<<num_cout;
}
*/
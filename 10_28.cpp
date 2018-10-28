#include <bits/stdc++.h>
using namespace std;
//https://www.luogu.org/problemnew/show/P1147
int main()
{
    int ans;
    cin>>ans;
    int temp;
    for(int i=0 ;i<ans;i++)//首项
    {
        for(int j=0;j<=ans;j++)//项数
        {
            temp=(i+i+j-1)*j/2;
            if(temp>ans)break;
            else if(temp==ans)
            {
                cout<<i<<" "<<j+i-1<<endl;
            }
        }
    }
}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>


=================================================================================================================
//来自洛谷的排序算法https://www.luogu.org/problemnew/solution/P1177
#define max(A, B) ((A > B) ? A : B)
#define min(A, B) ((A < B) ? A : B)

void swap(int arr[], int i, int j);
void QuickSort(int arr[], int left, int right);
void ShellSort(int arr[], int left, int right);
void InsertSort(int arr[], int left, int right);
void BucketSort(int arr[], int left, int right);
void SelectSort(int arr[], int left, int right);
void Merge(int arr[], int left, int mid, int right);
void MergeSort(int arr[], int left, int right);

int main()
{
    int n;
    int *arr;
    int i;

    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * (n + 1));
    for (i = 1; i <= n; i++)
        scanf("%d", arr + i);
    /*想测试人品吗？srand((unsigned)time(0));
    int temp = rand() % 6;   //骚一波 ≖‿≖✧ ps:拼人品，有可能过不了
    switch (temp) {
    case 0:
        QuickSort(arr, 1, n);
        break;
    case 1:
        ShellSort(arr, 1, n);
        break;
    case 2:
        InsertSort(arr, 1, n);
        break;
    case 3:
        BucketSort(arr, 1, n);
        break;
    case 4:
        SelectSort(arr, 1, n);
        break;
    case 5:
        MergeSort(arr, 1, n);
        break;
    default:
        printf("error: rand()? or mod Σ( ° △ °|||)︴\n");
        break;
    }*/
    /*
    MergeSort(arr, 1, n);
    for (i = 1; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}

void swap(int arr[], int i, int j)
{
    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void QuickSort(int arr[], int left, int right)
{
    int i, pivot;

    if (left >= right)
        return;
    pivot = left;
    swap(arr, left, (left + right) / 2);
    for (i = left + 1; i <= right; i++) //单边搜索，可以该为双向搜索（据说快点( ° ▽、° )）
        if (arr[i] < arr[left])
            swap(arr, i, ++pivot);
    swap(arr, left, pivot);
    QuickSort(arr, left, pivot - 1);
    QuickSort(arr, pivot + 1, right);
}

void ShellSort(int arr[], int left, int right)
{
    int gap, i, j;

//ShellSort因为我只写过0——n-1的(最标准的)，可能有点小bug（不过应该没错吧 (*´Д｀*) )
    for (gap = (left + right) / 2; gap > 0; gap /= 2)
        for (i = gap; i <= right; i++)
            for (j = i - gap; j > 0 && arr[j] > arr[j + gap]; j -= gap)
                swap(arr, j, j + gap);
}

void InsertSort(int arr[], int left, int right)
{
    int i, v;

    for (i = left; i <= right; i++) {
        v = arr[i];
        int l = left, r = i;
        int j;
        while (l < r) {//在l与r之间插入排序，可以理解为解决子问题1→2→...→n
            int mid = (l + r) / 2;
            if (arr[mid] <= v)
                l = mid + 1;
            else
                r = mid;
        }
        for (j = i - 1; l <= j; j--)
            arr[j + 1] = arr[j];
        arr[l] = v;
    }
}

void BucketSort(int arr[], int left, int right)
{
    int i, v;
    static int cnt[123456] = { 0 };

    for (i = left, v = 0; i <= right; i++) {
        v = max(v, arr[i]);//部分优化：统计最大值，不用遍历所有桶，但空间仍是个问题╮(╯▽╰)╭
        cnt[arr[i]]++;
    }
    v++;
    while (v-- > 0)
        while (cnt[v]-- > 0)
            arr[--i] = v;
}

void SelectSort(int arr[], int left, int right)
{
    int i, j, k;

    for (i = left; i <= right; i++) {
        for (j = k = i; j <= right; j++) //可以理解为对k进行选择，将k的指向第i-left小的
            if (arr[j] < arr[k])
                k = j;
        if (i < k)
            swap(arr, i, k);
    }
}

void Merge(int arr[], int left, int mid, int right)
{
    //merge arr[L,M](sorted) and arr(M,R](sorted) into arr[L,R]
    static int p = 1, que[123456] = { 0 };
    int pl = left, pr = mid;
    int ql = mid + 1, qr = right;

    while (pl <= pr || ql <= qr) {
        if ((ql > qr) || (pl <= pr && arr[pl] <= arr[ql])) //有点麻烦的判断，要考虑arr已提取完的情况
            que[p++] = arr[pl++];
        else
            que[p++] = arr[ql++];
    }
    while (left <= right)
        arr[right--] = que[--p];
}

void MergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, mid, right);//二分递归
}
===================================================================================================================*/
/*int main()
{
    //顺序访问
    vector<int>obj;
    for(int i=0;i<10;i++)
    {
        obj.push_back(i);   
    } 
 
    cout<<"直接利用数组："; 
    for(int i=0;i<10;i++)//方法一 
    {
        cout<<obj[i]<<" ";
    }
 
    cout<<endl; 
    cout<<"利用迭代器：" ;
    //方法二，使用迭代器将容器中数据输出 
    vector<int>::iterator it;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素 
    for(it=obj.begin();it!=obj.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}


/*int main()
{
    vector<int>obj;
    for(int i=0;i<10;i++)
    {
        obj.push_back(i);
        cout<<obj[i]<<",";
    }
 
    obj.clear();
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<endl;
    }
 
    return 0;
}


==================================================================================================================
//冒泡排序
/*int main()
{
    int g;
    cin>>g;
    for(int i=0;i<g;i++)
    {
        cin>>sort[i];
    }
    
    bool sorted=0;//假装完成排序
    for(int j=0;!sorted;j++)
    {
 
        for(int m=0;m<g-1;m++)
        {
            if(sort[m]>sort[m+1])//交换顺序
            {
                int tmp;
                tmp=sort[m+1];
                sort[m+1]=sort[m];
                sort[m]=tmp;
                sorted=0;
            }
            else sorted=1;
        }
    }

for(int i=0;i<g;i++)
cout<<sort[i]<<endl;
cout<<sort[0];
}

=================================================================================================================

//学习c++ stl
int main()
{
   // 创建一个向量存储 int
   vector<int> vec; 
   int i;
 
   // 显示 vec 的原始大小
   cout << "vector size = " << vec.size() << endl;
 
   // 推入 5 个值到向量中
   for(i = 0; i < 5; i++){
      vec.push_back(i);
   }
 
   // 显示 vec 扩展后的大小
   cout << "extended vector size = " << vec.size() << endl;
 
   // 访问向量中的 5 个值
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }
 
   // 使用迭代器 iterator 访问值
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }
 
   return 0;
}*/
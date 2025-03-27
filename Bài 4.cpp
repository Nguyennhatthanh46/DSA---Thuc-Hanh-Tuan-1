/*
Bài toán:
Thuật toán tìm kiếm tuyến tính là một trong những thuật toán tìm kiếm đơn giản và dễ dàng cài đặt nhất. 
Ý tưởng của thuật toán là: với một mảng cho trước có N phần tử và phần tử cần tìm x, duyệt từ đầu mảng đến cuối mảng cho đến khi tìm được phần tử x.

Yêu cầu: Hãy cài đặt thuật toán tìm kiếm tuyến tính để tìm vị trí của tất cả x trong mảng có N phần tử và đếm số lần duyệt qua các phần tử.

Input :
-Dòng đầu tiên là số nguyên N dương (0 < N < 10000)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng
-Dòng cuối cùng là số nguyên x cần tìm

Output:
-Dòng đầu tiên là số lần x được tìm thấy trong mảng
-Mỗi dòng tiếp theo tương ứng với vị trí của x và số lần duyệt từ đầu mảng để tìm được x
Ví dụ:
Input                        Output                      Giải thích
---------------------------------------------------------------------------------------------------------------------------------------------
8                             2                           3 được tìm thấy ở 2 vị trí là 1 và 6, tương ứng phải duyệt 2 và 7 lần để tìm được
                    
1 3 -4 2 6 10 3  12           1 2             
 
3                             6 7
---------------------------------------------------------------------------------------------------------------------------------------------
4                              0                           Không tìm thấy -9 trong mảng                

1 2 3 4

-9

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int linearSearch(int A[], int n, int x){
    int dem = 0;
    for(int i = 0; i < n;i++){
        if(A[i]==x) dem++;
    }
    return dem;
}

void kt(vector<int> &v,int A[], int n, int x){
    for(int i = 0; i < n;i++){
        if(A[i]==x) v.push_back(i);
}
}

int main(){
int n;
cin>>n;
int a[n];
for(int i = 0; i<n;i++){
    cin>>a[i];
}
int x;
cin>>x;
int dem = 0;
if(linearSearch(a,n,x)!=0){
cout<<linearSearch(a,n,x)<<endl;
vector<int> v;
kt(v,a,n,x);
for(auto x : v){
    cout<<x<<" "<<x+1<<endl;
}
} else cout<<0;
}

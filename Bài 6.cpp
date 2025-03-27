/*
Bài toán:

Thuật toán tìm kiếm nhị phân là một thuật toán tìm kiếm đơn giản nhưng có tốc độ tìm kiếm cực kỳ nhanh. 
Ý tưởng của thuật toán là: với một mảng N phần tử đã được sắp xếp (tăng dần/hoặc giảm dần tùy theo người ra đề) và số nguyên x cần tìm, 
ta sẽ thực hiện tìm kiếm ở miền có khả năng xuất hiện x sau mỗi lần lặp.

Yêu cầu: Hãy cài đặt thuật toán tìm kiếm nhị phân để tìm vị trí của phần tử x trong mảng có N phần tử và đếm số lần duyệt qua các phần tử.

Input :
-Dòng đầu tiên là số nguyên N dương (0 < N < 32000)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng đã được sắp xếp tăng dần và không trùng nhau
-Dòng cuối cùng là số nguyên x cần tìm

Output:
-Dòng đầu tiên là vị trí của x được tìm thấy trong mảng. Nếu không tìm thấy thì xuất ra -1
-Dòng tiếp theo là số lần duyệt qua các phần tử để tìm được x. Nếu không tìm thấy thì không cần xuất ra dòng này.

Ví dụ:
Input                        Output                      Giải thích
-------------------------------------------------------------------------------------------------------------------------------
8                             2 3                        4 được tìm thấy ở vị trí 2

1 3 4 5 10 12 15 20                                      Để tìm được 3 cần phải duyệt qua các phần tử ở vị trí 3, 1 và 2.

4
-------------------------------------------------------------------------------------------------------------------------------
4                               -1

1 2 3 4

-9

*/
#include <iostream>
#include <algorithm>
using namespace std;

int binary(int a[],int n, int x, int &dem){
int l = 0;
int r = n - 1;
dem = 0;
while(l<=r){
    int mid = (l+r)/2;
    dem++;
    if(a[mid]==x) return mid;
    else if(a[mid]<x) l = mid +1;
    else r = mid - 1;
}
return -1;
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
int dem;
int k = binary(a,n,x,dem);
if(k!=-1){
        cout<<k<<'\n';
        cout<<dem<<'\n';
    }
    else cout<<-1<<'\n';

}

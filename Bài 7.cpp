/*
Bài toán:
Thuật toán tìm kiếm tuyến tính là một trong những thuật toán tìm kiếm đơn giản và dễ dàng cài đặt nhất. 
Ý tưởng của thuật toán là: với một mảng cho trước có N phần tử và phần tử cần tìm x, duyệt từ đầu mảng đến cuối mảng cho đến khi tìm được phần tử x.
Yêu cầu: Hãy cài đặt thuật toán tìm kiếm tuyến tính để tìm vị trí của x đầu tiên trong mảng có N phần tử và đếm số lần duyệt qua các phần tử.

Input :
-Dòng đầu tiên là số nguyên N dương (0 < N < 10000)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng
-Dòng cuối cùng là số nguyên x cần tìm

Output:
-Dòng đầu tiên là vị trí của x đầu tiên trong mảng nếu tìm được. Nếu không tìm thấy thì xuất ra -1
-Số lần duyệt qua các phần tử của mảng (từ đầu mảng đến cuối) để tìm được x
-Dòng thứ ba là vị trí của x đầu tiên trong mảng (đếm từ cuối đến đầu) nếu tìm được. Nếu không tìm thấy thì xuất ra -1
-Số lần duyệt qua các phần tử của mảng (từ cuối mảng đến đầu) để tìm được x
-Nếu như ở 2 dòng đầu tiên mà không tìm thấy thì không cần xuất ra 2 dòng tiếp theo

Ví dụ:
Input                        Output                      Giải thích
--------------------------------------------------------------------------------------------------------------------------------------
5                             1                          -4 ở vị trí 1 tính từ đầu mảng                               
                              2                          Phải duyệt qua 2 lần để tìm được -4
1 -4 3 2 6                    3                          -4 ở vị trí 3 tính từ cuối mảng
                              4                          Phải duyệt qua 4 lần từ cuối mảng để tìm được -4
-4 
--------------------------------------------------------------------------------------------------------------------------------------
4                             -1

1 2 3 4

-9

*/
#include <iostream>
#include <algorithm>
using namespace std;

int binary(int a[],int n, int x){
int l = 0;
int r = n - 1;

while(l<=r){
    int mid = (l+r)/2;
    if(a[mid]==x) return mid;
    else if(a[mid]<x) l = mid +1;
    else r = mid - 1;
}
return -1;
}

int	linearSearch(int A[], int n, int x)	{
int	i	=	0;
while	(i	<	n)	{
if	(A[i]	==	x)	return	i;
i++;
}
return	-1;
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
int k = linearSearch(a,n,x);
if(k!=-1){
        cout<<k<<'\n';
        cout<<k+1<<'\n';
        cout<<n-k-1<<'\n';
        cout<<n-k;

    }
    else cout<<-1<<'\n';

}

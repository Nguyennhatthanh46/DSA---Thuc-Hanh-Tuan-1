/*
Cho một dãy số nguyên a gồm N phần tử a1,a2,…,aN.
Có Q truy vấn, mỗi truy vấn cho một số nguyên x. Bạn hãy trả lời xem số nguyên x này có trong dãy a hay không?

Input:
- Dòng đầu tiên là 2 số nguyên dương N, Q (1≤N,Q≤10^5)
- Dòng tiếp theo chứa N số nguyên ai(−10^9≤ai≤10^9) là các phần tử của mảng.
- Q dòng tiếp theo, mỗi dòng chứa một số x là câu hỏi của truy vấn.
Output:
Gồm Q dòng, mỗi dòng gồm một câu trả lời. Nếu x trong dãy a thì in ra ‘YES'. Ngược lại, in ra ‘NO'.
Ví dụ:
Input                        Output
--------------------------------------------------
7 5                          NO
9 10 12 -1 0 1 7             NO
3                            YES
2                            YES
1                            YES
9
7

*/
#include <iostream>
#include <algorithm>
using namespace std;

int binary(int a[],int n, int x){
int l = 0;
int r = n - 1;

while(l<=r){
    int mid = (l+r)/2;
    if(a[mid]==x) return 1;
    else if(a[mid]<x) l = mid +1;
    else r = mid - 1;
}
return 0;
}

int main(){
int n;
cin>>n;
int q;
cin>>q;
int a[n];
for(int i = 0; i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i = 0; i <q; i++){
    int x;
    cin>>x;
    if(binary(a,n,x)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
}

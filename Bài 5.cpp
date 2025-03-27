/*
Bài toán:
Thuật toán tìm kiếm nhị phân là một thuật toán tìm kiếm đơn giản nhưng có tốc độ tìm kiếm cực kỳ nhanh. 
Tuy nhiên, đa phần các hướng dẫn và khóa học trên mạng đều hướng dẫn người học cài đặt trên mảng số nguyên 
trong khi trong thực tế chỉ cần mảng có thể sắp xếp được thì ra có thể áp dụng thuật toán tìm kiếm nhị phân.

Yêu cầu: Hãy cài đặt thuật toán tìm kiếm nhị phân trên mảng chuỗi có N phần tử.

Input :
- Dòng đầu tiên là số nguyên N dương (0 < N < 2000)
- N dòng tiếp theo chứa các phần tử Ai trong mảng, mỗi phần tử là một chuỗi với độ dài không quá 10. 
Các phần tử này đã được sắp xếp theo thứ tự bảng chữ cái
-Dòng cuối cùng là chuỗi x cần tìm

Output:
-Dòng đầu tiên là vị trí của x được tìm thấy trong mảng. Nếu không tìm thấy thì xuất ra -1
-Dòng tiếp theo là số lần duyệt qua các phần tử để tìm được x. Nếu không tìm thấy thì không cần xuất ra dòng này
Ví dụ:
Input                        Output                      Giải thích
---------------------------------------------------------------------------------------------------------------------------------------------
8                            5                           'Va' được tìm thấy ở vị trí 5
                             2                           Để tìm được 'Va' cần phải duyệt qua 2 vị trí là 3 và 5
2024                                            
Cau
Giai
Lieu
Thuat
Va
du
truc

Va                           
---------------------------------------------------------------------------------------------------------------------------------------------
4                            -1

2024
Happy
New
Year

2023

*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int binary(string a[],int n, string x, int &dem){
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
string a[n];
for(int i = 0; i<n;i++){
    cin>>a[i];
}

string x;
cin>>x;
int dem;
int k = binary(a,n,x,dem);
if(k!=-1){
        cout<<k<<'\n';
        cout<<dem<<'\n';
    }
    else cout<<-1<<'\n';

}

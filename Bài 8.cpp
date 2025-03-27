/*
Bài toán:
Trọng số của một mảng được định nghĩa là sự khác biệt giữa phần tử lớn nhất và nhỏ nhất của mảng. 
Ví dụ: trọng số của mảng [3, 7, 1, 2] là (7 - 1) = 6, trọng số của mảng [2] là (2 - 2) = 0, trọng số của mảng trống là 0.

Cho một mảng A có độ dài N. Bạn phải chia các phần tử của A thành hai dãy con S1 và S2 (một trong S1, S2 có thể trống) sao cho:
Mỗi phần tử của mảng A chỉ thuộc một trong hai dãy S1 hoặc S2.
Tổng trọng số của hai dãy S1 và S2 là lớn nhất.

Bạn in ra đáp án lớn nhất có thể của tổng trọng số của hai dãy S1 và S2.
 

Input :
-Dòng đầu tiên chứa T là số lượng test. Mô tả các trường hợp thử nghiệm T như sau:
-Với mỗi test case:
+Dòng đầu tiên chứa N là kích thước của mảng A.
+Dòng thứ hai chứa N số nguyên A[1], A[2],....., A[N] - biểu thị các phần tử của A.

Điều kiện:
1 <= T <= 10^4
2 <= N <= 10^5
1 <= A[i] <= 10^9
Tổng của N tren tất cả các test case không quá 2x10^5

Output:
Đối với mỗi trường hợp thử nghiệm, hãy in tổng trọng số tối đa có thể có của hai dãy con.
Ví dụ:
Input                        Output                      Giải thích
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2                  

3                   

1 2 3                         2                           Một phép chia có thể là [1, 3], [2] Ở đây tổng trọng số là = (3 - 1) + (2 - 2) = 2
                             
5

4 8 1 10 2                    15                          Ở trường hợp số 2, có thể chia thành 2 dãy [4, 1, 10] và [8, 2] thì tổng trọng số là (10 - 1) + (8 - 2) = 15

*/

#include <bits/stdc++.h>
using namespace std;

int FindMax2(int a[], int m) {
    int Max = a[m - 1];
    int Max2 = Max;
    for (int i = m - 2; i >= 0; i--) {
        if (a[i] <= Max) {
            Max2 = a[i];
            break;
        }
    }
    return Max2;
}

int FindMin2(int a[], int m) {
    int Min = a[0];
    int Min2 = Min;

    for (int i = 1; i < m; i++) {
        if (a[i] >= Min) {
            Min2 = a[i];
            break;
        }
    }
    return Min2;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;
        int a[m];

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        if (m == 2) {
            cout << abs(a[0] - a[1]) << endl;
            continue;
        }

        sort(a, a + m);
        int Max1 = a[m - 1];
        int Min1 = a[0];
        int Max2 = FindMax2(a, m);
        int Min2 = FindMin2(a, m);

        cout << (Max1 - Min1) + (Max2 - Min2) << endl;
    }

    return 0;
}

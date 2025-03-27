/*

Các nhà địa chất phát hiện một khu mỏ quặng dất hiếm, một thứ rất cần thiết cho công nghiệp chế tạo thiết bị điện tử. Khu mỏ có hình chữ nhật kích thước n×m ô. 
Trữ lượng quặng ở ô (i, j) được đánh giá là 
ai,j(1≤i≤n,1≤j≤m)
. Cần xây dựng một xí nghiệp làm giàu quặng trước khi đưa ra thị trường. 
Do điều kiện địa hình, xí nghiệp phải xây dựng ngay trên khu mỏ. Xí nghiệp chiếm diện tích 3×3 ô. 
Dĩ nhiên không thể khai thác quặng dưới nền của xí nghiệp, vì vậy người ta muốn tìm vị trí đặt xí nghiệp sao cho tổng trữ lượng phải để lại là ít nhất.
Hãy xác định tổng trữ lượng nhỏ nhất phải để lại.

Dữ liệu vào :
Dòng đầu tiên chứa 2 số nguyên n và m (3≤n,m≤10^6;1≤n×m≤10^6),
Dòng thứ i trong n dòng sau chứa m số nguyên ai1, ai2, .... ,aim
(0≤ai,j≤10^5,1≤j≤m).
Kết quả: Đưa ra một số nguyên – tổng trữ lượng nhỏ nhất phải để lại.
Ví dụ:
Input                       Output
------------------------------------
5 7
10 2 3 7 10 4 8             27
3 2 1 9 6 2 1
0 3 6 7 8 9 10
5 4 3 0 2 1 8
9 2 3 10 6 4 8

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int dem = 0;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> mt(n-2, vector<int>(m));
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n - 2 ; i++){
            mt[i][j] = a[i][j] + a[i + 1][j] + a[i + 2][j];
        }
    }
    int tongnhonhat = 900001;
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < m-2; j++){
            int tong = mt[i][j] + mt[i][j + 1] + mt[i][j + 2];
            tongnhonhat = min(tongnhonhat, tong);
        }
    }
    cout << tongnhonhat;
    return 0;
}

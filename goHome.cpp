/**
 * 数轴上有N个点，第一个点事嘟嘟熊所在的位置，第N-1个点事他家，需要依次从0 ->N-1
 * 可以从(0,N-1)中忽略一个点，回家需要走多少距离？
 */
#include <iostream>

using namespace std;

int a[55];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    int ans = 10000;
    for (int j = 1; j < n-1; j++) {
        int res = 0;
        int last = a[0];
        // 算从0号点到 N-2 号的点的距离，当然，是去掉一点之后
        for (int k = 0; k < n - 1; k++) {
            // 依次删除(1,N-1)点，暴力算就可以了。
            if (j == k) continue;
            res += abs(a[k] - last);
            last = a[k];
        }
        // 加上 N-2 到 N-1 的距离
        res += abs(a[n - 1] - last);
        // 求最小值
        ans = min(ans, res);
    }
    cout << ans << endl;
    return 0;
}
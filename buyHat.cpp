/**
 * 买帽子问题。查找第三便宜的那一个
 * 没有使用排序，使用一个大大的数组，然后用下标作为排序后的结果，这个思路特别赞。
 * 方法来自通过的同学。
 */

#include <iostream>

using namespace std;

int main() {
    int n, t = 0, syn = 0;
    int price[1000] = {0};
    cin >> n;
    while (n--) {
        cin >> t;
        price[t] = 1;
    }
    t = 0;
    for (int i = 0; i < 1000; i++) {
        if (price[t] && syn < 3) syn++;
        if (syn == 3) break;
        t++;
    }
    syn == 3 ? cout << t : cout << -1;
    return 0;
}
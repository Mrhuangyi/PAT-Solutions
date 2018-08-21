#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn = 111;
int origin[maxn], temp[maxn], changed[maxn];
int n;
bool isSame(int a[], int b[]) {
    for(int i = 1; i <= n; i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
bool showArray(int a[]) {
    for(int i = 1; i <= n; i++) {
        printf("%d", a[i]);
        if(i < n) {
            printf(" ");
        }
    }
    printf("\n");
}
bool insertSort() {
    bool flag = false;
    for(int i = 2; i <= n; i++) {
        if(i != 2 && isSame(temp, changed)) {
            flag = true;
        }
        sort(temp, temp + i + 1);
        if(flag == true) {
            return true;
        }
    }
    return false;
}
void downAdjust(int low, int high) {
    int i = low, j = i * 2;
    while(j <= high) {
        if(j + 1 <= high && temp[j + 1] > temp[j]) {
            j = j + 1;
        }
        if(temp[j] > temp[i]) {
            swap(temp[j], temp[i]);
            i = j;
            j = i * 2;
        } else {
            break;
        }
    }
}
void headSort() {
    bool flag = false;
    for(int i = n / 2; i >= 1; i--) {
        downAdjust(i, n);
    }
    for(int i = n; i > 1; i--) {
        if(i != n && isSame(temp, changed)) {
            flag = true;
        }
        swap(temp[i], temp[1]);
        downAdjust(1, i - 1);
        if(flag == true) {
            showArray(temp);
            return;
        }
    }
}
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &origin[i]);
        temp[i] = origin[i];
    }
    for(int i = 1; i <= n; i++) {
        scanf("%d", &changed[i]);
    }
    if(insertSort()) {
        printf("Insertion Sort\n");
        showArray(temp);
    } else {
        printf("Heap Sort\n");
        for(int i = 1; i <= n; i++) {
            temp[i] = origin[i];
        }
        headSort();
    }
    return 0;
}

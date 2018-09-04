#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace std;
const int k = 111;
const int inf = 1000000000;
struct Customer {
    int comeTime, serveTime;
}newCustomer;
vector<Customer> customer;
int convertTime(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}
bool cmp(Customer a, Customer b) {
    return a.comeTime < b.comeTime;
}
int endTime[k];
int main() {
    int c, w, totTime = 0;
    int stTime = convertTime(8, 0, 0);
    int edTime = convertTime(17, 0, 0);
    scanf("%d%d", &c, &w);
    for(int i = 0; i < w; i++) {
        endTime[i] = stTime;
    }
    for(int i = 0; i < c; i++) {
        int h, m, s, serveTime;
        scanf("%d:%d:%d %d", &h, &m, &s, &serveTime);
        int comeTime = convertTime(h, m, s);
        if(comeTime > edTime) {
            continue;
        }
        newCustomer.comeTime = comeTime;
        newCustomer.serveTime = serveTime <= 60 ? serveTime * 60 : 3600;
        customer.push_back(newCustomer);
    }
    sort(customer.begin(), customer.end(), cmp);
    for(int i = 0; i < customer.size(); i++) {
        int idx = -1, minEndTime = inf;
        for(int j = 0; j < w; j++) {
            if(endTime[j] < minEndTime) {
                minEndTime = endTime[j];
                idx = j;
            }
        }
        if(endTime[idx] <= customer[i].comeTime) {
            endTime[idx] = customer[i].comeTime + customer[i].serveTime;
        } else {
            totTime += (endTime[idx] - customer[i].comeTime);
            endTime[idx] += customer[i].serveTime;
        }
    }
    if(customer.size() == 0) {
        printf("0.0");
    } else {
        printf("%.1f", totTime / 60.0 / customer.size());
    }
    return 0;
}

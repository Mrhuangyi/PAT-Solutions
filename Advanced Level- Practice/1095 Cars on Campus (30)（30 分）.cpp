#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
const int maxn = 10010;
struct Car {
    char id[8];
    int time;
    char status[4];
}all[maxn], valid[maxn];
int num = 0;
map<string, int> parkTime;
int timeToint(int hh, int mm, int ss) {
    return hh * 3600 + mm * 60 + ss;
}
bool cmpByIdandTime(Car a, Car b) {
    if(strcmp(a.id, b.id)) {
        return strcmp(a.id, b.id) < 0;
    } else {
        return a.time < b.time;
    }
}
bool cmpByTime(Car a, Car b) {
    return a.time < b.time;
}
int main() {
    int n, k, hh, mm, ss;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%s %d:%d:%d %s", all[i].id, &hh, &mm, &ss, all[i].status);
        all[i].time = timeToint(hh, mm, ss);
    }
    sort(all, all + n, cmpByIdandTime);
    int maxTime = -1;
    for(int i = 0; i < n - 1; i++) {
        if(!strcmp(all[i].id, all[i+1].id) && !strcmp(all[i].status, "in") && !strcmp(all[i + 1].status, "out")) {
            valid[num++] = all[i];
            valid[num++] = all[i + 1];
            int inTime = all[i + 1].time - all[i].time;
            if(parkTime.count(all[i].id) == 0) {
                parkTime[all[i].id] = 0;
            }
            parkTime[all[i].id] += inTime;
            maxTime = max(maxTime, parkTime[all[i].id]);
        }
    }
    sort(valid, valid + num, cmpByTime);
    int now = 0, numCar = 0;
    for(int i = 0; i < k; i++) {
        scanf("%d:%d:%d", &hh, &mm, &ss);
        int time = timeToint(hh, mm, ss);
        while(now < num && valid[now].time <= time) {
            if(!strcmp(valid[now].status, "in")) {
                numCar++;
            } else {
                numCar--;
            }
            now++;
        }
        printf("%d\n",numCar);
    }
    map<string, int>::iterator it;
    for(it = parkTime.begin(); it != parkTime.end(); it++) {
        if(it->second == maxTime) {
            printf("%s ", it->first.c_str());
        }
    }
    printf("%02d:%02d:%02d\n",maxTime / 3600, maxTime % 3600 / 60, maxTime % 60);
    return 0;
}

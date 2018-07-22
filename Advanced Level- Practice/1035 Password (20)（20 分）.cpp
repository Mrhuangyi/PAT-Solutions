#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct node {
    string name, password;
    bool ischange;
}t[1005];
void crypt(node& t, int& cnt) {
    int len = t.password.size();
    for(int i = 0; i < len; i++) {
        if(t.password[i] == '1') {
            t.password[i] = '@';
            t.ischange = true;
        } else if(t.password[i] == '0') {
            t.password[i] = '%';
            t.ischange = true;
        } else if(t.password[i] == 'l') {
            t.password[i] = 'L';
            t.ischange = true;
        } else if(t.password[i] == 'O') {
            t.password[i] = 'o';
            t.ischange = true;
        }
    }
    if(t.ischange) {
        cnt++;
    }
}
int main() {
    int n, cnt = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>t[i].name>>t[i].password;
        t[i].ischange = false;
    }
    for(int i = 0; i < n; i++) {
        crypt(t[i], cnt);
    }
    if(cnt == 0) {
        if(n == 1) {
            cout<<"There is "<<n<<" account and no account is modified";
        } else {
            cout<<"There are "<<n<<" accounts and no account is modified";
        }
    } else {
        cout<<cnt<<endl;
        for(int i = 0; i < n; i++) {
            if(t[i].ischange) {
                cout<<t[i].name<<" "<<t[i].password<<endl;
            }
        }
    }
    return 0;
}

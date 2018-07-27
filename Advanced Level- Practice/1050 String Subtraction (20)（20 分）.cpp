#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
string a, b;
bool HashTable[128];
int main() {
    getline(cin, a);
    getline(cin, b);
    int lena = a.size();
    int lenb = b.size();
    for(int i = 0; i < lenb; i++) {
        HashTable[b[i]] = true;
    }
    for(int i = 0; i < lena; i++) {
        if(HashTable[a[i]] == false) {
            cout<<a[i];
        }
    }
    return 0;
}

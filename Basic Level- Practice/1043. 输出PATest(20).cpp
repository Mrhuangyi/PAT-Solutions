#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int mapp[128] ={0},c;
    while((c=cin.get())!=EOF) mapp[c]++;
    while(mapp['P']>0||mapp['A']>0||mapp['T']>0||mapp['e']>0||mapp['s']>0||mapp['t']>0){
        if(mapp['P']-->0) cout<<'P';
        if(mapp['A']-->0) cout<<'A';
        if(mapp['T']-->0) cout<<'T';
        if(mapp['e']-->0) cout<<'e';
        if(mapp['s']-->0) cout<<'s';
        if(mapp['t']-->0) cout<<'t';
    }
    return 0;
}

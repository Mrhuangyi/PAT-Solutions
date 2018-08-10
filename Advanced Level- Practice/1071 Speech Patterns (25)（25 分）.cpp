
#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int>cou;
int check(char c){
	if(c>='0'&&c<='9'){
		return 1;
	}
	if(c>='a'&&c<='z'){
		return 1;
	}
	if(c>='A'&&c<='Z'){
		return 1;
	}
	return 0;
}
int main(){
	int i=0;
	string str;
	getline(cin,str);
	int len=str.length();
	while(i<len){
		string word;
		while(i<len&&check(str[i])==0){//定位到有效单词 
			i++;
		}
		while(i<len&&check(str[i])==1){
			if(str[i]>='A'&&str[i]<='Z'){
				str[i]=str[i]+32;
			}
			word=word+str[i];
			i++;
		}
			if(cou.find(word)==cou.end()){
				cou[word]=1;
			}
			else{
				cou[word]++;
			}
	}
	map<string,int>::iterator it=cou.begin();
	int max=-1;
	string ans;
	for(;it!=cou.end();it++){
		if(it->second>max){
			max=it->second;
			ans=it->first;
		}
	}
	cout<<ans<<" "<<max<<endl;
	return 0;
}

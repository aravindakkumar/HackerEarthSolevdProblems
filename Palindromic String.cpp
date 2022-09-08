#include <iostream>
#include<string>
using namespace std;

string reverse(string str){
	int start = 0, end = str.size()-1;
	for(int i=0; i < str.size()/2; i++){
		int temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	return str;
}

int main() {
	string str;
	cin >> str;
	string s = (str == reverse(str)) ? "YES": "NO";
	cout<<s<<endl;
	return 0;
}

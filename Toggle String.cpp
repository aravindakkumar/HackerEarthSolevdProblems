#include <iostream>
#include<cctype>
using namespace std;
int main() {
	string str;
	cin>>str;

	for(int i=0; i < str.size(); i++){
		if(str[i] >= 97 && str[i] <= 122) str[i] = toupper(str[i]);
		else str[i] = tolower(str[i]);
	}

	cout<<str<<endl;
}

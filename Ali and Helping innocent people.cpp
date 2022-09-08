#include <iostream>
#include<string>
using namespace std;

string fun(string str){
	if((str[0] + str[1])%2 != 0) return "invalid";
	else if(str[2] != 'A' || str[2] != 'E' || str[2] != 'I' || str[2] != 'O' || str[2] != 'U' || str[2] != 'Y' ) return "invalid";
	else if((str[3] + str[4]) % 2 !=0 || (str[4] + str[5]) % 2 !=0) return "invalid";
	else if((str[7]+str[8])%2!=0) return "invalid";
	else return "valid";
}
int main(){
	string str;
	cin >> str;
	cout<<fun(str)<<endl;	
	return 0;
}

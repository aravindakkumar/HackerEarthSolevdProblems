#include <iostream>
#include<string>
using namespace std;
int main() {
	string name;
	int no_z = 0, no_o = 0;
	cin >> name;    //Reading input from STDIN
	
	for(auto s: name){
		if(s == 'z') no_z++;
		else no_o++;
	}

	if(no_o == (2*no_z)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

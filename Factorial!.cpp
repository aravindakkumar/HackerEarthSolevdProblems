#include <iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	int result=1;
	for(int i=num; i>0; i--)
		result = result * i;
	cout<<result<<endl;
	return 0;
}

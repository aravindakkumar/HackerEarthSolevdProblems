#include <iostream>
using namespace std;
int main() {
	int s, e, k;
	cin>>s>>e>>k;
	int count =0;
	for(int i=s; i <=e ; i++){
		if(i % k == 0) count++;
	}
	cout<<count<<endl;
	return 0;
}

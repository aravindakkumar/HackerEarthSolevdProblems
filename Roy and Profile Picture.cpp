#include <iostream>
using namespace std;
int main() {
	int L;
	int N;
	cin>>L>>N;
	while(N > 0){
		int W,H;
		cin>>W>>H;

		if(W < L || H < L) cout<<"UPLOAD ANOTHER"<<endl;
		else if(W == H) cout<<"ACCEPTED"<<endl;
		else cout<<"CROP IT"<<endl;

		N--;
	}
}

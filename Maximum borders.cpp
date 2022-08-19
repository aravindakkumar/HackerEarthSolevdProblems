#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int testCases;
	cin >> testCases;    //Reading input from STDIN
	
	int n, m;
	while(testCases > 0){
		int max=0, count=0;
		cin >> n >> m;
		string line;
		for(int i=0; i < n; i++){
			cin >> line;
			
			for(auto i : line){
				if(i == '#') count++;
			}
			
			if(count > max) max = count;
			count = 0;
		}
		cout<<max<<endl;
		testCases--;
	}
}

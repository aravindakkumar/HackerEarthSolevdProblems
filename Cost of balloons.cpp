#include <iostream>
using namespace std;

int cost(int first[], int second[],int N, int color1, int color2){
	int sum = 0;
	for(int i=0; i < N; i++){
		sum += (color1 * first[i]) + (color2 * second[i]);
	}
	return sum;
}

int main() {
	int testCases = 0;
	cin>>testCases;

	while(testCases > 0){
		int green = 0, purple = 0, N = 0;
		cin >> green >> purple >> N; 

		int first[N];
		int second[N];
		for(int i=0; i < N; i++){
			cin>>first[i];
			cin>>second[i];
		}

		int firstComb = cost(first, second, N, green, purple);
		int secondComb = cost(first, second, N, purple, green);
		int res = (firstComb < secondComb) ? firstComb : secondComb;

		cout<<res<<endl;

		testCases--;
	}
}

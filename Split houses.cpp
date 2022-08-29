#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	char arr[num];
	for(int i=0; i < num; i++)
		cin>>arr[i];


	bool yesOrNo = true;
	char prevValue = '\0';
	for(int i=0; i<num; i++){
		if(arr[i] == '.'){
			arr[i] = 'B';
			prevValue = '\0';
		}	
		if(prevValue == arr[i]){
			yesOrNo = false;
			break;
		}	
		prevValue = arr[i];
	}

	if(yesOrNo == true){
		cout<<"YES"<<endl;
		for(int i=0; i < num; i++)
			cout<<arr[i];
	}
	else{
		cout<<"NO"<<endl;
	}


}

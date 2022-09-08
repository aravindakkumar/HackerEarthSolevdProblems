#include <iostream>
#include<string>
using namespace std;
int main() {
    int N {0};
    cin >> N;
    int *arr = new int[N];
    for(int i=0; i < N; i++){
        cin>>*(arr+i);
    }    

    string result = (arr[N-1]%10 == 0)? "Yes":"No";
    cout<<result<<endl;
    return 0;
}

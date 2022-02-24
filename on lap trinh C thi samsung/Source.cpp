#include<iostream>

using namespace std;

int main (){
	//freopen("input.txt", "r", stdin);
	
	int T;//tong so test case
	cin >> T;
	for(int tc =1;tc <= T ; tc++){
		int n , x , y;
		cin >> n >> x >> y;
		for(int i=1; i < n; i++){
			if( i % x == 0 & i % y != 0){
				cout <<  i << " ";
			}
		}
	}
	cout << endl;
	return 0;
}

# include <iostream>
using namespace std;
int main(){
	int n,m;
	cout << "Enter number of rows and column: ";
	cin >> n >> m;
	int arr[n][m];
	cout << "Enter values in 2d Array: " << endl;
	for (int i =0 ; i < n;i++){
		for (int j = 0 ;j <m;j++){
			cin >> arr[i][j];
		}
	}
	cout << "2-d Array: " << endl;
	for (int i =0 ; i < n;i++){
		for (int j = 0 ;j <m;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
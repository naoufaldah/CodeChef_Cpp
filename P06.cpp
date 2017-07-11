#include <iostream>

using namespace std;


int main(){
	
	int T;

	cin >> T;

	if(T >= 1 && T <= 1000){

		for(int x = 0; x <= T; x++){

			//get the numbers A , B
			int A;
			int B;

			cin >> A >> B;

			if(A >= 1 && A <= 10000 && B >= 1 && B <= 10000 ){

				//sum them
				int sum;
				sum = A + B;
				cout << sum << endl;
			}

		}

	}
}
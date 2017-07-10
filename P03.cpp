#include <iostream>

using namespace std;

int main(){

	//First & last digit sum
	int T = 0;
	int N;
	
	//get number of T
	cin >> T;

	if(T >= 1  && T <= 1000){

		for(int x = 0; x < T; x++){

			//get N
			cin >> N;

			if(N >=1 && N <= 1000000){

				int rem, rem1; //reminder  and reminder 1

				rem = N%10;

				while(N >= 10){

					N = N/10;

				}

				rem1 = N%10;

				cout << rem + rem1 << endl;

			}
		}
	}
};
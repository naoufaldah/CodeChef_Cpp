//Enormus Input file..

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,k;
	int t;
	int divisible = 0;
	int max_nk = pow(10,7);
	int max_t = pow(10,9); 
	cin >> n >> k;

	//ceck_001

	if(n <= max_nk  && k <= max_nk){

		for(int x = 0; x < n; x++){

			cin >> t;

			//check_002
			if(t < max_t){

				//check if it is "divisble"
				if(t % k == 0){

					//yes, it is divisible
					divisible++;

				}


			}
		}

		cout << divisible << endl;
	}
}
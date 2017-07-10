#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	//Find Reminder

	//Variables
	int T;
	int A;
	int B;

	cin >> T;

	if(T > 1 && T <= 1000){

		for(int i = 0; i < T; i++){

		//get the information
		cin >> A >> B;

		//check number "size"

				if(A >= 1 && A <= 10000 && B >= 1 && B <= 10000){

					int reminder = A % B;
					cout << reminder << endl;
				}

			
						

			}//for

		}//if

	}//main int()





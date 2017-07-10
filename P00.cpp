#include <iostream>

using namespace std;


int main(){

	//ATM (Codechef)
	double tax = 0.50;
	double balance = 0;
	int to_withdraw = 0;


	//Getting the information

	cin >> to_withdraw >> balance;
	//checking the balance 

	//check if is under 2000

	if(to_withdraw > 0 && to_withdraw <= 2000){

		//check balance 

		if(balance > 0 && balance <= 2000){

			if(balance > (to_withdraw + tax) ){

		//if there is money in the account

		//check if it is multiple

		if(to_withdraw % 5 == 0){

			//if it is multiple of 5
			//make the transaction
			balance = balance - to_withdraw - tax;


			cout << balance;

		}else{

			//otherwise, print current balance
			cout << balance;
		}

	}else{

		//if there is not enought money, cout the balance of the account
		cout << balance;
	}

		}
	}

}
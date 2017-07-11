//Gross salary [CodeChef]
#include <iostream>

using namespace std;


int main(){

	int T;
	float basic_salary,HRA,DA,gross;

	cin >> T;

	while(T--){

		cin >> basic_salary;

		if(basic_salary < 1500){

			HRA = (basic_salary * 10) / 100;
			DA =  (basic_salary * 90) / 100;
			gross = basic_salary + HRA + DA;

			cout << gross << endl;

		}else if(basic_salary >= 1500){

			HRA = 500;
			DA = (basic_salary * 98) / 100;
			gross = basic_salary + 500 + DA;

			cout << gross << endl;

		}

	}
}
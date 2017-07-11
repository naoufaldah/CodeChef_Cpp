#include <iostream>
#include <iomanip>  
using namespace std;


int main(){

	int t;
	double quan,price;

	cin >> t;

	while(t--){

		cin >> quan >> price;

		if(quan > 1000){

			//offer discount
			double final_price = (( quan * price ) * 90 ) / 100;

			cout << fixed << setprecision(6) << final_price << endl;

		}else{

			cout << fixed <<setprecision(6) << quan * price << endl;
		}
	}


}
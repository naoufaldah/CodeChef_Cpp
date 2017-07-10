#include <iostream>
#include <vector>
 
using namespace std;
 
//take all the numbers, but if the num is 42 stop
 
int main ()
{
	//Vector to store all the numbers
	int num;
	vector <int> Numeros;
 
while(0 == 0){
 
			cin >> num;
			Numeros.push_back(num);
 
			if(num == 42){
 
				//if the number inputed is the 42, break the process
				//delete the number from the vector (Delete last number)
				Numeros.pop_back();
				break;
 
			}
 
}
 
	//display all the record in the vector
 
	for(size_t s = 0; s < Numeros.size(); s++){
 
			cout << Numeros[s] << " " ;
 
	}
 
 
}
 
 

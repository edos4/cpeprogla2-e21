#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int hashmat, opponent;
	
	while (f>>hashmat>>opponent){
	      cout << abs(hashmat-opponent) << endl;
	}
	system ("pause > 0");
}

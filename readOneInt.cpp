#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int num;
	
	while (f>>num){}
  cout << "The number from the file is: " <<num<< endl;
	system ("pause > 0");
}

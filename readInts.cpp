#include<iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream f("sample.txt");
    
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout << (hashmat+opponent);      
    }
    
    //fclose(f);
    system("pause");
    return 0;
}   
    

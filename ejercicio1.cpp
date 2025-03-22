#include <iostream>
#include <string>
using namespace std;

int main(){
	string line;
	int contador = 0;
	getline(cin, line);
	
	int linelength = line.length();
	
	for (int i = 0; i < linelength; i++){
		if (line[i] == ' '){
			cout << i << endl;
		} else if (i == linelength - 1){
			cout << ++i << endl;
		}
	}
	return 0;
}

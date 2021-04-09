#include <iostream>
int main(int argc, int* argv[]){
	using namespace std;

	if(argc> 1){
		cout<< argv[1];

	}
	else
		cout << " No arguments! " ;
	return 0;
}

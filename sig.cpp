#include <signal.h>
#include <iostream>
using namespace std;
void my_handler(int signo);

int main(){
	signal(SIGTERM, my_handler);
	return 0;
}

void my_handler(int signo){
	cout << "recives the signal: " << signo << endl;
}

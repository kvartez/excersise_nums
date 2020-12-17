#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void load(){
	ifstream text;
	ofstream nums;
	int num,enuma,num1,num2;
	char* loader;
	text.open("text.txt");
	nums.open("nums.txt");
	while(text.good()){
		if(!text.eof()){
			
			 text >> num;
			//num=atoi(loader);
			num2=num1;
			num1=num;
			
			if(num<1000){
				enuma++;
			}
		}
	}
	nums <<enuma;
	nums<<num2 ;
	nums<<num1;
	text.close();
}


int main() {
	load();
	
	return 0;
}

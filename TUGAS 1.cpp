#include <iostream>
#include<cmath>
using namespace std;

int main (){
	unsigned int inputnumber, total;
	unsigned int number = 0;
	
	cout<<"Please input the number:";
	cin>>inputnumber;
	
	while (inputnumber > number){
		cout<<++number<<endl;
		total += number;
	}
	cout<<total<<endl;
	
	return 0;
}

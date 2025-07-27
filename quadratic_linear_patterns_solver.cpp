#include <iostream>

using namespace std;

//Solving quadratic number patterns in C++


int main(){
	
	
	int first_num;
	int second_num;
	int third_num;
	int fourth_num;
	int fifth_num;
	int sixth_num;
	
	cout << "Enter the first number of the pattern here: " << endl;
	cin >> first_num;
	
	
	cout << "Enter the second number of the pattern here: " << endl;
	cin >> second_num;
	
	cout << "Enter the third number of the pattern here: " << endl;
	cin >> third_num;
	
		
	cout << "Enter the fourth number of the pattern here: " << endl;
	cin >> fourth_num;
	
		
	cout << "Enter the fifth number of the pattern here: " << endl;
	cin >> fifth_num;
	
		
	cout << "Enter the sixth number of the pattern here: " << endl;
	cin >> sixth_num;
	
	
	int firstdiff1=second_num - first_num;
	int firstdiff2=third_num-second_num;
	int firstdiff3=fourth_num-third_num;
	int firstdiff4=fifth_num-fourth_num;
	int firstdiff5=sixth_num-fifth_num;
	
	if(firstdiff1==firstdiff5){
		int a=first_num;
		int d=firstdiff1;
		int temp= a + (-1) * d;
		
		
		cout << "Linear Pattern" << endl;
		(temp >=0) ? cout << "Tn =" <<a << "n + " << temp : cout << "Tn =" << a << "n  "<<temp << endl;
		
		
	}
	else if(firstdiff1!=firstdiff5){
	
	int secdiff1;
	int secdiff2;
	int secdiff3;
	int secdiff4;
	
	
	secdiff1=firstdiff2-firstdiff1;
	secdiff2=firstdiff3-firstdiff2;
	secdiff3=firstdiff4-firstdiff3;
	secdiff4=firstdiff5-firstdiff4;
	
	int a=secdiff1/2;
	int b=3*a - (firstdiff1);
	int c=first_num - a - b;
	
	cout << "Quadratic Pattern:" << endl;
	cout << "Tn= " <<a << "n2 + " << b << "n" << " + " << c<< endl;	
}
else {
	
	cout << "Cannot detect pattern" << endl;
}
    return 0;
}

	
	
	
	
	
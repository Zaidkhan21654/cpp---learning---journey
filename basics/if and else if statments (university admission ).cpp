#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float intermediatePercentage;
	cout<<"whats your intermediate percentage :\n";
	cin>>intermediatePercentage;
	
	float testPercentage;
	cout<<"enter your test percentage :\n";
	cin>>testPercentage;
	
	bool admissioncard;
	cout<<"Do you have the admission card? (1 for yes, 0 for no)\n";
	cin>>admissioncard;
	
	if(intermediatePercentage < 0 || intermediatePercentage >100){
		cout<<"invalid intermediate percentage .\n";
	}else if (testPercentage < 0 || testPercentage > 100){
		cout<<"invalid entry test percentage .\n";
	}else if (admissioncard ==0){
		cout<<"admission rejected.\n";
	}else if (intermediatePercentage >= 60 && testPercentage >= 70){
		cout<<"Admission approved.\n";
	}else if (intermediatePercentage >= 60){
		cout<<"you failed the entry test.\n";
	}else if (testPercentage >= 70){
		cout<<"you have low intermediate percentage.\n";
	}else {
		cout<<"admission rejected .\n \t both requirements failed.";
	}
	
	
	
return 0;	
}

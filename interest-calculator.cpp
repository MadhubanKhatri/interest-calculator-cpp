#include<iostream>
#include<cmath>
#include<string>

using namespace std;

float simple_interest(float a, float b, int c){
	float si = (a*b*c)/100;
	return si;
}

float compound_interest(float x, float y, int z){
	float ci = x*pow((1+y/100),z)-x;
	return ci;
}

int main(){
	float p, r;
	int t;
	string m;
	cout<<"Enter your Principal Amount: ";
	cin>>p;
	cout<<"Enter your Rate of Interest: ";
	cin>>r;
	cout<<"Enter your Time: ";
	cin>>t;
	cout<<"****************"<<endl;
	cout<<"Type of Interest(s for SI and c for CI): ";
	cin>>m;
	if(m=="c"){
		cout<<"Compound Interest is: "<<compound_interest(p,r,t);
	}
	else if(m=="s"){
		cout<<"Simple Interest is: "<<simple_interest(p,r,t);
	}
	else{
		cout<<"Please select between SI & CI";
	};

	return 0;
}

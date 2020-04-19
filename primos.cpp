#include<iostream>
using namespace std;

int main(){
	
	int num;
	bool primo=false;
	
	do{
	cout<<"introdusca el rango maximo de numeros primos no menor que 2: ";
	cin>>num;
	}while(num<2);
	
	if(num==2){
		cout<<2<<endl;
	}
		
	else if	(num==3){
		cout<<2<<"\n"<<3<<endl;
	}
	
	else{
	
		for(int i=3;i<num;i++){
			for(int j=2;j<i;j++){
				if(i%j==0){
					primo=false;
					break;	
				}
				else{
					primo=true;
				}	
			}
			if(primo){
				if(i==3){
					cout<<2<<endl;
				}
				cout<<i<<endl;
			}
		}
	}
	return 0;
}

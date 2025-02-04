#include<iostream>
using namespace std;

void myString(char *&p,int x){
	p = new char[x];    
	for(int i = 0; i < x;i++) p[i]= 'A'+i;
	p[26]=0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}

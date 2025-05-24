#include <iostream>
using namespace std;
int main(){
	char a[5]="hola";  // Cadenas entre comillas dobles
	char b[4]={'h','o','l','a'};  
	int c[3]={1,2,3};
	char d[3][5]={"hugo","paco","luis"};
	cout<<a<<endl;
	cout<<b<<endl;//imprim e hasta encontrar un carcter especial \0
	cout<<c<<endl;// imprime direccion de memoria
	
	
	//imprime hasta encontrar \0 y seria falso entonces se acaba el bucle 
	for(char*p=a;*p!='\0';p++){
		cout<<*p<<endl;
	}
	cout<<endl;
	for(char*p=b;*p!='\0';p++){
		cout<<*p<<endl;
	}
	
	
	cout<<endl;
	for(char(*p)[5]=d;p<d+3;p++){
		
		cout<<*p<<endl;
	}
	cout<<endl;
	for(char*p=(char*)d;p<*d+15;p++){
		cout<<p<<endl;
	}
	return 0;
}
	
/*
luis
uis
is
s*/

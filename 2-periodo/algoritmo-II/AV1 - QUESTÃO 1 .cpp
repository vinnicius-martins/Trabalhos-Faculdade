#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

main() {
	int a[10], b[10], c[10], d[10];
	cout<<"Digite os 10 elementos de A: ";
	for (int i=0; i<10;i++){
		cin>>a[i];
	}
	cout<<"Digite os 10 elementos de B: ";
	for (int i=0; i<10;i++){
		cin>>b[i];
	}
	for (int i=0;i<10;i++){
		c[i]=-1;
	}
	
	for (int i=0; i<10;i++){
		for (int j=0; j<10;j++){
			if(a[i] == b[j]){
    			c[i]=a[i];
			}
		}
	}
	
	
	cout<<"Interseção de A e B: ";
	
	for (int i=0; i<10;i++){
		if(c[i] != -1){
			cout<<c[i]<<" ";
		}
		
	}
	
	
	
	for (int i=0; i<10;i++){
		d[i]=a[i];
		for (int j=0; j<10;j++){
			if(d[i]==c[j]){
				d[i]=-1;
			}
		}
	}
	
	
	cout<<endl<<"Conjunto A - B: ";
	
	for (int i=0; i<10;i++){
		if(d[i] != -1){
			cout<<d[i]<<" ";
		}
	}
	
	
	
	
	

}

 
 


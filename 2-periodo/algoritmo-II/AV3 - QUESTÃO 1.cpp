#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

main() {
	
	int v1[10],v2[10],v3[20];
cout<<"Digite os 10 elementos do primeiro vetor: ";
for (int i=0;i<10;i++) cin>>v1[i];
cout<<"Digite os 10 elementos do segundo vetor: ";
for (int i=0;i<10;i++) cin>>v2[i];

int c=0;

for(int i=0;i<10;i++){
	v3[c]=v1[i];
	v3[c+1]=v2[i];
	c+=2;
}

for (int i=0;i<20;i++)cout<<v3[i]<<" ";
}

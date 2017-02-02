#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main(){
	int t,n,m,j=0,s=0;
	cin>>n>>m;
for (int i=n;i<=m;i++){
	if (i%2==0){ 
	t=i;
		for (int k=i;k>=1;k/=10){
			j=j+k%10;
			s++;
		}
if (j%2!=0){  t=t/pow(10,(s-1));
if (t%2!=0){
	cout<<"cavab="<<i<<"\n";
}}}
	j=0;
	s=0;
}
}

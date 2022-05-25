#include <iostream>
using namespace std;
int main(){
	
//	1-masala
/*	 
	{
	
		int a,b,c,min;
		cin>>a>>b>>c;
		if(a<b){
			if(a<c) min=a;
			else min=c;
		}
		else {
			if(b<c) min =b;
			else  min=c;
		}
		cout<<min;
		
	} */
	
//	2-masala
/*	
	{
		int yil , kun; 
		cin>>yil;
		if(yil%400==0) kun = 366;
		else if(yil%4==0 and yil%100!=0) kun = 366;
		else kun = 365;
		cout<<kun;
	} */
	
//	3-masala
/*	
	{
		int a,b,m;
		cin>>a>>b;
		if(a>b){
		m=a;
		a=2*a*b;
		b=(m+b)/2;
		}
		else if(b>a){
			m=b;
		b=2*a*b;
		a=(m+a)/2;
		}
		cout<<a<<" "<<b;
		main();
		
	} */
	
//	4-masala
/*	
	{
		int oy ,kun,t=1;
		cin>>kun>>oy;
		switch(oy){
			case 1 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 2 : {
				if(kun<28)
				kun++;
				else if(kun==28){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 3 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 4 : {
				if(kun<30)
				kun++;
				else if(kun==30){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 5 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 6 : {
				if(kun<30)
				kun++;
				else if(kun==30){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 7 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 8 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 9 : {
				if(kun<30)
				kun++;
				else if(kun==30){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 10 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 11 : {
				if(kun<30)
				kun++;
				else if(kun==30){
					kun=1;
					oy++;
				}
				else t=0;
				break;
			}
			
			case 12 : {
				if(kun<31)
				kun++;
				else if(kun==31){
					kun=1;
					oy=1;
				}
				else t=0;
				break;
			}
			
			default: cout<<"Oy noto`g`ri kiritilgan! ";
			
		}
		
		if(!t) cout<<"Kun noto`g`ri kiritilgan !";
		else cout<<kun<<"."<<oy;
		main();
	} */
	
//	5 - masala
/*
	{
		int n,s=0;
		cin>>n;
		for(int i=1 ; i<=n ; i++ ){
			for(int j=1 ; j<=i/2 ; j++){
				if(i%j==0 and i!=j) s+=j;
			}
			
			if(i==s) 
				cout<<s<<" ";
			s=0;
			
		}
		main();
	} */
	
//	6-masala
/*
	{
		int n, t=1;
		cin>>n;
		for(int i=2 ; i<=n ; i++){
			for(int j=1 ; j*j<=i ; j++){
				if( i%j==0 and j!=1){
				t=0;
				break;
				}
			}
			if(t) cout<<i<<" ";
			t=1;
		}
		
		main();
	} */
	
//	7-masala
/*
	{
		int n,s1 = 0 , s2 = 0;
		
	} */
	
//	8-masala
/*
	{
		float s,s1,p,k=0;
		int n=0;
		cin>>s>>p;
		k=s;
		s1=s;
		while(s1>k/2){
			k+=s*p/100;
			s=s+s*p/100;
			n++;
		}
		cout<<n<<" Oyda "<<k;
	} */
	
//	9-masala
/*
	{
		int n,s=0,k=0;
		cin>>n;
		while(n){
			s+=n%10;
			n/=10;
		k++;	
		}
		cout<<k<<" "<<s;
		main();	
	}*/
	
//	10-masala
/*
	{
		int a,b,c,ekub,t=1;
		cin>>a>>b;
		if(b>a){
			c=a;
			a=b;
			b=c;
		}
		else if(b==a) {
		t=0;
		ekub=a;
		}
		while(t){
			c=a-b;
			if(c>b)
			a=c;
			else if(b>c){
				a=b;
				b=c;
			}
			else {
				ekub=c;;
				break;
			}
		}
		
		cout<<ekub;
		
		main();
	
	} */
	
}
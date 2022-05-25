#include <iostream>
using namespace std;
int main(){
	
//	11-masala
/*
	{
		int n , m , k=0;
		cin>>n>>m;
		while(1){
			if(n>=m)n-=m;
			else {
				cout<<n<<" "<<k;
				break;
			}
			k++;
		}
		
		main();	
	}*/

//	12-masala
/*
	{
		int n,a,max,min;
		cin>>n>>a;
		max=a;
		min=a;
		while(n-1){
			cin>>a;
			if(a>max) max=a;
			if(a<min) min=a;
			n--;
		}
		cout<<" max = "<<max<<" min = "<<min;	
	} */
	
//	13-masala
/*
	{
		int n,a,max,min,in_max=1,in_min=1;
		cin>>n>>a;
		max=a;
		min=a;
		for(int i=2 ; i<=n ; i++){
			cin>>a;
			if(a>max){
				max=a;
				in_max=i;
			}
			if(a<min){
				min=a;
				in_min=i;
			}
		}
		
		cout<<"max="<<max<<" index="<<in_max<<endl;
		cout<<"min="<<min<<" index="<<in_min;
	} */
	
//	14-masala
/*
	{
		
		int n,a,max,min,in_max=1,in_min=1;
		cin>>n>>a;
		max=a;
		min=a;
		for(int i=2 ; i<=n ; i++){
			cin>>a;
			if(a>=max){
				max=a;
				in_max=i;
			}
			if(a<min){
				min=a;
				in_min=i;
			}
		}
		cout<<"max="<<max<<" index="<<in_max<<endl;
		cout<<"min="<<min<<" index="<<in_min;	
	} */
	
//	15-masala
/*
	{
		int n,a,max,min,in_max=1,in_min=1;
		cin>>n>>a;
		max=a;
		min=a;
		for(int i=2 ; i<=n ; i++){
			cin>>a;
			if(a>max){
				max=a;
				in_max=i;
			}
			if(a<min){
				min=a;
				in_min=i;
			}
		}
		if(in_max<in_min)
		cout<<"max="<<max<<" index="<<in_max<<endl;
		else
		cout<<"min="<<min<<" index="<<in_min;
	} */
	
//	16-masala
/*
	{
		int n,a,max,min,in_max=1,in_min=1;
		cin>>n>>a;
		max=a;
		min=a;
		for(int i=2 ; i<=n ; i++){
			cin>>a;
			if(a>=max){
				max=a;
				in_max=i;
			}
			if(a<=min){
				min=a;
				in_min=i;
			}
		}
		if(in_max>in_min)
		cout<<"max="<<max<<" index="<<in_max<<endl;
		else
		cout<<"min="<<min<<" index="<<in_min;
		main();
	} */
	
//	17-masala
/*
	{
		int n,a,min=0,t=1,k=0;
		cin>>n;
		for(int i=0 ; i<n ; i++){
			cin>>a;
			if(t and a>0){
				min=a;
				t=0;
				k=1;
			}
			if(a>0 and a<min and k)
			min=a;
		}
		cout<<min;
		main();
	}*/
	
//	18-masala
/*
	{
		int n,max_t=0,a,index=0;
		cin>>n;
		for(int i=0 ; i<n ; i++){
			cin>>a;
			if(a%2==1 and a>max_t){
			max_t=a;
			index=i+1;
		}
		}
		cout<<max_t<<" "<<index;
		main();
	}*/
	
//	19-masala
/*
	{
		int n,a,max,k=1;
		cin>>n>>a;
		max=a;
		for(int i=1 ; i<n ; i++){
			cin>>a;
			if(a>=max){
				max=a;
				k=i+1;
			}
		}
		cout<<max<<" "<<n-k;
	}*/
	
//	20-masala
/*
	{
		int n,min1,min2,a,k;
		cin>>n>>a;
		min1=a;
		for(int i=1 ; i<n ; i++){
			cin>>a;
			if(i==1) min2=a;
			if(a<min1){
				k=min1;
				min1=a;
			}
			if(a<min2 and a>min1)
			min2=a;
			if(k<min2) min2=k;
		}
		cout<<min1<<" "<<min2;
		main();
	}*/
	
	
	
}
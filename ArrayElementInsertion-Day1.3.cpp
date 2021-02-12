#include<iostream>

using namespace std;

int main()
{
	int arr[100]={9,19,29,39,49,59,69,79};
	int key=99 , i=0 , pos=4 ,n=8 ;
	
	for( i=n;i>pos;i--){
		arr[i]=arr[i-1];
		
	}
	    
	       
	        
	
	arr[pos]=key;
		
	for(int i=0;i<n;i++)
	    printf("\t%d\n",arr[i]);	
		        
}

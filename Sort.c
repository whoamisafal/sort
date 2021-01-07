#include<stdio.h>
#include<string.h>
#define size 25
void main(){
	char name[size][size],temp[size];
	int i=0,j,num;
	//message for user
	printf("How many names you have to enter?\t");
	//user input
	scanf("%d",&num);
	
	// message for user
	printf("Enter %d names:\n",num);
	
	
	// Take a input 
	for(;i<=num;i++)gets(name[i]);
	
	//sort in ascending order
	for(i=0;i<=num;i++){
		for(j=i+1;j<=num;j++){
			if(strcmp(name[i],name[j])>0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	//output
	printf("Name sort in ascending order:\n");
	for(i=0;i<=num;i++)puts(name[i]);
	getch();
	return;
	
}

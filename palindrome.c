#include<stdio.h>
#include<string.h>

//Given two strings a and b of equal length, 
//return whether it is possible to cut both strings at a common point such that the first part of a and the second part of b form a palindrome.
//Palindrome is called sentences, words and numbers, which are also the same to be read in reverse order.

int main(){
	
	char a[20]="";
	char b[20]="";
	printf("Enter two strings a and b:\n");
	scanf("%s %s",a,b);
	int i,j,count=0,count2=0;
	int l=strlen(a);
	for(i=0;i<l/2;i++){
		for(j=l-1;j>i;j--){
			if(a[i]!=b[j]){
				break;
			}
			else{
				count++;
			}
		}
		if(count!=0){
			printf("TRUE");
			break;
		}
		
		
	}
	if(count==0){
		for(j=0;j<l/2;j++){
			if(b[j]!=b[l-j-1]){
				break;
			}
			else{
				count2++;
			}
		}
	   if(count2!=0){
	   	printf("TRUE");
	   }
	   else{
			printf("FALSE");
		}
	}

	return 0;
}

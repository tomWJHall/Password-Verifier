#include <stdio.h>
#include <string.h>

int main() {
	char mdp[30];
	int thereIs = 0;
	int numberIs = 0;
    printf("Enter your password: \n");
	scanf("%s", mdp);
	if(strlen(mdp) >= 7){
		for(int i = 0; i <= strlen(mdp); i++){
			if(mdp[i]=='!' || mdp[i]=='@' || mdp[i]=='#' || mdp[i]=='$' || mdp[i]=='%' || mdp[i]=='&' || mdp[i]=='*'){
	thereIs += 1;
			}
		}
	for(int j = 0; j <= strlen(mdp); j++){
	if(mdp[j]=='0' || mdp[j]=='1' || mdp[j]=='2' || mdp[j]=='3' || mdp[j]=='4' || mdp[j]=='5' || mdp[j]=='6' || mdp[j]=='7' || mdp[j]=='8' || mdp[j]=='9'){
	numberIs += 1;
}
}
		if(thereIs >= 2 && numberIs >= 2){
			printf("Strong");
		}
		else{
			printf("Weak");
		}
	}
	else{
		printf("Weak");
	}
}

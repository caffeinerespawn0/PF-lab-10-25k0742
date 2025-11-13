#include<stdio.h>
#include<string.h>
int main(){
char word[4][10]={
	"Apple",
	"Grapes",
	"Banana",
	"Oranges"
	};
for(int i=0;i<4;i++){
    printf("%s\n",word[i]);
    for(int j=0;word[i][j]!='\0';j++){
        printf("%c\n",word[i][j]);
    }
}
return 0; 
}

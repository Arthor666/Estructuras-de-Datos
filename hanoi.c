#include<stdlib.h>
#include<stdio.h>
//Hola
int main(){
int n=0;
scanf("%d",&n);
hanoi(n,'a','b','c');
return 0;
}
void hanoi(int n,char a,char b, char c){
if(n==1){
//No me acuerdo para que era esto
printf("%c->%c\n",a,c);
}else{
hanoi (n-1,a,c,b);
printf("%c->%c\n",a,c);
hanoi(n-1,b,a,c);
}
return 0;
}


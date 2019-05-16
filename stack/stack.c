#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

int top=-1;
int stack[MAX];
void push();
void pop();
void display();

void main()
{
int c;
while(1){

printf("\n**** Stack Menu ***\n");
printf("\n1.Push\n2.pop\n3.Display\n4.exit");
scanf("%d",&c);

switch(c){

case 1: push();break;
case 2: pop();break;
case 3: display();break;
case 4: exit(0);
default: printf("\nWrong choice");
}//switch

}//while

}
void push(){

int val;
if(top==MAX-1){

printf("\nStack Full");
}
else{
printf("\number enter..:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop(){

if(top==-1){

printf("\nStack empty...");
}
else{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
void display(){

int i;
if(top==-1)
printf("\nstack empty");
else{

printf("\nStack is...\n");
for(i=top;i>=0;i--){

printf("%d\n",stack[i]);
}
}
}

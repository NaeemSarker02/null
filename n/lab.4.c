#include<stdio.h>
int max_size=10;
stack[10];
int top=-1;
int sz=0;
void push(int val){
    sz++;
   if(top==max_size){
    printf("Stack full\n");

   }
   else{
    top=top+1;
    stack[top]=val;
   }
}
void pop(){
    sz--;
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        top=top-1;
    }

}
int main(){
    push(10);
    push(20);
    push(80);
    pop();
    push(50);
    push(30);
    pop();
    for(int i=0;i<sz;i++){
        printf("%d ",stack[i]);
    }
    return 0;
}

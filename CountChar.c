//This Code takes in a string and displays its length!

#include<stdio.h>
void main(){
    char name[100];
    printf("Enter a String: ");
    int x=printf(fgets(name,sizeof(name),stdin));
    printf("The length of the String:%d",x-1);
}
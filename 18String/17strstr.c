// https://www.javatpoint.com/c-strstr#:~:text=The%20strstr%20%28%29%20function%20returns%20pointer%20to%20the,substring%20to%20be%20searched%20in%20the%20full%20string.

#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[100]="Nayan Patel Ashokbhai";    
  char *sub;    
  sub=strstr(str,"Patel");    
  printf("\nSubstring is: %s",sub);    
 return 0;    
}  

/*
Output:
Substring is: Patel Ashokbhai
*/
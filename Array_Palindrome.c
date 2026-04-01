#include <stdio.h>

int main() {
int num, a[10], i = 0, j;

printf("Enter a number: ");      
scanf("%d", &num);      
  
   
while (num != 0) {      
    a[i] = num % 10;      
    num = num / 10;      
    i++;      
}      
  
 int flag=1;     
for (j = 0; j < i/2; j++) {      
    if (a[j] != a[i - j - 1]) {      
              
         flag=0;
         break;
    }      
}      
  if(flag==1)
    printf("Number is Palindrome"); 
  else
    printf("Number is not Palindrome");
  
return 0;

}

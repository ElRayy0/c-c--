
// pointers 

#include<stdio.h>
int main(){
    int a = 7; 
    int *ptr; 
    ptr = &a; 

    printf("Adress of a: %p\n", ptr);
    printf("Value of a: %d\n", *ptr);
    return 0;
}

#include <stdio.h>
int main(){
    int n = 50;
    int *p = &n;

    printf("%p\n", p);  //hexadecimal
    printf("%i\n", *p);  // value 50

}

// arrays
#include<stdio.h>
int main(void){ 
    int lengh = get_int("How many scores? "); 
    int scores[lengh];
    int result = 0; 
    for(int i = 0; i < lengh; i++){
        scores[i] = get_int("number: ");
        result += scores[i];
    }
    printf("average %f\n", result / (float) lengh);
}

// strings in C 
# include<stdio.h>
int main(void){
    char *s = "Hi!"; 
    printf("%s\n", s);
}


// scanf for integers
#include<stdio.h>
int main(void){
    int x; 
    printf("x: ");
    scanf("%i", &x);
    printf("x %i \n", x);
}

// scanf for strings

#include<stdio.h>
#include<stdlib.h>
int main(void){
    char s[5]; 

    printf("s: "); 
    scanf("%s", s); 
    printf("s %s \n", s);
}

// fgets
#include<stdio.h>
int main(void){
    char string[30]; 
    printf("write a fuckin sentence! ");
    fgets(string, sizeof(string), stdin); 
    printf("%s\n", string);
    return 0;
}

// scanf

#include<stdio.h>
int main(void){
    int x; 
    printf("x :"); 
    scanf("%i", &x);
    printf("x %i \n", x); 
    return 0;

}
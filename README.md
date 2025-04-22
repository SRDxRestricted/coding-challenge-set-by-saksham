# coding-challenge-set-by-saksham

done in c

1. Fibonacci Series (Easy)
Problem:
Write a program that takes a number `n` and prints the first `n` Fibonacci numbers.
Solution:
#include <stdio.h>
int main(){
    int n;
    printf("Please enter the number of terms in fibonacci series :");
    scanf("%d",&n);
    int starting_number=0;
    int sum=1;
    for(int i = 0; i<=n ; i++){
        printf("%d ", starting_number);
        int result=starting_number+sum;
        starting_number=sum;
        sum=result;

    }  
    return 0;  

}


Prime Numbers Till N (Easy)
Problem:
Write a program that takes an integer `n` as input and prints all the prime numbers less than or
equal to `n`.
Solution:
#include<stdio.h>
int main(){
    int n;
    int j;
    printf("Enter the n value :");
    scanf("%d", &n);
    if(n == 1){
        printf("n is neither prime nor composite");
    }    
    else if(n == 2){
        printf("n is a prime number");
    }
    else{
        for(int i=3;i<n;i++){
            if(n % i==0){
                j=0;
            }            
        }
        if(j==0){
            printf("n is not a prime number");
        }
        else{
            printf("n is a prime number");
        }
    }
}


3. Vowel and Consonant Counter (Medium)
Problem:
Write a program that takes a string input and counts the number of vowels and consonants in it.
Ignore spaces and punctuation, and treat uppercase and lowercase letters the same.
Solution:
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
fgets(str, sizeof(str), stdin);
int count_of_vowels=0;
int count_of_consonants=0;
for(int i=0; i<=100 ; i++){
    char ch=str[i];
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        count_of_vowels++;
    }
    else if (ch == 'B' || ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N' || ch == 'P' ||
        ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'V' || ch == 'W' ||
        ch == 'X' || ch == 'Y' || ch == 'Z' ||
        ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' ||
        ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'p' ||
        ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'v' || ch == 'w' ||
        ch == 'x' || ch == 'y' || ch == 'z') {
        count_of_consonants++;
    }
}   
printf("total number of vowels are %d", count_of_vowels);
printf("total number of consonants are %d", count_of_consonants);
return 0;   


}


4. Center-Aligned Star Triangle (Hard)
Problem:
Write a program that takes a number `n` and prints a center-aligned triangle of stars with `n` rows.
Solution:
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

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
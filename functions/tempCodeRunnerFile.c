#include<stdio.h>
void prime(int i){
    int count;
    for(count=1;count<=i;count++){
        i % count==0;
    }
               printf("count = %d",count);
                    if(count==2){
                        printf("Prime number");
                    }
                    else{
                        printf("Not prime number");
                    }
    
}

void main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    prime(a);
}
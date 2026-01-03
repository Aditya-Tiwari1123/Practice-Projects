#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int num_gen(int num){
    srand(time(0));
    num = rand()%10;
    return num;
}
int main(){
    int a;
    a = num_gen(a);
    if(a<3){
        printf("R+N");
    }else if(3<a<7){
        printf("R+T");
    }else{
        printf("R+C");
    }
    printf("%d",a);
    return 0;
}
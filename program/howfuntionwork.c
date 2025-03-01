#include<stdio.h>
void england(){
    printf("you are in england\n");//4
    return;//5
}
void china(){
    printf("you are in china\n");
    england();//calling england->3
    return;//6
}
void india(){
    printf("you are in india\n");
    china();//calling china->2
    return;//7
}
int main(){
    india();//star and call india->1
    return 0;//8
}
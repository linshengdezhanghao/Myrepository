#include <stdio.h>
#include <stdlib.h>


using namespace std;

void example(char acWelcome[]){
    printf("%d",sizeof(acWelcome));
    return;
}
int main(){
    char acWelcome[]="Welcome to Huawei Test";
    example(acWelcome);
    return 0;
}

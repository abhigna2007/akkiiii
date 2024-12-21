#include<stdbool.h>
int main (){
    bool a = true;
    bool b = false;
    bool c = 1;
    bool d = 0;

    int e = 11;
    int f = b? 10:20;
    printf("size of bool: %zu bytes\n", sizeof(bool));

    printf("the value of f is %d\n", f);

    printf("a is %s\n", a? "true": "false");

    printf("b is %s\n", b? "true": "false");

    printf("c is %s\n", c? "true": "false");

}






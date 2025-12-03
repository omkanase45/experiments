#include <stdio.h>

int main() {
    int a=10, b=3;

    //Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n\n",a%b);

    //Relational Operators
    printf("Relational Operators:\n");
    printf("a==b:%d\n",a==b);
    printf("a !=b:%d\n",a !=b);
    printf("a>b:%d\n",a>b);
    printf("a<b:%d\n",a<b);

    //Logical Operators
    printf("logicaal Operators:\n");
    printf("(a>b &&b>0):%d\n",(a>b &&b>0));
    printf("(a>b||b==0):%d\n",(a>b||b==0));
    printf("!(a==b):%d\n\n",!(a==b));

    //Assignment Operators
    printf("Assignment Operators:\n");
    int x=a;
    x+=b;
    printf("x+=b:%d\n",x);
    x-=b;
    printf("x-=b:%d\n",x);

    //Increment/Deccrement
    printf("\nIncrement/Deccrement:\n");
    printf("a++=%d\n",a++);
    printff("Now a=%d\n",a);
    prinntf("--b=%d\n",--b);

    return 0;
}
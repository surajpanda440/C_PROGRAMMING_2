#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int stack[10];
int top=-1;
void push(int value){
    stack[top++]=value;
   
}
int pop(){
    return stack[top--];
}
int ope(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
    char prefix[10];
    int len,value,opr1,opr2,res;
    printf("Enter the prefix expression");
    scanf("%s",&prefix);
    len=strlen(prefix);
    for(int i=len;i>0;i--){
        switch(ope(prefix[i]))
        {
            case 0:
            value=prefix[i];
            push(value);
            break;

            case 1:
            opr1=pop();
            opr2=pop();
            switch(prefix[i])
            {
                case '+':
                res=opr1+opr2;
                break;

                case '-':
                res=opr1-opr2;
                break;

                case '*':
                res=opr1*opr2;
                break;

                case'/':
                res=opr1/opr2;
                break;

                case'^':
                pow(opr1,opr2);
                break;
            }
            push(res);
        }
    }
    printf("Result is %d",stack[top]);


}

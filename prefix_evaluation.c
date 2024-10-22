#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
	 int op1,op2,result;
     char ch;
     while(*Prefix_exp!='\0')
     {
         ch=*Prefix_exp++;

         if(isdigit(ch))
         {
             push(stk,ch-'0');
         }
         else
         {
             op1=pop(stk);
             op2=pop(stk);
             switch(ch)
             {
                 case '+':result=op1+op2;break;
                 case '-':result=op1-op2;break;
                 case '*':result=op1*op2;break;
                 case '/':result=op1/op2;break;

             }
             push(stk,result);
         }
     }
     return pop(stk);

}

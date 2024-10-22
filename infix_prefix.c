#include "main.h"

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{

	int i=0;
	char ch;
	while(*Infix_exp!='\0')
	{
	    ch=*Infix_exp++;

	    if(isdigit(ch))
	    {
	        Prefix_exp[i++]=ch;
	    }
	    else if(ch==')')
	    {
	        push(stk,ch);
	    }
	    else if(ch=='(')
	    {
	        while(stk->top!=-1 && peek(stk)!=')')
	        {
	            Prefix_exp[i++]=pop(stk);
	        }
	        pop(stk);
	    }
	    else
	    {
	        while(stk->top!=-1&&(priority(peek(stk))>priority(ch)))
	        {
	             Prefix_exp[i++]=pop(stk);
	        }
		while(stk->top!=-1&&(priority(peek(stk))>priority(ch)))
                {
                     Prefix_exp[i++]=pop(stk);
                }

	        push(stk,ch);
	    }

	}

	while(stk->top!=-1)
	{
	    Prefix_exp[i++]=pop(stk);
	}

	Prefix_exp[i]='\0';
	return 0;
	
}

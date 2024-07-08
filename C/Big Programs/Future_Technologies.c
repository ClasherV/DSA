#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX],infix[MAX],postfix[MAX];
int top=-1;
void push(char c)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top]=c;
    }
}
char pop()
{
	if(top==-1)
	{
		printf("Stack Underflow");
	}
	else 
	{
		char c=stack[top];
		top--;
		return c;
	}
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int space(char c)
{
	if(c==' '||c=='\t')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int precedence(char symbol)
{
	switch(symbol)
	{
		case '^': return 3;
		case '*':
		case '/': return 2;
		case '+':
		case '-': return 1;
		          break;
		default: return -1;
	}
}
char associativity(char symbol)
{
	switch(symbol)
	{
		case '^': return 'R';
		default: return 'L';
	}
}
void infixToPostfix()
{
    int i,j=0;
    char symbol,next;
	for (i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
		if(!space(symbol))
		{
			if((symbol>='a'&&symbol<='z')||(symbol>='A'&&symbol<='Z')||(symbol>='0'&&symbol<='9'))
			{
				postfix[j++]=symbol;
			}
			else if(symbol=='(')
			{
				push(symbol);
			}
			else if(symbol==')')
			{
				while((next=pop())!='(')
				{
					postfix[j++]=next;
				}
			}
			else
			{
				while(!isEmpty()&&(precedence(symbol)<precedence(stack[top])||precedence(symbol)==precedence(stack[top])&&associativity(symbol)=='L'))
				{
					postfix[j++]=pop();
				}
				push(symbol);
			}
		}
	}
	while(!isEmpty())
	{
		postfix[j++]=pop();
	}
	postfix[j]='\0';
}
void display()
{
	int i=0;
    printf("The Equivalent Postfix Expression is: ");
    while(postfix[i])
    {
        printf("%c",postfix[i++]);
    }
    printf("\n");
}
int main()
{
    printf("Enter the Infix Expression: ");
    gets(infix);
	infixToPostfix();
	display();
	return 0;
}

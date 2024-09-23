#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void push(int s[10],int*top,int item)
	{
		*top=*top+1;
		s[*top]=item;
	}
	int pop(int s[10],int*top)
	{
		int item;
		item=s[*top];
		*top=*top-1;
		return item;
	}
	int main()
{
	char post[100],ch;
	int s[10],top=-1,res, a,b,i;
	printf("enter the valid numerical postfix expression");
	scanf("%s",post);
	for(i=0;i<strlen(post);i++)
	{
		ch=post[i];
		if(isdigit(ch))
		{
			push(s,&top,ch-'0');
		}
		else{
			b=pop(s,&top);
			a=pop(s,&top);
			if(ch=='+')res= a+b;
			if (ch=='-')res=a-b;
			if(ch=='*')res=a*b;
			if(ch=='/')res=a/b;
			push(s,&top,res);
		}
	}
	
	
	printf("%d is evaluated",res);
}
			
			
		

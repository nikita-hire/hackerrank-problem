
#include<stdio.h>
int a[5],top=-1,i,ch;
void push()
{
if(top>5)
{
printf("Stack overflow\n");
return;
}
else
{
    top++;
printf("Enter element : ");
scanf("%d",&a[top]);
}
}
void pop()
{
if(top==-1)
{
printf("Stack underflow\n");
return;
}
else
{
printf("element deleted :%d\n ",a[top]);
top--;
}
}
void display()
{
printf("ELements of stack are : \n");
if(top==-1)
{
printf("Stack underflow\n");
}
else
{
for(i=top;i>=0;i--)
printf("%d \n",a[i]);
}
}
int main()
{
printf("******Stack Operation******\n ");
printf("\n1.PUSH\n");
printf("2.POP\n");
printf("3.DISPLAY\n");
printf("4.EXIT\n");
do
{
printf("Choose the operation:(1/2/3/4) : ");
scanf("%d",&ch);
switch(ch)
{
       case 1 : push();
                     break;
       case 2:  pop();
                     break;
      case 3: display();
                   break;
     case 4: return 0;
}
}while(ch<4);
return 0;
)


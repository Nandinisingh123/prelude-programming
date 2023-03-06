#include<iostream>
using namespace std;
int st[100];
int n,top,x,i;
void push();
void pop();
void display();

int main()
{
int ch;
cout<<"Enter the number of elements in the stack";
cin>>n;
i=1;
top=-1;
while(i)
{
cout<<"Enter your choice"<<endl;
cout<<"1.push\n2.pop\n3.display\n4.Exit\n";
cin>>ch;
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:i=0;
break;
default:cout<<"Wrong Choice!!"<<endl;
break;
}
}
return 0;
}

void push()
{
if(top>=n-1)
{
cout<<"Stack is overflow"<<endl;
}
else
{
cout<<"Enter the value to be added:";
cin>>x;
top++;
st[top]=x;
}
}

void pop()
{
if(top<=-1)
{
cout<<"Stack is overflow"<<endl;
}
else
{
cout<<"Value:"<<st[top]<<"Got deleted."<<endl;
top--;
}
}

void display()
{
if(top>=0)
{
cout<<"Elements in the stack are:";
for(i=top;i>=0;i--)
cout<<st[i]<<" ";
cout<<"\n";
}
else
{
cout<<"Stack is empty."<<endl;
}

}

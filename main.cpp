#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<stdio.h>
using namespace std;
#define N 100

void main()
{
	int i,x,y,z,b,fanwei,n1,n2,n3;
	int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
	char t0[20],t1[20],t2[20],t3[20],t4[20],t5[20],t6[20],t7[20],t8[20],t9[20];
	string x0,x1,x2,x3,x4,x5,x6,x7,x8,x9;
	cout<<"请输入题目的数量："<<endl;
	cin>>b;
	cout<<"请输入数值范围："<<endl;
	cin>>fanwei;
	cout<<"请选择输出方式（屏幕/打印）：（1/0）"<<endl;
	cin>>z;
	if(z==1)
	{
		for(i=0;i<b;i++)
		{
			n1=rand()%4;
			char a[N]={'+','-','*','/'};
			x=rand()%10;
			y=rand()%3;
			int yone=rand()%3;
			int ytwo=rand()%3;
			int ythree=rand()%3;
			int yfour=rand()%3;
			int yfive=rand()%3;
			int ysix=rand()%3;

			c0=rand()%fanwei;itoa(c0,t0,10);string z0=t0;
			c1=rand()%fanwei;itoa(c1,t1,10);string z1=t1;
			c2=rand()%fanwei;itoa(c2,t2,10);string z2=t2;
			c3=rand()%fanwei;itoa(c3,t3,10);string z3=t3;
			c4=rand()%fanwei;itoa(c4,t4,10);string z4=t4;
			c5=rand()%fanwei;itoa(c5,t5,10);string z5=t5;
			c6=rand()%fanwei;itoa(c6,t6,10);string z6=t6;
			c7=rand()%fanwei;itoa(c7,t7,10);string z7=t7;
			c8=rand()%fanwei;itoa(c8,t8,10);string z8=t8;
			c9=rand()%fanwei;itoa(c9,t9,10);string z9=t9;
			x0=z0+a[n1]+z1;
			switch(y){
			case 0:
				{x1='('+x0+')'+a[n1]+z2;break;}
			case 1:
				{x1=z2+a[n1]+'('+x0+')';break;}
			case 3:
				{x1=x0+a[n1]+z2;break;}
			}
			switch(yone){
			case 0:
				{x2='('+x1+')'+a[n1]+z3;break;}
			case 1:
				{x2=z3+a[n1]+'('+x1+')';break;}
			case 2:
				{x2=z3+a[n1]+x1;break;}
			}
			switch(ytwo){
			case 0:
				{x3='('+x2+')'+a[n1]+z4;break;}
			case 1:
				{x3=z4+a[n1]+'('+x2+')';break;}
			case 2:
				{x3=z4+a[n1]+x2;break;}
			}
			switch(ythree){
			case 0:
				{x4='('+x3+')'+a[n1]+z5;break;}
			case 1:
				{x4=z5+a[n1]+'('+x3+')';break;}
			case 2:
				{x4=z5+a[n1]+x3;break;}
			}
			switch(yfour){
			case 0:
				{x5='('+x4+')'+a[n1]+z6;break;}
			case 1:
				{x5=z6+a[n1]+'('+x4+')';break;}
			case 2:
				{x5=z6+a[n1]+x4;break;}
			}
			switch(yfive){
			case 0:
				{x6='('+x5+')'+a[n1]+z7;break;}
			case 1:
				{x6=z7+a[n1]+'('+x5+')';break;}
			case 2:
				{x6=z7+a[n1]+x5;break;}
			}
			switch(ysix){
			case 0:
				{x7='('+x6+')'+a[n1]+z8;break;}
			case 1:
				{x7=z8+a[n1]+'('+x6+')';break;}
			case 2:
				{x7=z8+a[n1]+x6;break;}
			}

			
			n2=rand()%3;
			switch(x){
			case 0:
				{i=i-1;break;}
			case 1:
				{i=i-1;break;}
			case 2:
				{x0=z0+a[n1]+z1;
				cout<<x0<<endl;break;}
			case 3:
				{
					if(n2==2)
					{x1='('+x0+')'+a[n1]+z2;
					cout<<x1<<endl;break;}
					if(n2==1)
					{x1=z2+a[n1]+'('+x0+')';
					cout<<x1<<endl;break;}
					if(n2==0)
					{x1=x0+a[n1]+z2;
					cout<<x1<<endl;break;}
				}
			case 4:
				{
				    if(n2==2)
					{x2='('+x1+')'+a[n1]+z3;
					cout<<x2<<endl;break;}
					if(n2==1)
					{x2=z3+a[n1]+'('+x1+')';
					cout<<x2<<endl;break;}
                    if(n2==0)
					{x2=z3+a[n1]+x1;
					cout<<x2<<endl;break;}
				}
			case 5:
				{
				    if(n2==2)
					{x3='('+x2+')'+a[n1]+z4;
					cout<<x3<<endl;break;}
					if(n2==1)
					{x3=z4+a[n1]+'('+x2+')';
					cout<<x3<<endl;break;}
                    if(n2==0)
					{x3=z4+a[n1]+x2;
					cout<<x3<<endl;break;}
				}
			case 6:
				{
				    if(n2==2)
					{x4='('+x3+')'+a[n1]+z5;
					cout<<x4<<endl;break;}
					if(n2==1)
					{x4=z5+a[n1]+'('+x3+')';
					cout<<x4<<endl;break;}
                    if(n2==0)
					{x4=z5+a[n1]+x3;
					cout<<x4<<endl;break;}
				}
			case 7:
				{
				    if(n2==2)
					{x5='('+x4+')'+a[n1]+z6; 
					cout<<x5<<endl;break;}
					else if(n2==1)
					{x5=z6+a[n1]+'('+x4+')';
					cout<<x5<<endl;break;}
                    else if(n2==0)
					{x5=x4+a[n1]+z6;
					cout<<x5<<endl;break;}
				}
			case 8:
				{
				    if(n2==2)
					{x6='('+x5+')'+a[n1]+z7;
					cout<<x6<<endl;break;}
					if(n2==1)
					{x6=z7+a[n1]+'('+x5+')';
					cout<<x6<<endl;break;}
                    if(n2==0)
					{x6=x5+a[n1]+z7;
					cout<<x6<<endl;break;}
				}
			case 9:
				{
				    if(n2==2)
					{x7='('+x6+')'+a[n1]+z8;
					cout<<x7<<endl;break;}
					if(n2==1)
					{x7=z8+a[n1]+'('+x6+')';
					cout<<x7<<endl;break;}
                    if(n2==0)
					{x7=x6+a[n1]+z8;
					cout<<x7<<endl;break;}
				}
			}
		}
	}
}

						  
						    





					
						 

				

				

			
		
	
	


#include<stdio.h>
#include<conio.h>
void vol();
void main();
{
int r, h;
clrscr();
printf("enter radius & height);
  scanf("%d %d", &r,&h);
vol(r,h)
getch();
}
void vol(int r, int h)
{
  int v;
v=Pie*(r*r)*h
  printf("vol= %d", v);
}

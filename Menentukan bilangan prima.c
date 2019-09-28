#include<stdio.h>

main ()
{
int x,y;

printf ("masukkan nilai :");
scanf ("%d",&x);

y=0;
for(int i=1; i<=x; i++)
if(x%i==0)
y++;
if(y==2)
printf(" merupakan bilangan prima");
else
printf(" bukan merupakan bilangan prima");
}

//sumber:http://filendud.blogspot.com/2012/02/coding-bilangan-prima-pada-bahasa-c.html
/* Menentukan apakah ini bilangan prima*/

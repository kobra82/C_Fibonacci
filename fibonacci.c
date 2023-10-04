#include <stdio.h>
#include <conio.h>
#include <windows.h>
int i,n,fibo,n1,n2;
int main()
{
n1=1;
n2=2;
fibo=0;
system("cls");
printf("\n");
printf(" Inserisci numero termini da calcolare: ");
scanf("%d",&n);
printf("\n");
printf(" SEQUENZA DI FIBONACCI\n");
printf("\n");
printf(" 01) 1\n");
printf(" 02) 2\n");
for (i=3;i<=n;i++)
{
fibo=n2+n1;
n1=n2;
n2=fibo;
if (i<10)
{
printf(" 0%d) %d\n",i,fibo);
}
else
{
printf(" %d) %d\n",i,fibo);
}
}
printf("\n");
getch();
}

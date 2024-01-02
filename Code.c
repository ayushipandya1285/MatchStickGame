#include <stdio.h>
void matchstick(int);
struct match
{
 int ms;
 int cpick;
 int pick;
}m;
void matchstick(ms1)
{
 if(ms1==1)
 {
 printf("\n Only one matchstick left and you have to choose it.\n So you loose, Better luck next time.\n");
 exit(0);
 }
printf("\n Enter the number of matchstick to pick:");
scanf("%d",&m.pick);
if(m.pick<5 && m.pick>0)
{
 ms1=ms1-m.pick;

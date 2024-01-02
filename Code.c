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
printf ("\n Match sticks left: %d",ms1);
 m.cpick=5-m.pick;
printf ("\n Computer chooses: %d", m.cpick);
 ms1=ms1-m.cpick;
printf ("\n Match sticks left: %d",ms1);
 matchstick(ms1);
 }
 else
 printf ("Invalid no \n Enter sticks bet 1 to 4 only.");
 matchstick(ms1);
 }
 int main()
{
 m.ms=21;
 printf ("There are total 21 matchsticks\n Whoever is forced to pick a last match stick loses the game.\n");
 printf("pick 1 or 2 or 3 or 4 matches\n");
matchstick(m.ms);
 return 0;
}


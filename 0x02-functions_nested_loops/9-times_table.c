#include "main.h"

void times_table()
{
int row, col;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
{
if(col != 9)
{
printf("%3d, ", row*col);
}
else
{
printf("%3d$",row*col);
}
}
printf("\n");
}
}

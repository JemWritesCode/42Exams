// Fail - Incomplete
// Still working on this one.

/* Testing Only! Don't turn in! */
#include <stdio.h> //printf()
#include <unistd.h> // write()

void	ft_putc(char c)
{
	write(1, &c, 1);
}


//FUNCTIONS TO TURN IN //////////////////////////////////////////////////////////////////////////////////
#include "flood_fill.h"





void  flood_fill(char **tab, t_point size, t_point begin)
{
	int x = 0;
	int y = 0;
	int tabx = 0;

	while (y < size.y){ 
		while (x <= (size.x + (size.x - 1))) // add room for spaces.
		{
			if(x == begin.x && y == begin.y - 1) // keep in mind  y axis starts at 0 but specs wants it as if it starts at 1
				tab[y][x] = 'F'; // this is bus error...also I think **tab is byval in this case, so would it keep the value outside of this function?
				//loop within boundaries
				//flood horizontally
					//flood vertically for each F that was filled horizontally.
			x++;
		}
		ft_putc('\n');
		y++;
		x = 0;
		tabx = 0;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Testing Only Below! */
void	print_tab(char **area,t_point size){
	int x = 0;
	int y = 0;

	while (y < size.y){ 
		while (x <= (size.x + (size.x - 1))) // this seg faults when it goes too far. How would I check boundaries then? though I don't think it matters for the function itself. I'm using size for testing but need to learn that.
		{
			ft_putc(area[y][x]);
			x++;
		}
		ft_putc('\n');
		y++;
		x = 0;
	}
}

int main(void)
{
	//char **area;
	t_point size = {8, 5};
	t_point begin = {2, 2};
	char *zone[] = {
		"1 1 1 1 1 1 1 1",
		"1 0 0 0 1 0 0 1",
		"1 0 0 1 0 0 0 1",
		"1 0 1 1 0 0 0 1",
		"1 1 1 0 0 0 0 1",
	};

	//area = make_area(zone); //jem: what's make area supposed to do? Both are 2d arrays, no? maybe it adds the newlines and null terminators
	//print_tab(zone); // jem: this is what prints the first "map"
	flood_fill(zone, size, begin); // jem: then flood it.
	ft_putc('\n');
	print_tab(zone, size); // jem: print it again after flood.
	ft_putc('\n');
	return (0);
}
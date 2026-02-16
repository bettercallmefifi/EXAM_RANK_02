typedef struct s_point 
{
    int x;
    int y;
} t_point;

void flood_fill(char **tab, t_point size, t_point begin) 
{
    char target = tab[begin.y][begin.x];
    if (target == 'F')
        return;

    tab[begin.y][begin.x] = 'F';

    // Check left
    if (begin.x > 0 && tab[begin.y][begin.x - 1] == target)
        flood_fill(tab, size, (t_point){begin.x - 1, begin.y});

    // Check right
    if (begin.x < size.x - 1 && tab[begin.y][begin.x + 1] == target)
        flood_fill(tab, size, (t_point){begin.x + 1, begin.y});

    // Check up
    if (begin.y > 0 && tab[begin.y - 1][begin.x] == target)
        flood_fill(tab, size, (t_point){begin.x, begin.y - 1});

    // Check down
    if (begin.y < size.y - 1 && tab[begin.y + 1][begin.x] == target)
        flood_fill(tab, size, (t_point){begin.x, begin.y + 1});
}
#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    norows = len(grid)

    if grid != []:
        nocolumns = len(grid[0])

    for a in range(norows):
        for b in range(nocolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == norows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == nocolumns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter

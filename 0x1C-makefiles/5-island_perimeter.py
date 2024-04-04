#!/usr/bin/python3
""" A grid module """


def island_perimeter(grid):
    """Returns the perimeter of an island indicated in grid"""

    perimeter = 0
    nrows = len(grid)

    if grid != []:
        ncolumns = len(grid)

    for i in range(nrows):
        for j in range(ncolumns):
            if grid[i][j] == 1:
                if (i - j) == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == nrows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (i - 1) == -1 or grid[i][j - 1] == 0:
                    perimeter += 1
                if (b + 1) == ncolumns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter

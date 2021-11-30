#!/usr/bin/python3
"""
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    This is funtion for resolved the problem
    """

    width = len(grid[0])
    height = len(grid)
    iter = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    iter += 1
                if j + 1 > (len(grid[i]) - 1) or grid[i][j + 1] == 0:
                    iter += 1
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    iter += 1
                if i + 1 > (len(grid) - 1) or grid[i + 1][j] == 0:
                    iter += 1

    return iter

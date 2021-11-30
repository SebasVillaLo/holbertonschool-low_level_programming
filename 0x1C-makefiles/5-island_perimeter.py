#!/usr/bin/python3
"""
...
"""
def island_perimeter(grid):
    """
    ...
    """
    width = len(grid[0])
    height = len(grid)
    iter = 0
    for i in range(height):
        for j in range(width):
            if grid[height][height] == 1:
                if height - 1 < 0 and grid[height][height - 1] == 0:
                    iter += 1
                if height + 1 > (len(grid[height]) - 1) and grid[height][height + 1] == 0:
                    iter += 1
                if height - 1 < 0 and grid[height - 1][height] == 0:
                    iter += 1
                if height + 1 > (len(grid) - 1) and grid[height + 1][height] == 0:
                    iter += 1

    return iter

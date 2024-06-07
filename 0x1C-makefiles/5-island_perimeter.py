#!/usr/bin/python3
"""Technical interview preparation:"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    height = len(grid)
    width = len(grid[0])
    sides = size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j >= 1 and grid[i][j - 1] == 1):
                    sides += 1
                if (i >= 1 and grid[i - 1][j] == 1):
                    sides += 1
    return (size*4) - (sides*2)

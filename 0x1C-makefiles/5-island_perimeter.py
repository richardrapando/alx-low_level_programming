#!/usr/bin/python3
"""Function that  returns the perimeter of the island"""


def island_perimeter(grid):
    """Return the island perimeter
    0 represents a water zone and 1 represents a land zone
    Args:
        grid (list): A list of integers representing island
    Returns:
        perimeter of the island described in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

#!/usr/bin/python3
"""
    Function that returns the perimeter of
    an island
"""


def island_perimeter(grid):
    """
        Returns the perimeter
        Secund version. New idea
        If all points have borders
    """
    perimetro = 0
    if not isinstance(grid, list):
        return 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimetro += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimetro -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimetro -= 1
                if row < (len(grid) - 1) and grid[row + 1][col] == 1:
                    perimetro -= 1
                if col < (len(grid) - 1) and grid[row][col + 1] == 1:
                    perimetro -= 1
    return perimetro

#!/usr/bin/python3
"""
    Function that returns the perimeter of
    an island
"""


def island_perimeter(grid):
    """
        Returns the perimeter
    """
    largo = 0
    ancho = 0
    if not isinstance(grid, list):
        return 0
    for row in grid:
        if sum(row) > 1:
            ancho = sum(row)
        elif sum(row) == 1:
            largo += 1
    if largo > 0 and ancho > 0:
        largo += 1
    elif ancho == 0 and largo == 1:
        return 1
    area = 2 * (ancho + largo)
    return area


if __name__ == "__main__":
    main()

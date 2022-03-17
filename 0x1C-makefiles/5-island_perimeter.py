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
    perimetro = 0
    if not isinstance(grid, list):
        return 0
    for row in grid:
        if sum(row) > 1:
            ancho = sum(row)
        if sum(row) > 0:
            largo += 1
    if ancho == 1 and largo == 1:
        perimetro = 1
    else:
        perimetro = 2 * (ancho + largo)
    return perimetro

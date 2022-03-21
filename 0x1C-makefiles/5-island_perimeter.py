#!/usr/bin/python3
"""validar perimetros"""


def island_perimeter(grid):
    """sumar perimetros"""
    variable = 0
    for ite1 in range(len(grid)):
        for ite2 in range(len(grid[ite1])):
            if (grid[ite1][ite2] == 1):
                if ite2 == 0 or grid[ite1][ite2 - 1] == 0:
                    variable = variable + 1
                if ite1 == 0 or grid[ite1 - 1][ite2] == 0:
                    variable = variable + 1
                if ite2 == len(grid[ite1]) - 1 or grid[ite1][ite2 + 1] == 0:
                    variable = variable + 1
                if ite1 == len(grid) - 1 or grid[ite1 + 1][ite2] == 0:
                    variable = variable + 1
    return variable

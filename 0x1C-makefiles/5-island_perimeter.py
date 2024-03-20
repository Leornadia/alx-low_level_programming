#!/usr/bin/python3
"""
Module: 5-island_perimeter
Function: island_perimeter

Calculates the perimeter of an island in a grid.

Parameters:
grid (list of list of int): A 2D list representing the grid.

Returns:
int: The perimeter of the island.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the grid.

    Args:
    grid (list of list of int): A 2D list representing the grid.

    Returns:
    int: The perimeter of the island.
    """
    # Initialize the perimeter count to 0
    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # Check if the current cell is part of the island
            if grid[i][j] == 1:
                # Check the neighbors of the current cell
                # Top neighbor
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Bottom neighbor
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Left neighbor
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Right neighbor
                if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter


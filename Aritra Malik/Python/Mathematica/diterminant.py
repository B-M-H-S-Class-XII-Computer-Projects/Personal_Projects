import numpy as np
import sympy as sp

rows = int(input("Enter the number of rows: ")) # Number of Rows
cols = int(input("Enter the number of columns: ")) # Number of Columns

mat = np.empty((rows, cols), dtype=object) # Creating an empty array using numpy

# Getting all the values even if it's a symbol
for i in range(rows):
    for j in range(cols):
        symbol_name = input(f"Enter the symbol for element at position ({i+1}, {j+1}): ")
        mat[i, j] = sp.symbols(symbol_name) # Symbol and number input is handled by sympy library

matrix = sp.Matrix(sp.simplify(mat))
print(mat)
print("\n The diterminant is: ")
matrix.det()

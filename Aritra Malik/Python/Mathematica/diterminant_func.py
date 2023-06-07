# This is a function version of the diterminant file
# If any queries the see the the diterminant.py file

import numpy as np
import sympy as sp

def create_symbolic_matrix(rows, cols):
    mat = np.empty((rows, cols), dtype=object)

    for i in range(rows):
        for j in range(cols):
            symbol_name = input(f"Enter the symbol for element at position ({i+1}, {j+1}): ")
            mat[i, j] = sp.symbols(symbol_name)

    return mat

def calculate_determinant(mat):
    matrix = sp.Matrix(sp.simplify(mat))
    return matrix.det()
  
  

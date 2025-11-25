import numpy as np 
import sys 
def get_matrix_from_user(matrix_name): 
    print(f"\n--- Enter details for {matrix_name} ---") 
    while True: 
        try: 
            rows = int(input(f"Enter the number of rows for {matrix_name}: ")) 
            cols = int(input(f"Enter the number of columns for {matrix_name}: ")) 
            if rows > 0 and cols > 0: 
                break 
            else: 
                print("Dimensions must be positive integers. Please try again.") 
        except ValueError: 
            print("Invalid input. Please enter whole numbers for dimensions.") 
    matrix = [] 
    print(f"Enter the {rows * cols} elements for the {rows}x{cols} matrix:") 
    for i in range(rows): 
        row = [] 
        for j in range(cols): 
            while True: 
                try: 
                    element = float(input(f"Enter element at position ({i + 1}, {j + 1}): ")) 
                    row.append(element) 
                    break 
                except ValueError: 
                    print("Invalid input. Please enter a number.") 
        matrix.append(row) 
    return np.array(matrix) 
def print_matrix(matrix, title="Matrix"): 
    print(f"\n--- {title} ---") 
    print(matrix) 
def main(): 
    print("Welcome to the Matrix Calculator!")
    while True: 
        print("\nWhat would you like to do? Choose an option:") 
        print("  1. Add two matrices") 
        print("  2. Subtract two matrices") 
        print("  3. Multiply two matrices") 
        print("  4. Divide one matrix by another (A * inv(B))") 
        print("  5. Find the transpose of a matrix") 
        print("  6. Find the inverse of a matrix") 
        print("  7. Exit") 
        choice = input("Enter your choice (1-7): ") 
        if choice == '1': 
            print("\n**Matrix Addition (A + B)**") 
            mat_a = get_matrix_from_user("Matrix A") 
            mat_b = get_matrix_from_user("Matrix B") 
            if mat_a.shape == mat_b.shape: 
                result = mat_a + mat_b 
                print_matrix(result, "Result of A + B") 
            else: 
                print("\nError: Matrices must have the same dimensions to be added.") 
        elif choice == '2': 
            print("\n**Matrix Subtraction (A - B)**") 
            mat_a = get_matrix_from_user("Matrix A") 
            mat_b = get_matrix_from_user("Matrix B") 
            if mat_a.shape == mat_b.shape: 
                result = mat_a - mat_b 
                print_matrix(result, "Result of A - B") 
            else: 
                print("\nError: Matrices must have the same dimensions to be subtracted.") 
        elif choice == '3': 
            print("\n**Matrix Multiplication (A * B)**") 
            mat_a = get_matrix_from_user("Matrix A") 
            mat_b = get_matrix_from_user("Matrix B") 
            if mat_a.shape[1] == mat_b.shape[0]: 
                result = np.dot(mat_a, mat_b) 
                print_matrix(result, "Result of A * B") 
            else: 
                print("\nError: The number of columns in Matrix A must equal the number of rows in Matrix B.") 
        elif choice == '4': 
            print("\n**Matrix Division (A * B⁻¹)**") 
            mat_a = get_matrix_from_user("Matrix A") 
            mat_b = get_matrix_from_user("Matrix B") 
            try: 
                if mat_b.shape[0] != mat_b.shape[1]: 
                    print("\nError: The second matrix (B) must be square to have an inverse.") 
                    continue 
                inverse_b = np.linalg.inv(mat_b) 
                if mat_a.shape[1] == inverse_b.shape[0]: 
                    result = np.dot(mat_a, inverse_b) 
                    print_matrix(result, "Result of A * inv(B)") 
                else: 
                    print("\nError: Dimensions are not compatible for this operation.") 
            except np.linalg.LinAlgError: 
                print("\nError: The second matrix (B) is singular and cannot be inverted.") 
        elif choice == '5': 
            print("\n**Matrix Transpose**") 
            mat = get_matrix_from_user("your Matrix") 
            result = mat.T 
            print_matrix(result, "Transpose") 
        elif choice == '6': 
            print("\n**Matrix Inverse**") 
            mat = get_matrix_from_user("your Matrix") 
            if mat.shape[0] != mat.shape[1]: 
                print("\nError: Matrix must be square to have an inverse.") 
            else: 
                try: 
                    result = np.linalg.inv(mat) 
                    print_matrix(result, "Inverse") 
                except np.linalg.LinAlgError: 
                    print("\nError: This matrix is singular and cannot be inverted.") 
        elif choice == '7': 
            print("\nThanks for using the calculator. Goodbye!") 
            sys.exit() 
        else: 
            print("\nInvalid choice. Please enter a number between 1 and 7.") 
if __name__ == "__main__": 
    main()
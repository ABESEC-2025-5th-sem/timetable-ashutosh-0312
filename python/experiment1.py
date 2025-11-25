def custom_sqrt(number): 
    if number < 0: 
        return None 
    if number == 0: 
        return 0 
    guess = number / 2.0 
    for _ in range(100): 
        guess = (guess + number / guess) / 2.0 
    return guess 
def custom_round(number): 
    if number >= 0: 
        return int(number + 0.5) 
    else: 
        return int(number - 0.5) 
def run_calculator_for_ten_numbers(): 
    # Updated prompt for exactly 10 numbers 
    input_str = input("Enter exactly 10 numbers separated by spaces: ") 
    
    try: 
        numbers = [float(num) for num in input_str.split()] 
        # Check if the user entered exactly 10 numbers 
        if len(numbers) != 10: 
            print(f"\nError: You entered {len(numbers)} numbers. Please enter exactly 10.") 
            return 
        total_sum = 0.0 
        min_val = numbers[0] 
        max_val = numbers[0] 
        for num in numbers: 
            total_sum += num 
            if num < min_val: 
                min_val = num 
            if num > max_val: 
                max_val = num 
        average_val = total_sum / 10 # We know the count is 10
        sqrt_of_sum_result = custom_sqrt(total_sum) 
        rounded_avg = custom_round(average_val) 
        print("\n--- Results for your 10 numbers ---") 
        print(f"Numbers: {numbers}") 
        print(f"MAX:{max_val}") 
        print(f"MIN:{min_val}") 
        print(f"SUM: {total_sum}") 
        print(f"AVERAGE: {average_val}") 
        if sqrt_of_sum_result is None: 
            print("SQRT:Cannot calculate square root of a negative sum.") 
        else: 
            print(f"SQRT:{sqrt_of_sum_result}") 
        print(f"ROUNDED: {rounded_avg}") 
        print("-----------------------------------") 
    except ValueError: 
        print("\nError: Invalid input. Please enter only numbers.") 
    except Exception as e: 
        print(f"\nAn unexpected error occurred: {e}") 
if __name__ == "__main__": 
    run_calculator_for_ten_numbers() 
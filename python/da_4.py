import numpy as np 
from scipy import stats 
import sys 
input_str = input("Enter a list of numbers separated by spaces: ") 
try: 
    data = [float(num) for num in input_str.split()] 
except ValueError: 
    print("Error: Please enter only numbers separated by spaces.") 
    sys.exit() 
if not data: 
    print("Error: No data entered. Please run the script again.") 
    sys.exit() 
data_array = np.array(data) 
mean_value = np.mean(data_array) 
median_value = np.median(data_array) 
mode_result = stats.mode(data_array) 
mode_value = mode_result.mode 
std_dev_value = np.std(data_array) 
print("\n" + "-" * 30) 
print(f"Statistics for your data:") 
print("-" * 30) 
print(f"Mean: {mean_value:.2f}") 
print(f"Median: {median_value}") 
print(f"Mode: {mode_value}") 
print(f"Standard Deviation: {std_dev_value:.2f}")
n = int(input())

for _ in range(n):
    m = int(input())
    marks = list(map(int, input().split()))
    
    maximum_marks = max(marks)
    minimum_marks = min(marks)
    total_marks = sum(marks)
    
    average_marks = round(total_marks / m, 1)
    
    print(maximum_marks, minimum_marks, total_marks, average_marks)
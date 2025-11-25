# with open("practice.txt","w")as f:
#     f.write("Hi everyone\nwe are learning file I/O\n")
#     f.write("using java.\ni like programming in java.")
# with open("practice.txt","r")as f:
#     data = f.read()
#     new_data = data.replace("java","python")
#     print(new_data)
    
#     with open("practice.txt","w")as f:
#         f.write(new_data)
  
# with open("practice.txt","r")as f:
#     data = f.read()
#     if(data.find("learning")!=-1):
#         print("Yes")
#     else:
#             print("No")


# from tkinter import *
# window = Tk()
# window.geometry("500x500")
# Label(window,"Hello").pack()
# Label(window,"Python").pack()
# Label(window,"Programming").pack()
# window.mainloop()

#table of a number
# num = int(input("enter thr number:"))
# i = 1
# while i<=10:
#     print(num,"*",i,"=",num*i)
#     i+=1

# i = 1
# while i<=10:
#     print(i*i)
#     i+=1

# list = [1,2,3,4,5,6,7,8,9,10]
# length = len(list)
# print(length)
# a = 23
# # type(a)
# # print(type(a))
# b = 23.56
# c = a+b
# print(type(c))

# Initialize a variable to store the sum
# sum_of_evens = 0

# # Loop through the numbers from 1 to 100
# for number in range(1, 101):
#     if number % 2 == 0:  # Check if the number is even
#         sum_of_evens += number  # Add the even number to the sum

# # Print the result
# print(f"The sum of all even numbers from 1 to 100 is: {sum_of_evens}")

# list = [1,55,25,26,28]
# list.reverse()
# print(list)
# row = int(input("Enter the number of rows:"))
# for i in range(1,row+1):
#     for j in range(1,i+1):
#         print("*",end="")
#     print("\n")
row = int(input("Enter the number of rows:"))
for i in range(1,row+1):
    for j in range(1,i+1):
        print("*",end="")
    print("\n")  
for i in range(row,0,-1):
    for j in range(1,i):
        print("*",end="")
    print("\n")      
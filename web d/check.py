# a = 25

# b = 2.5

# c = a+b
# print(c)

# x=17
# y=5
# print('x+y=',x**y)
#----------------------------------------------
 
# if num > 1:
 
#    for i in range(2, int(num/2)+1):
#  # If num is divisible by any number between
#  # 2 and n / 2, it is not prime
#         if (num % i) == 0:
#            print(num, "is not a prime number")
#            break
#         else:
#             print(num, "is a prime number")
# else:
#       print(num, "is not a prime number")


# x= 3
# if(x>2):
#    x=x*2
# if(x>7):
#    x=0
# print(x)    
# nes= [1,2,3],[3,4,5],[5,6,7]
# for i in range(len(nes)):
#     for j in range(len(nes[0])):
#         print(nes[i][j],end=' ')
#     print()
# nestedlist=[[1,2],[3,4],[5,6,7]]
# newlist=[]
# for i in range (len(nestedlist)):
#     for j in range(len(nestedlist[i])): 
# list1= [x for x in range(20) if x%2 == 0]
# print(list1    ) 
# f=open("unit.txt","w")
#  f.write("welcome to file handling") 
# f.close() 
# f=open("unit.txt","w")
# f.write("welcome to file handling/") 
# n= int(input("how many times")) 
# for i in range(n): 
#    s=input("enter your roll no=") 
#    f.write(s) 
# f.close()

# file=open('C:/Users/ashut/Desktop/ANCOD/unit.txt','r')
# print(file.name)
# print(file.closed)
# file.close()
# print(file.closed)

# file=open('C:/Users/ashut/Desktop/ANCOD/unit.txt','w')
# line =["hello everyone\n","writting #multiline strings\n","this is the #third line"]
# file.writelines(line)

# from tkinter import *
# window = Tk()
# window.title("welcome to my first gui")
# window.configure(background = "red")
# window.geometry('800x700')
# window.mainloop()
# from tkinter import *
# window = Tk()
# window.title("welcome to my first gui")
# window.configure(background = "red")
# window.geometry('800x700')
# Label(window, text = "hELLO",
#       font = ("Arial Bold", 50)).pack()

# window.mainloop()

from tkinter import *
window = Tk()
window.title("welcome to my first gui")
window.configure(background = "red")
window.geometry('800x700')
window.mainloop()
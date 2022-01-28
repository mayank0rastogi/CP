In Python, users can take multiple values or inputs in one line by two methods.
```
Using the split() method
Using List comprehension
```

1. Using split() method :
This function helps in getting multiple inputs from users. It breaks the given input by the specified separator. If a separator is not provided then any white 
space is a separator. Generally, users use a split() method to split a Python string but one can use it for taking multiple inputs.
```
Syntax :
input().split(separator, maxsplit)
```
separator: This is a delimiter. The string splits at this specified separator. If is not provided then any white space is a separator.
maxsplit: It is a number, which tells us to split the string into a maximum of provided number of times.
If it is not provided then the default is -1 which means there is no limit.

```
a) Taking two inputs at a time:
a,b = input("Enter 2 variables").split()
print("a is:",a)
print("b is:",b)
Enter 2 variables hi there
a is: hi
b is: there
a,b = input("Enter 2 variables").split()
print("a is:",a)
print("b is:",b)
```

Note: As you can see, the input given can be any: int, string, float, etc. We haven’t mentioned the separator used hence whitespace is considered as default.

```
b) Taking Inputs with Separator and Maxsplit defined
x,y,z = input("Enter variables: ").split(",",3)
print(x,y,z)
Enter variables: how,are,you
how are you
x,y,z = input("Enter variables: ").split(",")
print(x,y,z)
Enter variables: how,are,you
how are you
```

Note: Whether or not maxsplit was defined, the results were the same. For both the above cases only 3 inputs (not more or less can be provided corresponding to defined variables!)

```Taking Unlimited Inputs:
x= input("Enter variables: ").split(",")
print(x)
Enter variables: how,are,you,dear
['how', 'are', 'you', 'dear']
```

```
c) Taking Multiple Inputs As List
Taking multiple inputs at a time and type casting using list() function.
With Map Function:
Used Map Function (Optional) to convert thy input into an integer.
x = list(map(int, input("Enter multiple value: ").split()))
print("List of students: ", x)
Enter multiple value: 67 90 89 54 12 34 09
List of students:  [67, 90, 89, 54, 12, 34, 9]
```


For the above code, because of the use of the map integer function, our input can only be integers
```
Without Map Function:
x = list(input("Enter multiple value: ").split())
print("List of students: ", x)
Enter multiple value: hey 78 amazing person 2021
List of students:  ['hey', '78', 'amazing', 'person', '2021']
```

Note: Here as we did not use any map function, the type of input can be any!

2. Using List Cpmrehensions:
```
2 Input at a Time:
x,y = [int(x) for x in input("Enter 2 values: ").split()]
print("x is ",x)
print("y is",y)
Enter 2 values: 6 78
x is  6
y is 78
x,y = [int(x) for x in input().split()]
print("x is ",x)
print("y is",y)
78 90
x is  78
y is 90
```
```
Taking Multiple Inputs at a time:
x = [int(x) for x in input().split()]
print("Number of list is: ", x)
43 12 34 67 09 653 2321 12
Number of list is:  [43, 12, 34, 67, 9, 653, 2321, 12]

```

The above examples take input separated by spaces. In case we wish to take input separated by comma (, ), we can use the following.
```
Taking User-Defined Number of Inputs:
#Inputs of Number of inputs user want to enter:
n = int(input())
# defining empy list:
L= []
# Taking multiple inputs based on n:
for i in range(n):
t = input().split()

```
The result for the above code would be a list with n number of user inputs.

```
Multiple Input Using Separator
x = [int(x) for x in input().split(",")]
print("Number of list is: ", x)
67,432,11,1,2,3,4
Number of list is:  [67, 432, 11, 1, 2, 3, 4]

```
Some Extra Cheese: Using Strip() method
strip() is an inbuilt function in the Python programming language that returns a copy of the string with both leading and trailing characters removed
(based on the string argument passed).
```
Syntax:
string.strip([chars]) 
```

chars — a string specifying the set of characters to be removed. 
If the optional chars parameter is not given, all leading and trailing whitespaces are removed from the string.
```
Example:
string = " the King has the largest army in the entire world the"
# prints the string after removing "the" from beginning and end
print(string.strip(" the"))
King has the largest army in the entire world

```
```
string = " .the King has the largest army in the entire world the."
# prints the string after removing ".the" from beginning and end
print(string.strip(" .the"))
King has the largest army in the entire world
The strip method can make your input clean removing unnecessary inputs.

```

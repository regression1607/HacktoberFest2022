from turtle import *
# or
import turtle
After importing the turtle library and making all the turtle functionalities available to us, we need to create a new drawing board(window) and a turtle. Let’s call the window as wn and the turtle as skk. So we code as: 

wn = turtle.Screen()
wn.bgcolor("light green")
wn.title("Turtle")
skk = turtle.Turtle()
Now that we have created the window and the turtle, we need to move the turtle. To move forward 100 pixels in the direction skk is facing, we code: 

skk.forward(100)
We have moved skk 100 pixels forward, Awesome! Now we complete the program with the done() function and We’re done! 

turtle.done()
So, we have created a program that draws a line 100 pixels long. We can draw various shapes and fill different colors using turtle methods. There’s plethora of functions and programs to be coded using the turtle library in python. Let’s learn to draw some of the basic shapes. 
 
 Shape 1: Square


# Python program to draw square
# using Turtle Programming
import turtle
skk = turtle.Turtle()
 
for i in range(4):
    skk.forward(50)
    skk.right(90)
     
turtle.done()
Output:

![image](https://user-images.githubusercontent.com/84392923/194618574-40363e1c-972b-407b-b023-258af2dc5764.png)

import turtle
t = turtle.Turtle()

a=turtle.Screen()
a.bgcolor("green")
col = input("Enter the color name: ")
t.fillcolor(col)
t.begin_fill()

def triangle():
    t.forward(100)
    t.left(120)
    t.forward(100)
    t.left(120)
    t.forward(100)

triangle()
t.forward(100)
t.left(120)
t.forward(100)
t.left(120)
t.forward(100)
t.forward(100)
t.left(120)
t.forward(100)
t.left(120)
t.forward(100)

t.end_fill()

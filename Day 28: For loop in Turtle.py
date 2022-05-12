import turtle
t = turtle.Turtle()

def square():
    t.forward(100)
    t.left(90)
    t.forward(100)
    t.left(90)
    t.forward(100)
    t.left(90)
    t.forward(100)
    t.left(90)

square()

for count in range(4):
    square()
    t.forward(100)
    t.left(90)
    t.forward(100)

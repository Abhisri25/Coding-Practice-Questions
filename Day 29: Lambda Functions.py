def func(b):
    return lambda a : a * b
double = func(4)
print(double(11))

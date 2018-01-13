def cons(a, b):
    return lambda f: f(a, b)

def car(f):
    g = lambda a, b: a
    return f(g)

def cdr(f):
    g = lambda a, b: b
    return f(g)

if __name__ == "__main__":
    print(car(cons(3, 4)))
    print(cdr(cons(3, 4)))

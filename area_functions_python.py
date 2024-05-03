def areaCircle(r):
    a= 3.14159*r*r
    print(a)

def areaCone(r, l):
    a= (3.14159*r*r) + (3.14159*r*l)
    print(a)

def areaSector(angle, r):
    a= (3.14159*r*r) * (angle/360)
    print(a)
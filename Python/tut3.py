""" Chain Map """

from collections import ChainMap

d1 = {'a':1, 'b':2}
d2 = {'c':3, 'd':4}
d3 = {'e':5, 'f':6}

# Define ChainMap
c = ChainMap(d1,d2,d3)

print(c)

# Access values using key name
print(c['a'])

# Access keys using keys() method()
print(c.keys())

# Access values using values() method()
print(c.values())


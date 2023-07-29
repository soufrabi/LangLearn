""" OrderedDict """
from collections import OrderedDict

od =OrderedDict()
od['a']=1
od['b']=2
od['c']=3
od['d']=4


print('Before Deleting')

for key,value in od.items():
    print(key,value)

# Delete an element
od.pop('a')

# Reinserting the same element
od['a']=1

print('After re-inserting')
for key,value in od.items():
    print(key,value)





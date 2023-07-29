# Linear search

def locate_card(cards, query):
    pass

cards = [13,11,10,7,4,3,1,0]
query = 7
output = 3


result = locate_card(cards,query)

print(result == output)


test = {
    "input": {
        "cards" :  [13,11,10,7,4,3,1,0],
        "query" : 7
    },
    "output" : 3
}

result = locate_card(test["input"]["cards"],test["input"]["query"])
print(result)

# Aliter

result = locate_card(**test["input"])
print(result)

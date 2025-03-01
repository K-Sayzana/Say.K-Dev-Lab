
menu={
    "soda": 20,
    "water": 10,
    "popcorn": 30,
    "chips": 15
}

cart=[]
total=0

for key, value in menu.items(): 
    print(f"{key:7}-----{value} birr")
    
while True:
    item=inptut("what do u wanna buy: ").lower()
    if item=='q': break
    elif menu.get(item) is not None:
        cart.append(item)
    
for food in cart:
    total+=menu.get(item)

print(f"your total is {total}")





    
    

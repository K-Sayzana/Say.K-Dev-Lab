import random
# ord to convert letter to ASCCI
# chr to convert num to letter

def generatePassword():
    passwd=list()
    symbols=['#', '*', "_", "!", "@"]
    for _ in range(4):
        passwd.append(chr(ord('a')+random.randrange(0, 26)))
        passwd.append(chr(ord('A')+random.randrange(0, 26)))
    for _ in range(2):
        passwd.append(random.choice(symbols))
    
    i=3
    while i>0:
        passwd.append(str(random.randint(1, 9)))
        i-=1
    random.shuffle(passwd) 
    return ''.join(passwd)
    
print(generatePassword())


    
        



    

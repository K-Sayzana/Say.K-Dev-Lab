# number guessing game
import random

trail=3
rand=random.randint(1,10)



while trail>0:
    print("------------------------------------")
    guess=int(input("Guess the number: "))
    
    if guess==rand:
         print("Correct!!")
         break
    elif guess>rand:
         print(f"You have {trail} trails left.")
         print("Hint: Try lower number.")
    elif guess<rand:
         print(f"You have {trail} trails left.")
         print("Hint: Try higher number.")
    trail=trail-1
    print("------------------------------------")
else:
    print(f"Failed... The numer was {rand}")


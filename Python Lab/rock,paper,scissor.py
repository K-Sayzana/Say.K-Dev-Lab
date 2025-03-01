# rock, paper, scissor
import random

options=("rock", "paper", "scissor")
AiScore=0
playerScore=0
valid= True
while True:
    rand=random.choice(options)
    print("---------------------------------------------------")
    while valid:
        item=input("Rock, Paper, Scissor| your choice: ").lower()
        if item  in options:
            break
    print(f"Your: {item} vs My: {rand}")
    if(item==rand):
        print("Nobody wins. ")
        print(f"score: You: {playerScore} Me: {AiScore}")
    elif(rand=='rock' and item=='scissor'):
        print("I won!") 
        AiScore+=1
        print(f"score: You: {playerScore} Me: {AiScore}")
    elif(rand=='rock' and item=='paper'):
        print("You won!")
        playerScore+=1
        print(f"score: You: {playerScore} Me: {AiScore}")
    elif(rand=='paper' and item=='rock'):
        print("I won!") 
        AiScore+=1
        print(f"score: You: {playerScore} Me: {AiScore}")
    elif(rand=='paper' and item=='scissor'):
        print("You won!")
        playerScore+=1
        print(f"score: You: {playerScore} Me: {AiScore}")
    elif(rand=='scissor' and item=='rock'):
        print("You won!")
        playerScore+=1
        print(f"score: You: {playerScore} Me: {AiScore}")
    elif(rand=='scissor' and item=='paper'):
        print("I won!")
        AiScore+=1
        print(f"score: You: {playerScore} Me: {AiScore}")
    print("---------------------------------------------------")

if(AiScore > playerScore):
    print("I won yayayyayyayya")
elif(AiScore<playerScore):
    print("You won")
else:
    print("A draw")

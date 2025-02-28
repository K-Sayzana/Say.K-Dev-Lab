# quiz program
questions=( 
    "1. What is the capital of Canada?", 
    "2. Which planet is known as the Red Planet?",
    "3. Who wrote Romeo and Juliet?",
    "4. What is the chemical symbol for gold?"
)
options=(
    ("A) Toronto", "B) Vancouver", "C) Ottawa", "D) Montreal"),
    ("A) Venus", "B) Mars", "C) Jupiter", "D) Saturn"),
    ("A) Charles Dickens", "B) William Shakespeare", "C) Mark Twain", "D) Jane Austen"),
    ("A) Ag", "B) Au", "C) G", "D) M")
    )

answers=("C","B","B","B","B")
guesses=[]
score=0

n=0;
for q in questions:
    print("______________________________________________")
    print(q)
    for o in options[n]:
        print (o, end=" ")
    print()
    answer=input("choose the correct option: ").upper()
    guesses.append(answer)
    if answer==answers[n]: 
        print("correct! ")
        score+=1
    else:
        print(f"Incorrect: The correct answer is {answers[n]}")
    n+=1

print("------summury-----")
print("Your answers: ", end=" ")
for g in guesses:
    print(g, end=" ")
print()
print("Answers key: ", end=" ")
for a in answers:
    print(a, end=" ")
print ()
print(f"You scored {score/len(questions) *100}%")



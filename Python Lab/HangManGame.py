import random
hang={
        6: """
        *------------*
        |            |
        |            |   
                     |
                     |
                     |
                     |
                     | 
        """,
        5: """
            *------------*
            |            |
            |            |   
            0            |
                         |
                         |
                         |
                         | 
            """,
        4: """
            for *------------*
            |            |
            |            |   
            0            |
            |            |
                         |
                         |
                         | 
            """,
        3: """
            *------------*
            |            |
            |            |   
            0            |
            |\           |
                         |
                         |
                         | 
            """,
        2: """
            *------------*
            |            |
            |            |   
            0            |
           /|\           |
                         |
                         |
                         | 
            """,
        1: """
            *------------*
            |            |
            |            |   
            0            |
           /|\           |
             \           |
                         |
                         | 
            """,
        0: """
            *------------*
            |            |
            |            |   
            0            |
           /|\           |
           / \           |
                         |
                         | 
            """
    }
words=("baby", "cars", "paper", "mouse")
word=random.choice(words)
No_guess=6
guessed_letters=[]
print()
print("**************************************************************************************")
print("Hello there, Welcome to the Hangman Game.")
print(f"You have {No_guess} guesses to try and save this little fella from hanging him self.")
print("""
    0
   /|\  Hi!!
   / \\
    """)
print("**************************************************************************************")
print("GOOD LUCK!!!")
print()
dashes=["__" for i in range(len(word))]
print(f"The word: {' '.join(dashes)}")



while No_guess>0:
    print()
    answer = input("Enter a letter: ").lower()
    if answer in word and answer not in guessed_letters:
            guessed_letters.append(answer)
            print("--------Correct!---------")
            count=word.count(answer)
            match count:
                case 1:
                    pos = word.index(answer)
                    dashes[pos] = answer
                case 2:
                    pos1=word.index(answer)
                    pos2=word.index(answer, pos1+1)
                    dashes[pos1] = answer
                    dashes[pos2] = answer
            # check if player won the game
            if word==''.join(dashes):
                print("****** You Won ************")
                print("You Saved a Life Today.")
                break
            if No_guess==1:
                break
            print(f"{No_guess} guesses left.")
            print(f"The word: {' '.join(dashes)}")
    else:
        print("--------Wrong!!!---------")
        match No_guess:
            case 6:
                print(hang[6])
            case 5:
                print(hang[5])
            case 4:
                print(hang[4])
            case 3:
                print(hang[3])
            case 2:
                print(hang[2])
            case 1:
                print(hang[1])
        print(f"{No_guess} guesses left.")
        print(f"The word: {' '.join(dashes)}")

    No_guess-=1

if No_guess==0:
    print(f"You lose. The word was: {word}")
    print(hang[0])
    print("You failed to save the man")











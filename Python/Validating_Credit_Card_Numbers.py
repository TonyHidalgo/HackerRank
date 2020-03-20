def Validating(card):
    count = 0
    cont = 0

    for l in range(len(card)-1):
        if (card[l] != "-"):
            cont += 1

        elif(card[l] == "-" and cont != 4 ):
            print("Invalid")
            return
        else:
            cont = 0

    card=card.replace("-","")
    if(card.isnumeric()):
        if(len(card) == 16):
            if(card[0] == "4" or card[0] == "5" or card[0] == "6"):
                for i in range(len(card)-1):
                    if card[i] == card[i+1]:
                        count += 1
                        if (count >=3):
                            print("Invalid")
                            return
                    else:
                        count = 0
                print("Valid")
            else:
                print("Invalid")
        else:
            print("Invalid")
    else:
        print("Invalid")


num = int(input())
cardCredit = []

for i in range(0, num):
    cardCredit.append(input())
for i in range(0, num):
    Validating(cardCredit[i])








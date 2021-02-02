#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## pong
## File description:
## pong
##

def main():
    note1 = str(input("Quel est la couleur "))
    note2 = str("du ciel")
    note3 = str("du soleil")
    note4 = str("du bois")
    note5 = str("de l'herbe")
    couleur1 = "bleu"
    couleur2 = "jaune"
    couleur3 = "marron"
    couleur4 = "vert"
    if note2 == note1:
        print("La couleur " + str(note2) + " est bien " + couleur1)
    elif note3 == note1:
        print("La couleur " + str(note3) + " est bien " + couleur2)
    elif note4 == note1:
        print("La couleur " + str(note4) + " est bien " + couleur3)
    elif note5 == note1:
        print("La couleur " + str(note5) + " est le " + couleur4)



if __name__ == '__main__':
    main()

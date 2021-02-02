def main ():
    argent1 = int(input("Quelle est ta somme de départ ? "))
    argent2 = int (input("Quel est le prix du produit ? "))
    reste = argent1 - argent2
    manque = argent2 - argent1
    if argent1 > argent2:
        print("Il te restera " + str(reste) + "€ après l'achat")
    elif  argent1 == argent2:
        print("Tu n'auras plus d'argent après l'achat")
    elif argent2 > argent1:
        print("Tu n'as pas assez d'argent, il te manque " + str(manque) + "€")


if __name__ == '__main__':
    main()
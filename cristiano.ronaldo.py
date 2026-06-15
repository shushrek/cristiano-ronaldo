def cristiano_ronaldo():
    print("Ronaldo: Hello! Welcome to Cristiano Ronaldo Chat Bot")

    while True:
        user = input("You: ").casefold()

        if user == "hello!":
            print("Ronaldo: Hello!")
        elif "halo" in user:
            print("Ronaldo: Hello!")
        elif "helo" in user:
            print("Ronaldo: Hello!")
        elif "sui!" in user:
            print("Ronaldo: Sui")
        elif "ronaldo is the goat" in user:
            print("Ronaldo: Absolutely")
        elif "messi is trash" in user:
            print("Ronaldo: Very trash")
        elif "messi world cup is corrupted" in user:
            print("Ronaldo: I agree")
        elif "messi better" in user:
            print("Ronaldo: FUCK YOU")
        elif "hala madrid" in user:
            print("Ronaldo: ¡Hala Madrid!")
        elif user == "exit":
            print("Ronaldo: Me is better than messi")
            break
        else:
            print("Ronaldo: Sui")


cristiano_ronaldo()

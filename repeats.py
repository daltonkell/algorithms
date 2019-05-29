def main():
    words = str(input()).split(" ")
    set_words = set(words)
    if len(words) != len(set_words):
        print("no")
    else:
        print("yes")

if __name__ == "__main__":
    main()

def main():
    cases = int(input())
    for i in range(cases):
        places = set()
        nplaces = int(input())
        for n in range(nplaces):
            places.add(input())

        print(len(places))

if __name__ == "__main__":
    main()

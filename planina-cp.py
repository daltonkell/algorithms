import itertools

def main():
    iters = int(input())

    # get increment
    inc = 1./(2**iters)

    side_len = inc
    count = 2
    while (side_len < 1.):
        side_len += inc
        count += 1

    total = count*count
    print(total)

if __name__ == "__main__":
    main()

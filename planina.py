import numpy as np

def main():
    iters = int(input())

    # get increment
    inc = 1./(2**iters)

    xpts = np.arange(0., 1.+inc, inc)
    all_pts = np.array(np.meshgrid(xpts, xpts)).reshape(-1, 2)
    print(len(all_pts))

if __name__ == "__main__":
    main()

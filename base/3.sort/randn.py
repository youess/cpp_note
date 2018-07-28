# -*- coding: utf-8 -*-


import sys
import random


def main():

    random.seed(123)
    n = int(sys.argv[1])
    print(n)
    for _ in range(n):
        print(random.randint(0, n))


if __name__ == "__main__":
    main()

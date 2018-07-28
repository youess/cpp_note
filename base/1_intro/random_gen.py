# -*- coding: utf-8 -*-

import sys
import string
import numpy as np


def gen_random_line_text():
    base = list(string.ascii_letters)
    s = np.random.randint(5, 20, 1)[0]
    return ''.join(np.random.choice(base, s))


def main():
    for _ in range(int(sys.argv[1])):
        print(gen_random_line_text(), " ",  gen_random_line_text())


if __name__ == "__main__":
    np.random.seed(123)
    main()

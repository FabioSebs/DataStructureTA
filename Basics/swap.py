def swap(x, y):
    x, y = y, x
    print(hex(id(x)), hex(id(y)))
    return (x, y)


if __name__ == "__main__":
    x = [1, 1, 1]
    y = [2, 2, 2]

    print(hex(id(x)), hex(id(y)))

    x, y = swap(x, y)

    print(x, y)

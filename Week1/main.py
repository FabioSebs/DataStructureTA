class Person:
    def __init__(self, height, age):
        self.height = height
        self.__age = age

    def getAge(self):
        return self.__age


if __name__ == "__main__":
    fabio = Person(5.7, 23)
    print(fabio.getAge())

### Const Keyword

The constant keyword makes values immutable. 

- Examples

```c++
const int var = 5;
```

When a method is instantiated with the const keyword then whatever it's returning cannot be changed.

### Static Keyword

Static Keyword in C++ is a way to give a variable a never changing address meaning it allocated by the linker only once in a programs runtime. Run these two programs below and you'll know the difference.

```c++
void counter()
{
    static int count=0;
    cout << count++;
}

int main(0
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}
```

```c++
void counter()
{
    int count=0;
    cout << count++;
}

int main(0
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}
```


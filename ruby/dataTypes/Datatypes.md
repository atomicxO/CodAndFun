# Ruby Data Types:

> Data types represents a type of data such as text, string, numbers, etc. 

** There are different data types in Ruby:

* Numbers.

* Strings.

* Symbols.

* Hashes.

* Arrays.

* Booleans.


---


# Numbers:

In Ruby, numbers are represented by different data types, each with its own 
characteristics and use cases. The primary numeric types in Ruby are 
`Integer`, `Float`, and `Rational`. 

For Example:


1. **Integer:**

* Definition: Whole numbers, which can be positive or negative.
* Examples: 

```
a = 42      # An integer
b = -15     # A negetive integer
c = 0       # zero is also an integer


puts a.class
puts b.class

```

Ruby integers are arbitary-precision, meaning they can grow as large as memory allows.

---


2. **Float:**

* Definition: Numbers with decimal points. They are used to represent real numbers.
* Example:

```
x = 3.14        # A floating-point number
y = -0.001      # A negative floating-point number.
z = 2.0         # A floating-point number with a zero decimal part.

puts x.class    # output: Float
puts y.class    # output: Float

```
Floats in Ruby are based on the IEEE 754 double-precision standard.

---

3. **Rational:**

* Definition: Represents a rational number as a fraction of two integers.
* Examples:

```
r = Rational(1,3)       # Represents the fraction 1/3
s = Rational(2,5)       # Represents the fraction 2/5

puts r.class            # Output: Rational
puts r.to_f             # Convert rational to Float, Output: 0.33333333333333333333333

```

Rational numbers can be created using the `Rational` method which takes two integers
(numerator and denominator).

---


4. **Complex:**

* Definition: Represents complex numbers with a real and imaginary part.
* Examples:

```
c = Complex(2, 3)   # Represents the complex number 2 + 3i
d = Complex(-1, -2) # Represents the complex number -1 - 2i

puts c.class        # Outputs: Complex
puts c.read         # Outputs: real
puts c.imaginary    # Outputs: 3

```
Complex numbers are represented by the `Complex` class.


---


### Conversion between Numeric Types:

> Ruby provides methods to convert between numeric types:

```
# Integer to Float
int = 42
flt = int.to_f
puts flt    # Output: 42.0

# Float to Integer (truncates the decimal part)
flt = 3.14
int = flt.to_i
puts int    # Output: 3

# Float to Rational
flt = 0.75
rational = flt.to_r
puts rational  # Output: 3/4

# Rational to Float
rational = Rational(1, 2)
flt = rational.to_f
puts flt       # Output: 0.5

```

**[Note]: `These converions help in handling various scenarios involving
           numeric data.`**

--- 


# Strings: 

> What is Ruby Strings?

In Ruby, strings are a fundamental data type used for representing and 
manipulating text.
Ruby's `String` class is quite versatile and provides a variety of methods for 
working with strings. 


> A string is a group of letters that represent a sentence or a word. Strings 
  are defined by enclosing a text within single (') or double (") quote.


Here's rundown of key aspects of strings in Ruby:


1. **Creating Strings**

[+] **Using Double Quotes**: Strings enclosed in double quotes support 
                           interpolation and escape sequences.

```
str1 = "Hello, World!"
name = "Alice"
str2 = "Hello, #{name}"     # String interpolation

```


[+] **Using Single Quotes:** Strings in single quotes do not support 
                            interpolation and escape sequences (except for 
                            `\\` and `\'`).

```
str3 = 'Hello, World!'
str4 = 'Hello, #{name}!'    # No interpolation
```

[+] **Using Here Documents:** Useful for multi-line strings.

```
str5 = <<-TEXT
This is a 
mutli-line
string.
TEXT

```

---


2. **String Methods**:

Ruby provides a rich set of methods for manipulating strings. 
Some common methods include:

* **Concatenation:**

```
str1 = "Hello"
str2 = "World!"

str3 = str1 + " " + str2   # "Hello World!"

```


* **Substring:**

```
str = "Hello, World!"
sub = str[0, 5]  # Hello,
```

* **Case Conversion:**

```
str = "Hello, World!"
str.upcase    # Output: HELLO, WORLD!
str.downcase  # Output: hello, world!
str.capitalize  # Output: Hello,World!
```

* **Trimming Whitespace:**

```
str = "     Hello World   "
str.strip     # " Hello World"
str.lstrip    # "Hello World    "
str.restrip   # "    Hello World"

```

* **Splitting and Joining:**

```
str = "apple,banana, cherry"
fruits = str.split(",")     # ["apple", "banana", "cherry"]
new_str = fruits.join(" - ") # "apple - banana - cherry"

```

* **Replacing Substrings:**

```
str = "Hello, World!"
new_str = str.sub("World", "Ruby")    # "Hello, Ruby!"

```

---


3. **String Interpolation**

> Ruby allows you to embed expressions within string literals using `#{}`.

```
name = "Alice"
greeting = "Hello, #{name}."

```


4. **String Encoding**

> Ruby strings can be encoded in different character encodings, such as UTF-8,
  ASCII-8BIT, etc. You can check or set the encoding of a string with the 
  `encoding` method.

```
str = "Hello, World!"
str.encoding  # Returns the encoding of the string.

```

5. **Immutable Nature**

> Ruby strings are mutable, meaning that you can modify the content of a string
  object in place. For instance:

```
str = "Hello"
str << " World"     # Returns 'str' to "Hello World"

```


6. **String Literals and Special Characters:**

**Escaping Special Characters:** Use `\\` to escape backslashes and `\'` for 
single quotes within single-quoted strings. In double-quoted strings,escape 
sequences like `\n` (newline) and `\t` (tab) are recognized. 

```
single_quote = 'It\'s a test.'
double_quote = "It\"s a test.\nNew line."


```

7. **Symbol vs. String:**

While strings and symbols are both used to represent textual data, they are 
different types in Ruby:


* `Symbols` are immutable and unique. They are typically used as identifiers 
   or keys in hashes.

```
:my_symbol

```

* `Strings` are mutable and more flexible for text manipulation.

> Choosing between symbols and strings often depends on the context—symbols 
  for identifiers and strings for text that will be manipulated or displayed.


---


# Ruby Data types are broadly categorized into: 

[+] **Primiive Type.** 
[+] **Complex Type.**

[-] **Primitve Type:**

> Primitive Data Types Contains:

1. **Number**

```
* Integer.    num = 42
* Float.      num = 43.12
* Complex.    num = Complex(2, 3) --> 2 + 3i
* Rational.   num = Rational(3/4)
```

2. **Boolean**

> Represents logical values: `true` or `false`.

```
bool_true = true
bool_false = false

```

3. **Nil**

> Represents the absence of a value. There is only we once instance of 
`Nilclass`, `nil`.

```
nothing = nil

```

---


# Complex Data Types

1. **Strings**.
2. **Symbols**.
> Lightweight immutable identifiers oten used for keys in hashes or as method 
```
symbols1 = :name
symbols2 = :age

```

3. **Arrays**

* Ordered collections of objects, which can be of different types. Arrays are
  indexed starting from 0.

```
array = [1, "Hello," :symbol, 3.14]

```

4. **Hashes**

> Collections of key-value pairs. Keys and values can be any type.

```
hash = { name: "Alice", age: 25, city: "New York" }

```

5. **Ranges**

> Represents an interval of values. Useful for iterating over sequences 
  of values.

```
range1 = 1..10        # Inclusive
range2 = 1..100       # exclusive of 10

```

6. **Arrays and Hashes can be nested**

> Both arrays and hashes can contain other arrays and hashes, allowing for 
  complex data structures.

```
nested_array = [[1, 2], [3, 4]]
nested_hash = { person: {name: "Alice", age: 30}, city: "Miami" }

```


## Special Data Types:

1. **Proc and Lambda**

> **Proc** Represents a block of code that can be stored in a variable and 
  executed later.

```
my_proc = Proc.new { |x| x * 2 }
my_proc.call(5)  # 10
```

> **Lambda** Similar to `Proc` but with more constrains on arguments and return
  behaviour.

```
my_lambda = ->(x) { x * 2 }
my_lambda.call(5) # 10.
``` 

3. **Enumerators:**

> Allow you to iterate over collections in a controlled manner. Ruby's 
  `Enumerator` class provides a flexible way to handle iteration.

```
enum = (1..5).each
enum.next  # 1
enum.next  # 2

```

4. **File**

> Represents file objects for file handling operations like reading and 
  writing.

```
file = File.open("main.txt","w")
file.write("Hello, Friend")
file.close
```

5. **Struct**

> Allows you to define a simple class with attributes. Useful for grouping 
  related data.

```
Person = Struct.new(:name, :age)
person = Person.new("Alice", 28)

```




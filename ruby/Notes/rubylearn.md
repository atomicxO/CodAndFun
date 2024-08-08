/-----------\
# Ruby		#	
\-----------/


# Hello Ruby Program:

Now let's write a simple program of Ruby.

[+] **Requirements for Hello World Program**

* Download Ruby and install it.
* Create a file with `.rb` extensions.
* Connect ruby path to the file.
* Run the file.


#### Creating Hello Ruby Program:

1. use any text editor to creat a `main.rb` file. write the following 
   code:

```
puts "Hello, World!"
```  

2. Save, Run the file by following command:

```
ruby main.rb
```

> This is final output of our `Hello Ruby` Program.


# Ruby Operators:

Ruby has a built-in modern set of operators. `Operators` are a symbol 
which is used to perform different operations.

For example, +,-,`*`,/,etc.


[+] **Types of operators:**

* Unary operator.
* Arthimetic operator.
* Bitwise operator.
* Logical operator.
* Ternary operator.
* Assigment operator.
* Comparison operator.
* Range operator.


[+] **Unary Operator:**

> Unary operators expect a single operand to run on.

```
---------------------------------------------------
Operator 		| 		Description
---------------------------------------------------
! 				-> 		Boolean NOT
~				->  	Bitwise complement
+ 				-> 		Unary Plus 
```

**Example**

In file hello.rb, write the following code.

```
#!/usr/bin/ruby -w

puts("Unary Operator")
puts(~5)
puts(~-5)
puts(!true)
puts(!false)
```


[+] **Arthimetic Operator:**

> Arthimetic operators take numerical values as operands and return them
  in a single value.

-------------------------------------------------------------------------
Operator 		| 		Description
-------------------------------------------------------------------------
'+' 			-> 		Adds values from both sides of the operator.
'-'				->		Subtract values from both sides of the operator.
'*' 			->      Multiply values from both sides of the operator.
'/' 			-> 		Divide left side operand with the right side 
						operand.
'`**`'			-> 		Right side operand becomes the exponent of left 
						side operand.
'%'				-> 		Divide left side operand with right side operand
 				 		returning remainder.
------------------------------------------------------------------------


**Example**

```

#!/usr/bin/ruby -w   
  
 puts("add operator")   
 puts(10 + 20)      
 puts("subtract operator")   
 puts(35 - 15)    
 puts("multiply operator")   
 puts(4 * 8)   
 puts("division operator")   
 puts(25 / 5)   
 puts("exponential operator")   
 puts(5 ** 2)   
 puts("modulo operator")   
 puts(25 % 4)   
```


[+] **Bitwise Operator**:
	
> Bitwise operators work on bits operands.

+----------------------------------------+
| Operator | Description                 |
|----------|-----------------------------|
| &        | AND operator                |
| \|       | OR operator                 |
| <<       | Left shift operator         |
| >>       | Right shift operator        |
| ^        | XOR operator                |
| ~        | Complement operator         |
+----------------------------------------+

[+] **Logical Operator**:
> Logical Operators work on bits operands.

+---------------------------------------------+
| Operator | Description                      |
|----------|----------------------------------|
| &&       | Logical AND operator             |
| ||       | Logical OR operator              |
| !        | Logical NOT operator             |
+---------------------------------------------+

```

### Descriptions:

1. **Logical AND (`&&`)**:
   - Returns `true` if both operands are `true`, otherwise `false`.

2. **Logical OR (`||`)**:
   - Returns `true` if at least one operand is `true`, otherwise `false`.

3. **Logical NOT (`!`)**:
   - Negates the operand. Returns `true` if the operand is `false`, and vice versa.

```


[+] **Ternary Operator**:

+------------------------------------+
|	Operator	|		Description				   |	
|------------------------------------|
|		?:		  ->  Conditional operator | 	
+------------------------------------+

**Example code:**

```
#!/usr/bin/ruby -w

puts("Ternary Operator")
puts(2<5 ? 5:2)
puts(5<2 ? 5:2)

```

[+] **Assigment Operator:**

Sure! Here's a markdown table summarizing the assignment operators in Ruby along with their descriptions:

+---------------------------------------------------------------------------------------------------------------------------------+
| Operator | Description                             																																							|
|----------|----------------------------------------------------------------------------------------------------------------------|
| `=`      | Assigns a value to a variable.          																																							|
| `+=`     | Adds the right operand to the left operand and assigns the result to the left operand. 															|
| `-=`     | Subtracts the right operand from the left operand and assigns the result to the left operand. 												|
| `*=`     | Multiplies the left operand by the right operand and assigns the result to the left operand. 												|
| `/=`     | Divides the left operand by the right operand and assigns the result to the left operand. 														|
| `%=`     | Performs modulus on the left operand with the right operand and assigns the result to the left operand. 							|
| `**=`    | Raises the left operand to the power of the right operand and assigns the result to the left operand. 								|
| `<<=`    | Performs a left shift on the left operand and assigns the result to the left operand. 																|
| `>>=`    | Performs a right shift on the left operand and assigns the result to the left operand. 															|
| `&=`     | Performs a bitwise AND on the left operand and assigns the result to the left operand. 															|
| `\|=`    | Performs a bitwise OR on the left operand and assigns the result to the left operand.                                |
| `^=`     | Performs a bitwise XOR on the left operand and assigns the result to the left operand.															  |
+---------------------------------------------------------------------------------------------------------------------------------+

### Descriptions:
```
1. **`=`**: Assigns the value of the right operand to the left operand.

2. **`+=`**: Adds the value of the right operand to the left operand
						 and assigns the result to the left operand.

3. **`-=`**: Subtracts the value of the right operand from the left 
						 operand and assigns the result to the left operand.

4. **`*=`**: Multiplies the left operand by the right operand and
						  assigns the result to the left operand.

5. **`/=`**: Divides the left operand by the right operand and assigns
						  the result to the left operand.

6. **`%=`**: Performs modulus on the left operand with the right 
						 operand and assigns the result to the left operand.

7. **`**=`**: Raises the left operand to the power of the right 
						 operand and assigns the result to the left operand.

8. **`<<=`**: Performs a left shift on the left operand and assigns 
							the result to the left operand.

9. **`>>=`**: Performs a right shift on the left operand and assigns
						  the result to the left operand.

10. **`&=`**: Performs a bitwise AND on the left operand and assigns
							the result to the left operand.

11. **`\|=`**: Performs a bitwise OR on the left operand and assigns
							 the result to the left operand.

12. **`^=`**: Performs a bitwise XOR on the left operand and assigns
 							the result to the left operand.

```

**Assigment Operator Code Example:**
```
Certainly! Here are code examples demonstrating the use of various assignment operators in Ruby:

```ruby
# Assignment Operator (=)
x = 10
puts "x = #{x}"  # Output: x = 10

# Addition Assignment Operator (+=)
x += 5
puts "x += 5: #{x}"  # Output: x += 5: 15

# Subtraction Assignment Operator (-=)
x -= 3
puts "x -= 3: #{x}"  # Output: x -= 3: 12

# Multiplication Assignment Operator (*=)
x *= 2
puts "x *= 2: #{x}"  # Output: x *= 2: 24

# Division Assignment Operator (/=)
x /= 4
puts "x /= 4: #{x}"  # Output: x /= 4: 6

# Modulus Assignment Operator (%=)
x %= 4
puts "x %= 4: #{x}"  # Output: x %= 4: 2

# Exponentiation Assignment Operator (**=)
x **= 3
puts "x **= 3: #{x}"  # Output: x **= 3: 8

# Left Shift Assignment Operator (<<=)
x <<= 2
puts "x <<= 2: #{x}"  # Output: x <<= 2: 32

# Right Shift Assignment Operator (>>=)
x >>= 1
puts "x >>= 1: #{x}"  # Output: x >>= 1: 16

# Bitwise AND Assignment Operator (&=)
x &= 5
puts "x &= 5: #{x}"  # Output: x &= 5: 4

# Bitwise OR Assignment Operator (|=)
x |= 10
puts "x |= 10: #{x}"  # Output: x |= 10: 14

# Bitwise XOR Assignment Operator (^=)
x ^= 6
puts "x ^= 6: #{x}"  # Output: x ^= 6: 8
```

### Explanation:
```
1. **`=`**: Simple assignment operator sets the value of `x` to `10`.
2. **`+=`**: Adds `5` to `x` (which is `10`), resulting in `15`.
3. **`-=`**: Subtracts `3` from `x` (which is now `15`), resulting in `12`.
4. **`*=`**: Multiplies `x` (which is now `12`) by `2`, resulting in `24`.
5. **`/=`**: Divides `x` (which is now `24`) by `4`, resulting in `6`.
6. **`%=`**: Finds the modulus of `x` (which is now `6`) with `4`, resulting in `2`.
7. **`**=`**: Raises `x` (which is now `2`) to the power of `3`, resulting in `8`.
8. **`<<=`**: Left shifts `x` (which is now `8`) by `2` bits, resulting in `32`.
9. **`>>=`**: Right shifts `x` (which is now `32`) by `1` bit, resulting in `16`.
10. **`&=`**: Performs a bitwise AND operation on `x` (which is now `16`) with `5`, resulting in `4`.
11. **`\|=`**: Performs a bitwise OR operation on `x` (which is now `4`) with `10`, resulting in `14`.
12. **`^=`**: Performs a bitwise XOR operation on `x` (which is now `14`) with `6`, resulting in `8`.

```



[+] **Comparison Operator:**

+---------------------------------------------------------------------------------------------------------------------------------------------+
| Operator | Description                             																																													|
|----------|----------------------------------------------------------------------------------------------------------------------------------|
| `==`     | Equal to: Returns `true` if both operands are equal, otherwise `false`. 																													|
| `!=`     | Not equal to: Returns `true` if operands are not equal, otherwise `false`. 																											|	
| `>`      | Greater than: Returns `true` if left operand is greater than the right operand, otherwise `false`. 															|
| `<`      | Less than: Returns `true` if left operand is less than the right operand, otherwise `false`. 																		|
| `>=`     | Greater than or equal to: Returns `true` if left operand is greater than or equal to the right operand, otherwise `false`. 			|
| `<=`     | Less than or equal to: Returns `true` if left operand is less than or equal to the right operand, otherwise `false`. 						|
+---------------------------------------------------------------------------------------------------------------------------------------------+

**For Example:**
Certainly! Here's an example Ruby code that demonstrates the use of comparison operators:

**Descriptions:**
```
==: Checks if two values are equal.
Returns true if both operands are equal, otherwise false.

!=: Checks if two values are not equal.
Returns true if operands are not equal, otherwise false.

>: Checks if the left operand is greater than the right operand.
Returns true if the left operand is greater than the right operand, otherwise false.

<: Checks if the left operand is less than the right operand.
Returns true if the left operand is less than the right operand, otherwise false.

>=: Checks if the left operand is greater than or equal to the right operand.
Returns true if the left operand is greater than or equal to the right operand, otherwise false.

<=: Checks if the left operand is less than or equal to the right operand.
Returns true if the left operand is less than or equal to the right operand, otherwise false.

```

```Ruby
# Comparison Operators Example

# Equal to (==)
x = 5
y = 5
if x == y
  puts "#{x} is equal to #{y}"
else
  puts "#{x} is not equal to #{y}"
end

# Not equal to (!=)
a = 10
b = 7
if a != b
  puts "#{a} is not equal to #{b}"
else
  puts "#{a} is equal to #{b}"
end

# Greater than (>)
p = 15
q = 10
if p > q
  puts "#{p} is greater than #{q}"
else
  puts "#{p} is not greater than #{q}"
end

# Less than (<)
m = 3
n = 8
if m < n
  puts "#{m} is less than #{n}"
else
  puts "#{m} is not less than #{n}"
end

# Greater than or equal to (>=)
r = 20
s = 20
if r >= s
  puts "#{r} is greater than or equal to #{s}"
else
  puts "#{r} is neither greater than nor equal to #{s}"
end

# Less than or equal to (<=)
u = 12
v = 15
if u <= v
  puts "#{u} is less than or equal to #{v}"
else
  puts "#{u} is neither less than nor equal to #{v}"
end
```

### Explanation:
```
1. **Equal to (`==`)**:
   - Checks if `x` is equal to `y`. In this case, both `x` and `y` are `5`, so it outputs `5 is equal to 5`.

2. **Not equal to (`!=`)**:
   - Checks if `a` is not equal to `b`. Here, `a` is `10` and `b` is `7`, so it outputs `10 is not equal to 7`.

3. **Greater than (`>`)**:
   - Checks if `p` is greater than `q`. Since `p` is `15` and `q` is `10`, it outputs `15 is greater than 10`.

4. **Less than (`<`)**:
   - Checks if `m` is less than `n`. Here, `m` is `3` and `n` is `8`, so it outputs `3 is less than 8`.

5. **Greater than or equal to (`>=`)**:
   - Checks if `r` is greater than or equal to `s`. Both `r` and `s` are `20`, so it outputs `20 is greater than or equal to 20`.

6. **Less than or equal to (`<=`)**:
   - Checks if `u` is less than or equal to `v`. Here, `u` is `12` and `v` is `15`, so it outputs `12 is less than or equal to 15`.

```

**Example Code:**

```Ruby

#!/usr/bin/ruby -w

puts("Comparison Operator")
puts(2==5)
puts(2!=5)
puts(2>5)
puts(2<5)
puts(2>=5)
puts(2<=5)

```



**[+] Range Operator:**

> Range operators create a range of successive values consisting of a 
  start, end range of values in between.

  The `(..) creates a range including` the last term and (...) creates a
  range `excluding the last term`.

  For example. for the range of 1..5, output will range from 1 to 5.
  and for the range of 1...5, output will range from 1 to 4.


+------------------------------------------------------+
| Operator							|  Description  							 |
|												|															 |	
|------------------------------------------------------|
|		..			->  Range is inclusive of the last term.	 |	
|																											 |	
|-------------------------------------------------------
|		...     ->  Range is exclusive of the last term.	 |
|																											 |	
+------------------------------------------------------+


**Code Example:**

> Inclusive Range Operator('..'):

```
range = 1..5
puts range.to_a.inspect		# Output: [1,2,3,4,5]

```

> Exclusive Range Operator('...'):
```
range = 1...5
puts range.to_a.inspect 	# output: [1,2,3,4].

```

> character Range Operator('a'..'z'):
```
char_range = 'a'..'z'
puts char_range.to_a.inspect  # output: ["a", "b", "c", ..., "z"]

```

> Ranges in Ruby are commonly used in loops, conditional statements,
  and wherever a sequence of consecutive values is needed.
  They can also be converted to arrays using ``.to_a`.


# Ruby Variables:

> Ruby variables are locations which hold data to be used in the programs. Each variable has a 
  different name. These variable names are based on some naming conventions. Unlike other 
  programming languages, there is no need to declare a variable in Ruby.
  A prefix is needed to indicate it.


  [+] There are four types of variables in Ruby:

  * global Variable ($apple).
  * Instance Variable (@apple).
  * Class Variable (@@apple).
  * constant (APPLE).

# Local Variables:

> A local variable name starts with a lowercase letter or underscore (_). It is only accessible or
  have its scope within the block of its initialization. Once the code block completes, variable 
  has no scope.

  When uninitialized local variables are called, they are interpreted as call to a method that has
  no arguments.

### Key Points and Tips:

1. **Variable Scope:**
   - **Local to Method:** `formatted_message` is local to the `alert` method. It is only accessible within that method and will not be recognized outside of it.
   - **Local to Main Script:** `alert_message` is defined outside any method, making it accessible throughout the main script (below its definition).

2. **Variable Usage:**
   - Local variables can only be used where they are defined. For example, `formatted_message` is used within the `alert` method but not outside of it.
   - Local variables should be clearly named to reflect their purpose and avoid confusion.

3. **Error Prevention:**
   - Always ensure that you are using the correct variable names within the scope they are defined. If you attempt to use a variable outside its scope (e.g., `formatted_message` outside the `alert` method), Ruby will raise an error.

4. **Scope Awareness:**
   - Be aware of variable scope when defining and using variables in Ruby. Variables defined within a block or method are not accessible outside of those constructs, and vice versa.



# Class Variables

> A class variable name start with `@@sign`. They need to be initialized before use. A class 
  variable belongs to the whole class and can be accessible from anywhere inside the class.
  If the value will be changed at one instance, it will be changed at every instance.

  A class variable is shared by all the descendents of the class. An uninitialized class variable
  will result in an error.

**Example:**

```
#!/usr/bin/ruby

class States
   @@no_of_states=0
   def initialize(name)
      @states_name=name
      @@no_of_states += 1
   end
   def display()
     puts "State name #@state_name"
    end
    def total_no_of_states()
       puts "Total number of states written: #@@no_of_states"
    end
end

# Create Objects
first=States.new("Assam")
second=States.new("Meghalaya")
third=States.new("Maharashtra")
fourth=States.new("Pondicherry")

# Call Methods
first.total_no_of_states()
second.total_no_of_states()
third.total_no_of_states()
fourth.total_no_of_states()
```

> In the above example, `@@no_of_states` is a class variable.

Output:

Total number of states written: 4
Total number of states written: 4
Total number of states written: 4
Total number of states written: 4



# Instance Variables

> An instance variable name starts with `@ sign`. It belongs to one instance of the class and can 
  be accessed from any instance of the class within a method. They only have limited access to a 
  particular instance of a class.

  They don't need to be initialize. An uninitialized instance variable will have a nul value.

**Example:**

```
#!/usr/bin/ruby

class States
   def initialize(name)
      @states_name=name
   end
   def display()
      puts "States name #@states_name"
    end
end

# Create Objects
first=States.new("Assam")
second=States.new("Meghalaya")
third=States.new("Maharashtra")
fourth=States.new("Pondicherry")

# Call Methods
first.display()
second.display()
third.display()
fourth.display()


> In the above example, '@states_name' is the instance variable.
```

**Output:**

States name Assam
States name Meghalaya
States name Maharashtra
States name Pondicherry


# Global Variables

> A global variable name starts with a '$' sign. Its scope is globally, means it can be accessed
  from any where in a program.

  An uninitialized global variable will have a nil value. It is advised not to use them as they 
  make programs cryptic and complex.

  There are a number of predefined global variables in Ruby.

  **Example:**

```
#!/usr/bin/ruby

$global_var = "GLOBAL"
class One
  def display
     puts "Global variable in One is #$global_var"
  end
end
class Two
  def display
     puts "Global variable in Two is #$global_var"
  end
end

oneobj = One.new
oneobj.display
twoobj = Two.new
twoobj.display


> In the above example, @states_name is the instance variable.
```

**Output:**
Global variable in one is GLOBAL.
Global variable in two is GLOBAL.




### Local Variables
- **Scope:** Limited within the block of initialization.
- **Naming:** Starts with a lowercase letter or underscore (_).
- **Initialization:** No need to initialize. An uninitialized local variable is interpreted as a method with no arguments.

### Global Variables
- **Scope:** Its scope is global.
- **Naming:** Starts with a `$` sign.
- **Initialization:** No need to initialize. An uninitialized global variable will have a `nil` value.

### Instance Variables
- **Scope:** It belongs to one instance of a class.
- **Naming:** Starts with an `@` sign.
- **Initialization:** No need to initialize. An uninitialized instance variable will have a `nil` value.

### Class Variables
- **Scope:** Limited to the whole class in which they are created.
- **Naming:** Starts with an `@@` sign.
- **Initialization:** They need to be initialized before use. An uninitialized class variable results in an error.



# Ruby Data types:

> Data types represents a type of data such as text, string, numbers, etc.
  There are different data types in Ruby:

* Numbers.
* Strings.
* Symbols.
* Hashes.
* Arrays.
* Booleans.


### Numbers:

Integers and floating point numbers come in the category of numbers.

Integers are held internally in binary form. Integer numbers are numbers 
without a fraction. According to their size, 

**There are two types:**

1. Bignum.
2. Fixnum.


```
Class Description Example:

Fixnum      | They are normal numbers           |1
Bignum      | They are big numbers        |111111111111
Float       | Decimal numbers             |3.0
Complex     | Imaginary numbers           | 4 + 3i
Rational    | They are fractional numbers | 9/4
BigDecimal  | Precision decimal numbers   | 6.0

```  


**Example**:

>> 3 + 5
>> 4.0 + 2
>> 4.0 + 2.0
>> 17.0/2
>> 17/2
>> 17 % 2
>> 17.0 % 2
>> 17.0 % 2.0

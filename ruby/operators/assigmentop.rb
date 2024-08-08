=begin

In Ruby, the primary assignment operator is =. 
This operator assigns a value to a variable. 
Apart from the basic assignment operator, 
there are also compound assignment operators, 
which combine assignment with arithmetic or logical operations. 
Here's a comprehensive list with examples for each type:

=end

# [1]. Basic Assigment Operator(`=`):
puts "Basic Assigment Operator(`=`)"
x = 404
puts x # Output: 404.

# [2]. Compound Assignment Operators:
# These operators combine assignment with another operation (arthimetic or logical).

# [2]. Addition and Assignment (`+=`):
puts "\n[+] Addition and Assignment (`+=`)"
a = 10
a += 5
puts a

# [3]. Subtraction and Assigment (`-=`):
puts "\n[+] Subtraction and Assigment (`-=`)"
a = 404
a -= 12
puts a

# [4] Multiplication and Assignment (*=):

puts "\n[+] Multiplication and Assignment (`*=`)"
a = 100
a *= 200
puts a

puts "\n[+] Division and Assignment (`/=`)"
a = 25
a /= 5
puts a

# [5] Exponential and Assignment (`%=`):
puts "\n[+] Exponential and Assignment (`%=`)"
e = 17
e %= 5
puts e

# [6] Exponential and ASsigment `(**=)`:
puts "\n[+] Exponential and Assignment (`**=`)"
f = 2
f **= 3  # Equivalent to: f = f ** 3
#puts f   # Output: 8


# [7] Bitwise AND and Assignment (&=):

g =  0b1010  # Binary representation of 10
g &= 0b1100 # Equivalent to: g = g & 0b1100
puts g     # Output: 8 (which is 0b1000 in binary)

# [8] Bitwise OR and Assignment (|=):
puts "\n[+] Bitwise OR and Assignment (`|=`)"
h =  0b1010  # Binary representation of 10
h |= 0b1100 # Equivalent to: h = h | 0b1100
puts h     # Output: 14 (which is 0b1110 in binary)

# [9] Bitwise XOR and Assignment (^=):
puts "\n[+] Bitwise XOR and Assignment (`^=`)"

i =  0b1010  # Binary representation of 10
i ^= 0b1100 # Equivalent to: i = i ^ 0b1100
puts i     # Output: 6 (which is 0b0110 in binary)

# [10] Left Shift and Assignment (<<=):
puts "\n[+] Left Shift and Assignment (`<<=`):"

j = 0b0010  # Binary representation of 2
j <<= 2     # Equivalent to: j = j << 2
puts j      # Output: 8 (which is 0b1000 in binary)

# [11] Right Shift and Assignment (>>=):
puts "\n[+] Right Shift and Assignment (`>>=`):"

k = 0b1000  # Binary representation of 8
k >>= 1     # Equivalent to: k = k >> 1
puts k      # Output: 4 (which is 0b0100 in binary)

# Notes:

=begin

* Compound assignment operators are shorthand for performing an
  operation and then assigning the result back to the variable.

* They are particularly useful for concise and readable code when
  manipulating variables in loops, conditionals, and other situations
  where repeated modification is needed.

=end


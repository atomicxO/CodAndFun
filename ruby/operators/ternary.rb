=begin

In Ruby, the `ternary operator`(also known as the `conditional operator`)
is used for concise conditional expressions. Its syntax is: 

```
condition ? true_expression : false_expression

```

[+] Here's how it works:

* 'condition' is evaluated first.
* if 'condition' is true, 'true_expression' is evaluated and returned.
* if 'condition' is false, 'false_expression' is evaluated and returned.

=end


# [1]: Basic Example:
puts "[+] Checking you are adult or not: "
age = 20
message = age >= 18 ? "Adult." : "Minor."
puts "-> " + message


# [2]: Assigning Variables:
puts "\n[+] Checking this day is sunny or not: "
is_sunny = true
activity = is_sunny ? "Go to the beach." : "Stay Indoors."
puts "-> " + activity


# [3]: Using Ternary Operator with Methods:


def even_or_odd(number)
	number % 2 == 0 ? "-> even" : "-> odd"
end
puts "\n[+] Number is even or odd: "
puts  even_or_odd(4)
puts  even_or_odd(7)

# [4]: Returning Values from Methods:

def max(num1, num2)
	num1 > num2 ? num1 : num2
	end

puts "\n[+] Which Number is Maximum: "

	puts max(5,9)
	puts max(10,24)

# [5]: Nested Ternary Operators:

def students_grade(score)
	score >= 90 ? "A" : (score >= 80 ? "B" : "C")
end

puts "\n[+] Giving grades to a student according to the marks: "
puts students_grade(95)
puts students_grade(82)
puts students_grade(75)
# Note:-

# The ternary operator `condition` ? `true_expression` : `false_expression` is an expression,not a statement, so it returns a value.
# It's useful for simple conditional assignments and can improve code readability when used appropriately. However, nesting ternary operators excessively can reduce readability, so it's often recommended to use them judiciously.


# [6]: DISCOUNT PERCENTAGE:

def discount_percentage(age, is_student)
  age >= 65?
  "-> Senior Discount" :
    is_student ? 
    "-> Student Discount" :
    "-> No Discount"
end
puts "\n[+] Getiing discount according to age: "
puts discount_percentage(70,false)
puts discount_percentage(20,true)
puts discount_percentage(40,false)

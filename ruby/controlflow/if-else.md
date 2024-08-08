# Ruby if-else Statement

The Ruby if else statement is used to test condition. There are various types 
of if statement in Ruby.


- if statement.
- if-else statement.
- if-else-if(elsif) statement.
- ternay(shortened if statement) statement.


### Ruby `if Statement`:

> Ruby if statement tests the condition. The if block statement is executed if 
  condition is true.

```
Syntax:

if(condition)
// code to be executed
end

```

**For Example**:

```
a = gets.chomp_i

if a >= 18
print ("You are eligible to Vote.\n")
end

```

**Output**:

```
>> If you put a number greater than 18 then you get the below string otherwise 
   a blank line.

>> You are legit to Vote.
```

---

# Ruby if else:


Ruby if else statement tests the condition. The `if block statement` is
executed if condition is `true` otherwise `else` block statement is executed.

```
Syntax:

if(condition)
//code if condition is true
else
// code if condition  is false.
end

```

** Example Code: **
```
#!/usr/bin/ruby -w

a = gets.chomp.to_i

if a >= 18
  puts ("You are legit to Vote.\n")
else
  puts ("You are underage!\n")
end

```

**Output:**
```
34
You are legit to Vote.
                                                                                             
17
You are underage!
```


# Ruby if else if (elsif):

Ruby `if else if statement` tests the condition. The if block statement is 
executed if condition is true otherwise else block statement is executed.

```
**Syntax**

if(condition1)
// code to be executed if condition1 is true
elsif(condition2)
// code to be executed if condition2 is true
else
// code to be executed if condition2 is true

end
```

**Example Code:**
```
#!/usr/bin/ruby -w

print("Enter your age: ")
age = gets.chomp.to_i

if age < 18
  puts "\n[+] You are not Allowed to Vote."
elsif age >= 18 && age <= 102
  puts "\n[+] You are Allowed to Vote."
else
  puts "\n[-] May be You Input something wrong please input valid,\n>> Have a Good Day"
end


```

**Output:**
```
Enter your age: 12

[+] You are not Allowed to Vote.

Enter your age: 29

[+] You are Allowed to Vote.

```


# Ruby Ternary Statement:

In Ruby ternary statement, the if statement is shortened. First if evaluates 
an expression for true or false value then execute one of the statements.


```
>> Syntax:

test-expression ? if-true-expression : if-false-expression

```

**Example Code:**
```
var = gets.chomp.to_i
a = (var > 3 ? true:false);
puts a

```

**Output:**
```
~$ ruby main.rb
2
false

~$ ruby main.rb
5
true

```


---




# Ruby Case Statement:

In Ruby, we use `case` instead of `switch` and `when` instead of `case`.
The case statement matches one statement with multiple conditions just 
like a switch statement in other languages.

**Syntax:**
```
case expression
[when expression [,expression ...] [then]]
code ]...
[else
  code]
  end

```

**Example code:**
```
#!/usr/bin/ruby -w

print "Enter your day: "
day = gets.chomp

case day
when "Tuesday"
puts "Wear Red or Orange."

when "Wednesday"
puts "Wear Green."

when "Thursday"
puts "Wear yellow."

when "Friday"
puts "Wear White."

when "Saturday"
puts "Wear Black."

else
puts "Whatever you like."

end
```


**Output:**
```
~$ Enter your day: Sunday
   Wear Whatever you like

~$ Enter your day: Saturday
   Wear Black. 

```

[+] **Note**

```
Look at the above output, 'conditions' are 'case sensitive'. So, Keep it in 
your mind.
```

---


# Ruby-For Loop:
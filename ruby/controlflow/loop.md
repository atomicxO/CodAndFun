# Ruby for Loop

Ruby `for loop iterates` over a `specific range of numbers`. Hence, for loop is 
used if a program has fixed number of iterations.

Ruby For loop will execute once for each element in expression.

**Syntax:**

```
for variable [, variable ...] in expression [do]
	code
end

```

##### Ruby for loop using range

**Example:**

```
a = gets.chomp.to_i
for i in 1..a do
puts i
end

```


---



# Ruby While Loop

The `Ruby while loop` is used to `iterate a program several times`. 
If the number of iterations is not fixed for a program, `while loop` is used.
 
Ruby while loop `executes` a condition while a `condition` is `true`. 


**Syntax:**

```
while condition [do]
code
end

```

**Example:**

```
#!/usr/bin/ruby 

x = gets.chomp.to_i

while x >= 0
puts x
end

```

**Output:**

```
5
4
3
2
1
0

```


##### Ruby do while Loop

The Ruby do while loop iterates a part of program several times. It is quite 
similar to a while loop with the only difference that loop will execute at least
once. It is due to the fact that in do while loop, condition is written at the 
end of the code.

**Syntax:**

```
loop do 
puts "Checking for answers"
answer = gets.chomp
if answer != '5'
break
end
end

```

**Output**:
```
Checking for answers: 6.
Checking for answers: 5.

```


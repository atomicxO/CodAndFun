# Ruby redo Statement:

# Rudy redo statement is used to repeat the current iteration of the loop. 
# The redo statement is executed without evaluating the loop's condition.

# Notice: The redo statement is used inside a loop.

=begin

```
redo
```
=end

# Example Usage of redo statement in Ruby;

used_ids = [101, 102, 103]
new_id = nil

loop do 
  new_id = rand(100..400)
  if used_ids.include?(new_id) # store ko .include kar diya and then new id use karde question mark se.
    puts "ID #{new_id} is already used. Generating a new one..."
    redo
  else
    break
  end
end

puts "[+] Generated a unique ID: #{new_id}."



=begin

### Key Points to Remember:

* Scope: 'redo' restarts the current iteration of the loop and does not recheck the loop 
         condition.

* Usage: It is particularly useful in situations where you need to handle temporary 
         conditions or retry operations within the same iteration.

* Limitations: Be cautious with `redo` as it can potentially lead to infinite loop if the
               retry condition is never resolved. Always ensure that there's a condition
               that eventually allows the loop to proceed.

=end


# If you don't understand Look here may you get what i'm trying to say:-

# `redo` keyword.
# The 'redo` keyword is used within a loop to re-execute the current iteration.
# when `redo` is encountered, it does not re-evaluate the loop's condition; it simply starts the
# iteration over from the beginning.

# Let's see an example code:

i = 0

while i < 5
  puts "i is #{i}"
  if i == 2
    puts "Redoing iteration when i is 2.\n"
    i += 1
    redo
  end
  i += 1
end

=begin

Note:

Explanation of redo statement:

> The while loop will continue to iterate as long as i < 5.
> When i is 2, the redo keyword is encountered.
> This causes the current iteration to start over from the beginning without re-evaluating the
  condition.
> The value of i is incremented before the redo to prevent an infinite loop.

If you remove the incementation when the redo encountered you get in infinite loop this will crash
your program.

=end



#################
#     Retry     #
#################


#!/usr/bin/ruby -w
=begin

# `retry` Keyword

> The `retry` keyword is used inside a `begin-rescue` block to retry the execution of the code that  caused an exception. Unlike `redo`, `retry` re-executes the entire `begin` block.

=end


# Let's see an example of retry command usage:

def divide(x, y)
  begin
    result = x / y
    puts "Result is #{result}."
  rescue ZeroDivisionError
    puts "Cannot divided by zero. Please provide a non-zero denominator."
    # Retry the block of code.
    retry
  end
end

divide(10, 0)  # This will cause a ZeroDivisonError and retry


=begin

[+] Explanation:

1. The `begin` block tries to execute the division operation.
2. If a `ZeroDivisionError` is raised (when 'y' is '0'), the `rescue` block is executed.
3. In the 'rescue' block, a message is printed, and then `retry` is used to re-execute the entire
   `begin` block.
4. Since `retry` will re-execute the `begin` block, it will re-prompt the user or reattempt the
   operation, which could be useful if the error condition can be corrected dynamically.

=end


puts "\n\n"

#!/usr/bin/ruby -w

def get_num
  begin
    puts "Please enter a Number: "
    input = gets.chomp
    number = Integer(input) # This will raise an exception if the input is not an integer
    puts "You entered : #{number}."
  rescue ArgumentError
    puts "That's not a valid number. Please Try again."
    retry
  end
end

get_num

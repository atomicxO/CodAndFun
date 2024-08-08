#!/usr/bin/ruby -w

# Define a Global Variable
$global_variable = "I am a global variable!"  # Fixed typo and added space

class Example
  def show_global
    # Access the global variable within a method
    puts "Accessing global variable within a method: #{$global_variable}"
  end
end

# Create an instance of the Example Class
example_instance = Example.new

# Access and display the global variable from outside the class
puts "Accessing global variable from outside the class: #{$global_variable}"  # Fixed typo

# Call the method that accesses the global variable
example_instance.show_global

# Modify the global variable
$global_variable = "The global variable has been changed!"  # Fixed typo

# Display the modified global variable
puts "Modified global variable: #{$global_variable}."

# Call the method again to show the updated global variable
example_instance.show_global

=begin

### Explanation:

1. **Global Variable Definition:**
   - `$global_variable` is defined outside any class or method, making it a global variable. Global variables in Ruby are prefixed with a dollar sign (`$`).

2. **Accessing Global Variable:**
   - Global variables can be accessed from anywhere in the Ruby program, including inside methods, classes, and outside of them. The `show_global` method within the `Example` class accesses the global variable and prints its value.

3. **Modifying Global Variable:**
   - You can modify a global variable from any part of the code. In this example, `$global_variable` is updated to a new value, and the change is reflected wherever the global variable is accessed.

4. **Usage:**
   - The global variable is accessed both from outside the class and within a method. The output will show the initial value, the modified value, and how it’s reflected across different parts of the code.

### Important Notes:
- **Global Scope:** Global variables are accessible from any scope in your Ruby program, which can sometimes lead to code that is harder to maintain and debug.
- **Best Practices:** It's generally advisable to use global variables sparingly. Consider using instance variables or class variables if you need to maintain state within a specific scope. Global variables can lead to unpredictable behavior if they are modified in multiple places.

=end


#!/usr/bin/ruby -w

# Method definition
def alert(message)
  # Local variable within the method
  # 'formatted_message' is a local variable to the 'alert' method.
  # It is used to store a formatted string that includes the `message` parameter.
  formatted_message = "[+] You have a message from the programmer: #{message}."
  
    # output the formatted message
    puts formatted_message
end

# Local Variables outside the method
# 'alert_message' is a local variable in the main script
# It is used to store the message that will be passed to the 'alert' method.
alert_message = "You are missing a semicolon ';'"

# call the method with the local variable as an argument
# The method 'alert' receives 'alert_message' as 'message'
alert(alert_message)

# Important Tips:
# 1. Local variables in Ruby are defined within the scope of a method, block, or class.
# 2. They cannot be accessed outside of the scope where they are defined. For example, 'formatted_message' is only accessible inside the 'alert' method.
# 3. When you define a variable outside of a method or block, like 'alert_message', it can be used anywhere below its definition within the same scope.
# 4. Always ensure the variable names inside methods or blocks match those you intend to use to avoid `NameError` issues.



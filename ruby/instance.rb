#!/usr/bin/ruby -w

class Person
  # Initialize method to set up instance variables
  def initialize(name,age)
    @name = name
    @age = age
end


# Instance method to display person's details

def details
  "Name: #{@name}, Age: #{@age}."
end

# Instance method to celebrate birthday
def celebrate_birthday
  @age += 1
  puts "Happy birthday, #{@name}! You are now #{@age} years old."
end
end

# create instance of person

person1 = Person.new("Beta", 21)
person2 = Person.new("Alpha", 20)

# Access details using instance methods

puts person1.details
puts person2.details

# Celebrate birthday for person1

person1.celebrate_birthday

# Check updated details

puts person1.details

=begin

```
### Explanation:

1. **Instance Variable Definition:**
   - `@name` and `@age` are instance variables defined within the `initialize` method. They are used to store the state of an object created from the `Person` class.

2. **Initialization:**
   - The `initialize` method is called when a new instance of `Person` is created. It sets the values of `@name` and `@age` based on the arguments provided.

3. **Instance Method `details`:**
   - The `details` method is an instance method that returns a string with the person's name and age. It accesses the instance variables `@name` and `@age` to construct the string.

4. **Instance Method `celebrate_birthday`:**
   - The `celebrate_birthday` method increments the `@age` instance variable by 1 and prints a birthday message. This demonstrates how instance variables can be modified by instance methods.

5. **Usage:**
   - `person1` and `person2` are instances of the `Person` class, each with their own `@name` and `@age` values.
   - Methods like `details` and `celebrate_birthday` can access and modify the instance variables specific to each object.

Instance variables are crucial for maintaining the state of an object and can be accessed and modified by instance methods within the class. They are scoped to the instance of the class, meaning each 
object has its own set of instance variables.

=end

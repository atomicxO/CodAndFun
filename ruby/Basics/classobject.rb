c# Define a class representing a Fruit
class Fruit
  include Comparable  # Include Comparable module to enable comparisons
  
  attr_reader :name, :rating
  
  def initialize(name, rating)
    @name = name
    @rating = rating
  end
  
  # Implement the <=> operator for comparing fruits by rating
  def <=>(other)
    self.rating <=> other.rating
  end
  
  def to_s
    "#{name}: #{rating}"
  end
end

# Create instances of Fruit
apple = Fruit.new("Apple", 4)
banana = Fruit.new("Banana", 3)
orange = Fruit.new("Orange", 5)

# Compare fruits using <=>
puts "#{apple} <=> #{banana}: #{apple <=> banana}"  # Output: -1 (Apple is less than Banana)
puts "#{orange} <=> #{banana}: #{orange <=> banana}"  # Output: 1 (Orange is greater than Banana)
puts "#{apple} <=> #{orange}: #{apple <=> orange}"  # Output: -1 (Apple is less than Orange)

# Sorting an array of fruits
fruits = [orange, banana, apple]
sorted_fruits = fruits.sort
puts "Sorted fruits:"
sorted_fruits.each { |fruit| puts fruit }
# Output:
# Sorted fruits:
# Banana: 3
# Apple: 4
# Orange: 5

# Explanation:
# - The Fruit class includes the Comparable module and implements the <=> operator to compare fruits based on their rating.
# - When comparing two Fruit objects using <=>, it compares their rating attributes.
# - In the sorting example (fruits.sort), Ruby uses <=> internally to sort the fruits array based on the rating of each fruit.
#
# Key Points:
# - Implementing <=> allows instances of a class to be compared using comparison operators (<, <=, ==, >=, >).
# - The <=> operator returns -1, 0, or 1, which corresponds to less than, equal to, or greater than, respectively.
# - It's commonly used when defining custom sorting behavior or when objects need to be ordered in collections like arrays.
# - In summary, <=> is a powerful operator in Ruby for defining custom comparisons between objects, enabling sophisticated sorting and ordering capabilities.

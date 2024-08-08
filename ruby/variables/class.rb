#!/usr/bin/ruby

class Car
  # Class variable
  @@number_of_cars = 0

  def initialize(make, model)
    @make = make
    @model = model

    # increment the class variable each time a new instance is created
    @@number_of_cars += 1
  end

  # class method to access the class variable
  def self.number_of_cars
    @@number_of_cars
  end


  # Instance method to display car details
  def details
    "Make: #{@make}, Model: #{@model}"
  end
end

# Create instances of car

car1 = Car.new("Toyota". "Corolla")
car2 = Car.new("Honda", "Civiv")
car3 = Car.new("Ford", "Mustang")


# Access the number of cars created using the class method

puts "Total number of cars created: #{Car.number_of_cars}"

# Output details of each car
puts car1.details
puts car2.details
puts car3.details
puts car4.details
puts car5.details

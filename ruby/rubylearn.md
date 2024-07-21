# Learning Ruby:

#### Printing Output on the screen:

```
puts "Hello, World!"

This will print the hello world string on the screen.
```

#### Interactive shell variables:

```
irb(main):003:0> 3+2
=> 5

irb(main):003:0> 3*3
=> 9

irb(main):003:0> 5**5
|=> 25
\-> you can use '**' for squaring a number.

[+] Taking out thr square root of a number[using Math.function().
irb(main):003:0> Math.sqrt(9)
=> 3.0

```

#### Math Function():

`Math` is a built-in module for mathematics. Modules server two roles in 
Ruby. This shows one role:
* Grouping similar methods together under a familier name.
* `sqrt`, shorthand for "square root" with the parameter of `9`.


#### What if we wnat to remember the result of some of this math? Assign 	  the result to a variable.

```
rb(main):007:0> a = 3 ** 2
=> 9
irb(main):008:0> b = 4 ** 2
=> 16
irb(main):009:0> Math.sqrt(a+b)
=> 5.0
```


# Defining a Method in Ruby:


> We need to define a method!

```
irb(main):010:0> def hi
irb(main):011:1> puts "Hello World!"
irb(main):012:1> end
=> :hi
```



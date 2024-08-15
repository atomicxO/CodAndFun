# Range Object:

In Ruby, the `range` object represents a sequence of values with a start point and an endpoint.
It can be used in a variety of ways, such as creating sequences, iterating through a list, or
checking if a value falls within a specific range.


# Creating Ranges: 

Ranges are defined using either `..` *inclusive` or `...` (exclusive).

1. **Inclusive Ranges (`..`)**: Includes the endpoint.

```
range = 1..5
puts range.to_a
# Output: [1, 2, 3, 4, 5]

```
3. **Exclusive Ranges (`...`)**: Excludes the endpoint.
```
range = 1...5
puts range.to_a
# Output: [1, 2, 3, 4]

```

# Common Range Methods: 

1. `include?` Method: Checks if a value is within a range.
```
range = 1..10
puts range.include?(5)
# Output: True

range = 1..15
puts range.include?(19)
# Output: False
```

2. `cover?` Method: Similar to include? but more efficient for large ranges.

```
range = 1..10
puts range.cover?(5)
# Output: true

```

3. `step` Method: Iterates through the range, increasing by a specified step.

```
(1..10).step(2) do |i|
  puts i
end
# Output:
# 1
# 3
# 5
# 7
# 9

```


def unreliable_operation
  # Simulate an unreliable operation
  raise 'Network Error' if rand < 0.5  # 50% chance to raise an exception
  "Success"
end

attempts = 0

begin
  attempts += 1
  result = unreliable_operation
  puts "Operation result: #{result}"
rescue RuntimeError => e
  puts "Caught an exception: #{e.message}. Retrying..."
  retry if attempts < 3  # Retry up to 3 times
  puts "Failed after 3 attempts."
end


# Ruby Variables:

> Ruby variables are locations which hold data to be used in the programs. Each variable has a 
  different name. These variable names are based on some naming conventions. Unlike other 
  programming languages, there is no need to declare a variable in Ruby.
  A prefix is needed to indicate it.


  [+] There are four types of variables in Ruby:

  * global Variable ($apple).
  * Instance Variable (@apple).
  * Class Variable (@@apple).
  * constant (APPLE).

# Local Variables:

> A local variable name starts with a lowercase letter or underscore (_). It is only accessible or
  have its scope within the block of its initialization. Once the code block completes, variable 
  has no scope.

  When uninitialized local variables are called, they are interpreted as call to a method that has
  no arguments.

### Key Points and Tips:

1. **Variable Scope:**
   - **Local to Method:** `formatted_message` is local to the `alert` method. It is only accessible within that method and will not be recognized outside of it.
   - **Local to Main Script:** `alert_message` is defined outside any method, making it accessible throughout the main script (below its definition).

2. **Variable Usage:**
   - Local variables can only be used where they are defined. For example, `formatted_message` is used within the `alert` method but not outside of it.
   - Local variables should be clearly named to reflect their purpose and avoid confusion.

3. **Error Prevention:**
   - Always ensure that you are using the correct variable names within the scope they are defined. If you attempt to use a variable outside its scope (e.g., `formatted_message` outside the `alert` method), Ruby will raise an error.

4. **Scope Awareness:**
   - Be aware of variable scope when defining and using variables in Ruby. Variables defined within a block or method are not accessible outside of those constructs, and vice versa.



# Class Variables

> A class variable name start with `@@sign`. They need to be initialized before use. A class 
  variable belongs to the whole class and can be accessible from anywhere inside the class.
  If the value will be changed at one instance, it will be changed at every instance.

  A class variable is shared by all the descendents of the class. An uninitialized class variable
  will result in an error.

**Example:**

```
#!/usr/bin/ruby

class States
   @@no_of_states=0
   def initialize(name)
      @states_name=name
      @@no_of_states += 1
   end
   def display()
     puts "State name #@state_name"
    end
    def total_no_of_states()
       puts "Total number of states written: #@@no_of_states"
    end
end

# Create Objects
first=States.new("Assam")
second=States.new("Meghalaya")
third=States.new("Maharashtra")
fourth=States.new("Pondicherry")

# Call Methods
first.total_no_of_states()
second.total_no_of_states()
third.total_no_of_states()
fourth.total_no_of_states()
```

> In the above example, `@@no_of_states` is a class variable.

Output:

Total number of states written: 4
Total number of states written: 4
Total number of states written: 4
Total number of states written: 4



# Instance Variables

> An instance variable name starts with `@ sign`. It belongs to one instance of the class and can 
  be accessed from any instance of the class within a method. They only have limited access to a 
  particular instance of a class.

  They don't need to be initialize. An uninitialized instance variable will have a nul value.

**Example:**

```
#!/usr/bin/ruby

class States
   def initialize(name)
      @states_name=name
   end
   def display()
      puts "States name #@states_name"
    end
end

# Create Objects
first=States.new("Assam")
second=States.new("Meghalaya")
third=States.new("Maharashtra")
fourth=States.new("Pondicherry")

# Call Methods
first.display()
second.display()
third.display()
fourth.display()


> In the above example, '@states_name' is the instance variable.
```

**Output:**

States name Assam
States name Meghalaya
States name Maharashtra
States name Pondicherry


# Global Variables

> A global variable name starts with a '$' sign. Its scope is globally, means it can be accessed
  from any where in a program.

  An uninitialized global variable will have a nil value. It is advised not to use them as they 
  make programs cryptic and complex.

  There are a number of predefined global variables in Ruby.

  **Example:**

```
#!/usr/bin/ruby

$global_var = "GLOBAL"
class One
  def display
     puts "Global variable in One is #$global_var"
  end
end
class Two
  def display
     puts "Global variable in Two is #$global_var"
  end
end

oneobj = One.new
oneobj.display
twoobj = Two.new
twoobj.display


> In the above example, @states_name is the instance variable.
```

**Output:**
Global variable in one is GLOBAL.
Global variable in two is GLOBAL.




### Local Variables
- **Scope:** Limited within the block of initialization.
- **Naming:** Starts with a lowercase letter or underscore (_).
- **Initialization:** No need to initialize. An uninitialized local variable is interpreted as a method with no arguments.

### Global Variables
- **Scope:** Its scope is global.
- **Naming:** Starts with a `$` sign.
- **Initialization:** No need to initialize. An uninitialized global variable will have a `nil` value.

### Instance Variables
- **Scope:** It belongs to one instance of a class.
- **Naming:** Starts with an `@` sign.
- **Initialization:** No need to initialize. An uninitialized instance variable will have a `nil` value.

### Class Variables
- **Scope:** Limited to the whole class in which they are created.
- **Naming:** Starts with an `@@` sign.
- **Initialization:** They need to be initialized before use. An uninitialized class variable results in an error.


# Linkage

**Linkage** refers to the ability of a variable or function to be shared across 
different files or translation units.

1. **No Linkage:**

> A variable declared inside a function (like x in the block scope example)
  has no linkage. It can only be accessed within that function.

2. **Internal Linkage:**

> A variable or function with internal linkage can only be accessed within the
  same file. You can achieve this by using the static keyword.

  Summary of Examples

-> **Block Scope**: Variables declared inside {} are only accessible within
                    that block.

-> **Function Scope**: Variables declared inside a function cannot be accessed 
				    	outside of it.

-> **File Scope**: Variables declared outside any function can be accessed by
				   any function in the same file.

-> **Global Scope**: Global variables can be accessed by any function in any
                     file if declared correctly.

-> **Internal Linkage**: Using static restricts access to the same file only.

-> **External Linkage**: Global variables/functions can be accessed from other 
                         files.
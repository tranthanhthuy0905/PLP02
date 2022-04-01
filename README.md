# PLP02: Data types and naming conventions

Understanding how different types of data are represented in your programming language is a key step in being able to use it for bigger projects. Research the naming conventions in your language for variables (i.e., are they case sensitive? do they have to start with lower case letters? Can they start with numbers? Symbols? do programmers use underscores, as in "last_name", or do they use camel case (lastName))? Write a piece of code that creates variable of each of these common data types (where possible) and follows the naming conventions:

int
string
floating-point number
boolean
array/list
dictionary (sometimes called a hash or a map, depending on your language)

Note that not all languages will have all of these built-in types, and some might have other primitive types (for example, most C-family languages have pointers). If your language has other primitive types or doesn’t include some of the above types, modify your code as necessary.

In your example code, illustrate the important data type and operations features in your language. Write code that experiments with different operations applied on variables of the same data type and operations with variables of two different types: e.g. can you add ints and floats? Is the resulting variable an int (narrowing conversion) or a float (widening conversion)? What about division? Can you put different data types in the same array or list? Can one data type be converted to another either implicitly or explicitly (int to float, string to int, etc)?

Discussion questions:

Discussion questions:

- Does your language have keywords or reserved words? How many?
- What are the naming requirements for variables in your language?
- What about naming conventions? Are those enforced by the compiler/interpreter, or just standards in the community?

- Is your language statically or dynamically typed?
- Strongly typed or weakly typed?
- Explicitly typed or implicitly typed?
- Are some variables mutable while others are immutable?
- What are the operators available for each data type?
- Are mixed type operations allowed? If so, how are they accommodated?
- At what point are identifier names and operator symbols bound in your language? For example if you declare a (variable, class name, function name), when is it bound to the type, address? When are operators (+,\*, etc.) bound to their operations?

CODING EXAMPLE demonstrating the features above

EXAMPLE OF (one) ILLUSTRATIVE EXAMPLE:

If you put this line (or something similar) in a program and try to print x, what does it do?

x = "5" + 6

If it doesn't compile, why? Is there something you can do to make it compile?

Describe the limitations (or lack thereof) of your programming language as they relate to the coding example portion of the assignment (adding ints and floats, storing different types in lists, converting between data types). Are there other restrictions or pitfalls that the documentation mentions that you need to be aware of?
Are there built-in complex data types that are commonly used in your language? (hint: they’d probably appear fairly early in the documentation if so)

Make sure that your answers are clear, accurate, and fully formed: remember that these tutorials are public, and GitHub users don't have the context of the assignment that you do. Explain the reasoning behind the answers as much as possible. If there is no clear-cut answer to a question, explain why not. And cite your sources! You can incorporate code into your tutorial to show examples, but you should also have a file in your repository that is just code, which someone could download and run.

### References:
[GeeksforGeeks](https://www.geeksforgeeks.org/derived-data-types-in-c/)
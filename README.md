# SpaceRemoval
This is an exercise taken from [GeeksForGeeks.com](http://www.geeksforgeeks.org/remove-spaces-from-a-given-string/):

> Given a string, remove all spaces from the string and return it.
>```
>Input:  "g  eeks     for ge  eeks  "
>Output: "geeksforgeeks"
>```

I undertook this to explore low level C array manipulation as it demonstrates the work behind the scenes of functions such as Python's `"foo bar  foo".replace(' ','')` . Therefore I disallowed the use of any higher level constructs (e.g. a C++ `Vector`). I also faithfully followed their instructions to minimise the browser without looking at the solution.

GeeksForGeeks demonstrates the simple solution of iterating over the array until a space is found, then pushing back the remaining elements. I hadn't even attempted this solution; whilst it's not too difficult to push back array elements it just felt too 'messy' and I thought there must be a cleaner and more readable way of doing it (without even thinking about optimisation). My eventual solution was remarkably similar to their optimised solution (I didn't look, honest!), except that I had an extra loop to determine the size of the output array first. I guess I was being a little too cautious, but I also thought that in a similar but more complex real life situation, the extra loop might be easier to read and maintain without impacting performance too much.

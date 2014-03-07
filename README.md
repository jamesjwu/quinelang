#QuineLang

##Intro
Quinelang is a programming language where every program is a quine. A quine is a program that prints its own sourcecode. It is a very high performance language. It has no non side effects, and has the easiest syntax of any language out there: just type what you want!

Every program in QuineLang runs at most in linear time to the length of the program, and in O(1) space. 


##Installation
Installing quinelang is as simple as cloning the git file, putting the executable in your PATH, and running it. 


##Running QuineLang
It's very easy to write QuineLang. Just make a file with extension ".qlc", and compile it with the command: "./quinelang file.qlc"
For example,

```
$>>echo "I'm a quine" > quine.qlc;
$>>./quinelang quine.qlc
I'm a quine
```

##Some examples:
Some basic programs you can write in quinelang:

###Hello world 
Hello world in QuineLang is very easy:

```
hello world!
```

###Fibonacci
To print the first 5 fibonacci numbers:

```
1 1 2 3 5
```

###Merge sort
To write mergesort:

1. Take your list of integers you'd like to sort
2. Write them in ascending order into the file.
3. Compile.

For example, a program that sorts the list [1,5,6,4,3,2,4] would be:

```
[1,2,3,4,4,5,6]
```

As you can see, just one line of code sorts the list! Amazing!

###Subset sum
With preprocessing, quinelang can solve subset sum, an NP complete problem, in constant time!

1. Take your input set (say [1,2,3,-6,8]) and your integer [5].
2. Preprocess the input through a python or C subset sum calculator, and record the output. 
3. Put the output into a file:
```
[2,3]
```
4. Run it with the quinelang compiler! Spectacular!








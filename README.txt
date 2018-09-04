Computing prime numbers
-----------------------

A prime number (or a prime) is a natural number greater than 1 that cannot be
formed by multiplying two smaller natural numbers. A natural number greater than
1 that is not prime is called a composite number. For example, 5 is prime because
the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself. 
However, 6 is composite because it is the product of two numbers (2 × 3) that are 
both smaller than 6. 

The purpose of this exercise is to calculte prime numbers in most efficient way.

All code is contained in the same file : InfineTestCPP.cpp

Step 1
Write countPrimeSimple function which counts  all prime numbers in 
first-last range.

Step 2
Write countPrimeIn4Thread function which counts a number of prime numbers in paralel 
fashion (on 4 cores) using step 1 countPrimeSimple.

Step 3
Using code of Step1, write getPrimeInSetSimple function which returns a set of prime numbers
in first-last range in the single thread. Then write getPrimeInSet4Thread which, using paralelized
approach, returns a set containig all prime numbers in 2 - last range.


HOW TO BUILD
------------

Enter into the directory. Type: 

$cmake .

You should see CMake working:

-- The C compiler identification is GNU 6.3.0
-- The CXX compiler identification is GNU 6.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works

On Unix :

Once finished you will find a Makefile in the directory, so by typing:
$make

On Windows :

An solution will be generated, so you may use it for testing your code.


 

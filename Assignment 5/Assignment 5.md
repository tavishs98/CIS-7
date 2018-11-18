Part 1:
```
1. Proof by Contradiction:
   1. √2=p/q (Assume that √2 is rational and can be written as two integers p and q, which have no common factors)
  
   2. 2=p²/q² (Square both sides)
   
   3. 2q²=p² (Rewrite)
	
		2 is a factor of q and p, so it is not rational
		
2. Proof by Exhaustion:

    let n = 25, 100, 169,
    let m = √n
    
	1. m = √25, √100, √169
    2. m = 5, 10, 13
    3. m² = 25, 100, 169
    4. m² = n
    therefore n is a perfect square.

    n = (9 + 16), (81 + 9), or (144 + 25),
    9 = 3², 16 = 4², 81 = 9², 144 = 12², and 25 = 5²
    n is the sum of of two perfect squares.
	
3. Direct Proof:

   let A and B be two odd integers,
   Assume A + B is an even integer,
   => A = (2k1 + 1) and B = (2k2 + 1), where k1 and k2 are integers,
   => A + B = 2k1 + 1 + 2k2 + 1 by Associative property,
   => A + B = 2k1 + 2k2 + 1 + 1 by Commutative property,
   => A + B = 2(k1 + k2) + 2,
   
   let k1 + k2 = m,
   => A + B = 2m + 2,
   => A = B = 2(m + 1),
   let m + 1 = n,
   => A + B = 2n
   => A + B is even by the defintion of even integers,
   => the sum of two odd integers is even.
   
4. Direct Proof:

   let A be an even integer,
   => A = 2k + 1, where k is an integer,
   => A + A² = (2k + 1) + (2k + 1)²
   => A + A² = 2k + 1 + (4k² + 4k + 1)
   => A + A² = 4k² + 6k + 2
   => A + A² = (2k + 1)(2k + 2)
   => A + A² = (2k + 1) x 2(k + 1)
   let (2k + 1) = n1, where n1 is an even integer by the definition of even integers,
   let (k + 1) = n2,
   => 2n2 is an even integer by the defintion of even integers,
   => A + A² = n1 x 2n2
   => A + A² is even by the defintion of the product of even integers,
   => the sum of an even integer and its sqaure is even.

5. Proof by Contradiction:

   let n be an integer,
   assume n² is odd, but n is even,
   => n = 2k, where k is an integer,
   => n² = (2k)²
   => n² = 4k²
   => n² = 2(2k²)
   let 2k² = m,
   => n² = 2m
   => n² is an even by the definition of even integers,
   this is a contradiction, n² is supposed to be odd,
   the original assumption is false,
   => if n² is odd, then n must be odd as well.
```   
Part 2:
```
1.
   For each positive integer n, let S(n) be the statement 1 + 5 + 9 + ... + (4n - 3) = n(2n - 1) 

   Basis step: S(1) is the statement: (4(1) - 3) = 2(12) - 1 = 1. Thus S(1) is true. 

   Inductive step: We suppose that S(n) is true and prove that S(n + 1) is true. Thus, we assume that

   1 + 5 + 9 + ... + (4n - 3) = n(2n - 1) 

   and prove that 1 + 5 + 9 + ... = (4n - 3) + (4(n + 1) - 3) = 2(n + 1)2 - (n + 1)

   If we add (4(n + 1) - 3) to both sides of the equality in S(n), then on the left side of the sum we obtain the left side of the quality in S(n + 1). Now check the right side:

   1 + 5 + 9 + ... + (4n - 3) + (4(n + 1) - 3)
   = 2n2 - n + (4(n + 1) - 3)
   = 2n2 - n + 4n + 4 - 3
   = 2n2 + 4n + 2 - n - 1
   = 2(n2 + 2n + 1) - (n + 1)

   Hence, if S(n) is true, S(n + 1) is true. Therefore, 1 + 5 + 9 + ... + (4n - 3) = n(2n - 1) for each positive integer n.
2. 
```
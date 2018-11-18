##Part 1:
```
1. If mathematics is easy, then the homework is done, and if it is sunny, then camping is fun.
2. (S ^ H) -> (M v C)
```
##Part 2:
```
1. A B |   ( B' -> A' ) -> ( ( B' -> A ) -> B )   
   ----------------------------------------------
   T T |                 T
   T F |                 T
   F T |                 T
   F F |                 T
   
   tautology
   
2. A B |   ( ( A -> B ) ^ ( B -> A' ) ) -> A   
   ------------------------------------------
   T T |                T
   T F |                T
   F T |                F
   F F |                F
   
   neither
```   
##Part 3:
```
1. (p ^ q) -> r           p -> (q -> r)
   (p ^ q)' v r           p' v (q' v r)  (Implication x3)
   (p' v q') v r          p' v (q' v r)  (De Morgan)
   
   p' v (q' v r)    <=>      p' v (q' v r)  (Associative)
   
2. (q v r) -> p           (q -> p) ^ (r -> p)
   (q v r)' v p           (q' v p) ^ (r' v p) (Implication x3)
   (q' ^ r') v p          (q' v p) ^ (r' v p) (De Morgan)
   
   (q' v p) ^ (r' v p) <=>   (q' v p) ^ (r' v p) (Distributive)
```   
##Part 4:
```
1. Some cities are loved by all travelers but no person who lives there.
2. ∀x∀y((Traveler (x) ∧ City(y) ∧ Live(x,y)) -> ¬Love(x,y))

Part 5 (Extra Credit):
Q: Assuming: p → (q ∧ r ), s → r , r → p
Prove: s → q.

A: 1. p -> (q ^ r) Premise
   2. s -> r       Premise
   3. r -> p       Premise
   4. s            Assumption
   5. r            Modus Ponens, 2,4
   6. p            Modus Ponens, 3,5
   7. (q ^ r)      Modus Ponens, 1,6
   8. q            Conjunction elimination, 7
   9. s -> q       Implication introduction, 4-8
   
Q: Assuming: ¬(r ∨ s), ¬p → s, p → q. 
Prove: q

A: 1. ¬(r v s)  Premise
   2. ¬p -> s   Premise
   3. p -> q    Premise
   4. ¬r ^ ¬s   DeMorgan’s law, 1
   5. ¬s        Conjunction elimination, 4
   6. ¬(¬p)     Modus Tollens, 5,2
   7. p         Double negation, 6
   8. q         Modus Ponens, 7,3
```

   
							
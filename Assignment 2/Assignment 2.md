Part 1:
```
1. p->q						q'->p'
   p' v q (Implication)		q v p' (Implication)
							p' v q (Commutative)
							
					p' v q <=> p' v q
							
2. (p->r) ^ (q->r) <=> (p v q) -> r
   (p' v r) ^ (q' v r) <=> (p v q)' v r  (Implication x3)
   (p' v r) ^ (q' v r) <=> (p' ^ q') v r  (De Morgan)
   
   (p' v r) ^ (q' v r) <=> (p' v r) ^ (q' v r)  (Distributive)
   
3. 
```							
# Protecting From Criminals
<div align="center">time limit per second: 1 second</div>
<div align="center">memory limit per test: 256 megabytes</div>
<div align="center">input: standard input</div>
<div align="center">output: standard output</div>

## Problem
To protect Student Community and all other faculty members of **IIT Kanpur** from criminals a large boundary wall was constructed around the college having two pillars at its end at the front gate. Now we have to increase the protection due to increase in the criminal cases.<br>
There are **N** spots on the wall for **SIS Guard**. The k<sup>th</sup> spot is **k** kilometers away from the one pillar and **(N+1-k)<sup>th</sup>** away from the other. <br>
There exist a large number of permutation **P(2,1,5,3,4,……N)** of that **N** spots. **SIS Guard** has to occupy the spot in that order of the given permutation **(P[i] spot is occupied before P[i+1] spot)**. When a SIS Guard occupies a spot he is connected to the nearest SIS Guard already occupying his left spot. A connection between two spots requires a wire of length equal to the distance between the two.<br>
IIT has already purchased a wire of **L** kilometer of wire from TATA, possibly the wire will be cut into smaller length wires. It is obvious that the total length of the wire depends on the permutation of the spots **P**. Help IIT in minimizing the length of the unused wire. If there is not enough wire, **output -1**.<br>
## Input
The first line contains one integer **t (1≤t≤1000)** — the number of test cases<br> 
The first line of each test case contains two integer  **N(1 ≤ N ≤ 30)** — spots on the wall and **L (1 ≤ L ≤ 1000)** — length of the wire purchased.
## Output
For each test case, output the minimum length of the unused wire, or **-1** if the wire is not sufficient.
## Example
| S.No. | input |
| ---------| -------- |
| Test Cases | 4 |
| 1. | 3 8 |
| 2. | 3 9 |
| 3. | 2 4 |
| 4. | 5 25 |

| S.No. | output |
| --------- | ------- |
| 1. | 0 |
| 2. | 0 |
| 3. | -1 |
| 4. | 5 |

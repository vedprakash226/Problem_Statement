### Brief Explanation
<div>
  The problem states that there are n spots on the wall and we have to assign those position such that the length of the wire used  is maximum so that the unused wire become minimum or 0;
</div>

#### Approach

<div class="explanation"> 
   For the such a permutation the minimum length of the wire used is more than the provided length of the wire than simply return -1 as it is not possible that the given wire is sufficient if it is less than the minimum of the used length. <br>
  For such a permutation when the maximum length of the wire is less than the provided length of the wire than return (given length - max length). <br>
  So, our task is to find the max and the minimum possible length of the wire that.
</div>

#### For Max Length
P={,2,3,4,.....N} gives the maximum length and it is equal to (1+N) + (2+N-1) + (3+N-2) +.....+N =(N+3)*N/2.

#### For Minimum Length
We have to firstly give position to the gaurd at the middle position and then the whole spot are divided in the two parts for which we can recursively do the same and adding (N+1) to it in each step.
Let say N=5, mid position is N=3 so L=3+3. then for two part N=2 then put at N=1 so L=3+3+1+2 then put at N=2 so L=3+3+1+2++1+1.
similarly for the other side So, L=3+3+1+2+1+1+1+2+1+1=16.

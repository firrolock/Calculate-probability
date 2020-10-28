# Calculate-probability
Get the probability to put some items into several baskets

The program is to solve a problem to get the probability putting some of given amount of items into several baskets, in which balls can be zero, several, all of given amount.

The given amount of items cannot be less than 1 and amount of baskets cannot be less than 2.

e.g.
1 ball and 1 basket:
0 
1
two conditions

7 balls and 1 basket:
0
1
2
3
4
5
6
7
eight conditions

1 ball and 2 baskets:
0 0
0 1
1 0
three conditions

2 balls and 2 baskets:
0 0 
0 1
1 0
1 1
0 2
2 0
six conditions

7 balls and 2 baskets:
put 0 ball into first basket, second basket probability: 8
put 1 ball into first basket, second basket probability: 7
put 2 balls into first basket, second basket probability: 6
put 3 balls into first basket, second basket probability: 5
put 4 balls into first basket, second basket probability: 4
put 5 balls into first basket, second basket probability: 3
put 6 balls into first basket, second basket probability: 2
put 7 balls into first basket, second basket probability: 1
probability: 36 in total 

7 balls and 3 baskets:
probability: 120

7 balls and 8 baskets:
probability: 6435


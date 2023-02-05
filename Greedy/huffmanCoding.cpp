// used for lossless compression
// variable length coding
/*
example: "abaabaca..." 100 characters
frequencies: a-70,b-20,c-10
fixed length encoding: a:00,b:01,c:10 ->200 bits memory needed
--->Variable length Huffman coding:
1. Greedy Idea: the most frequent character has smallest code
2. Prefix requirement for decompression: no code should be prefix of any other
a-70,   b-20,   c-10
0       10      11      Prefix free->130 bits
1       01      00      Prefix free
0       00      01      Not Prefix free
1       0       11      Not Prefix free


*/
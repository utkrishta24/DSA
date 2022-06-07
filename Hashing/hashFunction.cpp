//idea:
//takes large universe of keys
//use hash function to convert these
//large value to small values
//these small values used as indexes
//hash functions

//how it works:
//should generate only values from 0 yo m-1 where
//m is size of hash table
//should be fast O(1) for int O(len) for strings
//should uniformly distribute large keys to hash table slots

//example:
//1.  h(large_key)=large_key%m 
//2.  for string, weighted sum
//      str[]="abcd"
//     ( str[0]*x^0 + str[1]*x^1 + str[2]*x^2 + str[3]*x^4)%m
//3.  universal hashing


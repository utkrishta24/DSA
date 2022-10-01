// Overview of Pattern Searching
// m->Pattern Length
// n->Text Length
// 1<=m<=n

// ......No Preprocessing....

// Naive O((n-m+1)*m)
// Naive when Improved Naive for Distinct O(n)

// ......Preprocess Pattern....

// Rabin Karp O((n-m+1)*m) Better than Naive on avg
// KMP O(n)

// ......Preprocess text....

// Suffix tree O(m)
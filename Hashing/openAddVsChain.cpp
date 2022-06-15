// chaining

// 1. hash table never fills
// 2. less sensitive to hash fucntions
// 3. poor chache performance
// 4. extra space for links 
// 5. for unsuccessful search: (1+alpha) better performance
// 6. use when : dynamic structure



//open addressing

// 1. hash table become full and resizing becomes mandatory
// 2. extra care required for clustering
// 3. chache friendly
// 4. extra space might be needed to achieve same performance as chaining
// 5. for unsuccessful search: 1/(1-alpha)
// use when : extra space and keys and count of keys known
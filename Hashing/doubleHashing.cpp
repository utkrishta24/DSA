//2. double hashing
    //hash(key,i)=(h1(key) + i*h2(key))%m
    //if h2(key) is relatively prime to m, then it always find a free slot if there is one
    //distributes keys more uniformly than linear probing and quadratic hshing
    //no clustering
    //why h2(key) and m be rel. prime?
    // 
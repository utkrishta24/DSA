//2. double hashing
    //hash(key,i)=(h1(key) + i*h2(key))%m
    //if h2(key) is relatively prime to m, then it always find a free slot if there is one
    //distributes keys more uniformly than linear probing and quadratic hshing
    //no clustering
    //why h2(key) and m be rel. prime?
    // always finds a free slot if there is a free slot 
    
//algo
    // void doubleHasingInsert(key){
    //     if (table if full)
    //         return error
    //     probe= h1(key), offset=h2(key)
    //     while(table[probe] is occupied)
    //         probe = (probe + offset )
    //     table[probe] = key
    // }
    //linear probe offset=1//

    //performance analysis of search(unsuccessful)
    //alpha = n/m (should be <=1)
    // assumption: every probe seq looks ar a random location
    //(1-alpha) fraction of table is empty
    //expected no of probes required = 1/(1-alpha)

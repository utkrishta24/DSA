// no of slots on hash table >= no of keys to be inserted
// chache friendly

//linear probing 
//quadratic probing
//double hashing


//linear probing
    //h(key)=key%7
    //hash(key,i)=(h(key)+i)%7 at i th probe
    //linear probing : linearly search for next empty slot when there is a collision
        //if last slot is filled search in circular manner

//search function uses hash key and stops when
    //1. key found false
    //2. empty slot found true 
    //3. travesed through whole table false

//delete fucntion cant make simply a slot empty
    //mark the slot deleted not empty
    //insert can insert in deleted
    //search not stops at deletion

//clustering is problem with linear probing 

//handling clustering
//1. quadratic probing //clusters are there too secondary clusters
    //works when laod factor alpha <0.5
    //and m is prime number
//2. double hashing

//1. quadratic probing
    //hash(key,i)=(h(key)+i^2)%m

//2. double hashing
    //hash(key,i)=(h1(key) + i*h2(key))%m
    //if h2(key) is relatively prime to m, then it always find a free slot if there is one
    //distributes keys more uniformly than linear probing and quadratic hshing
    //no clustering
    //why h2(key) and m be rel. prime?
    // 
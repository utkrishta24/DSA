/*
//time analysis

best case: cn*logn + 0(n) = 0(nlogn)
            T(n)= 2T(n/2) + 0(n)
worst case: 0(n2) + 0(n) = 0(n2)
            T(n)= T(n-1) + 0(n)
avg case(/where division is slightly unfair): O(nlogn)
gives nlogn times in random pivot

//space ananlysis

worst case: 0(n)
best case: 0(height=logn)

//Choice of pivot and worst case of quick sort

for sorted arrays: both partitions will turn into worst case
so we use random pivot generate function as
in hoare
    p=random(l,r)
    swap(arr[l],arr[p])
in lomuto
    p=random(l,r)
    swap(arr[r],arr[p])
*/
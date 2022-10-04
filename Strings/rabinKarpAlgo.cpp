#include <bits/stdc++.h>
using namespace std;

// O((N-M+1)*M)
// quad in worst case as hash value match aaaaa..aaa

// 1. like naive, slide the pattern one by one
// 2. compare hash value of pattern and current text window. if hash values match, then only compare individual characters

// p: hash value of pattern
// t: hash value of current window of text

// simple hash : sum of values
// problem : spurious hits

// quadratic in worst case but in general works better than naive

// calculate p and compare t, if equal match otherwise slide the window

// spurious hits: hash value matches but not the pattern

// sum of ascii values t takes O(m) if m is the length of pattern
// therefore we use rolling hash, coputing next hash by using previous
// rolling:
// t(i+1) = t(i) + txt[i+m] - txt[i]

// improved hash: (to avoid spurious hits)
// d=5
// a:1 , b:2, c:3, d:4, e:5 (ASCII values made easy)
// h("abc")= 1*d^2 + 2*d^1 + 3*d^0 = 1*5^2 + 2*5^1 + 3*5^0 = 38
// h("dab")= 4*d^2 + 1*d^1 + 2*d^0 = 4*5^2 + 1*5^1 + 2*5^0 = 107
// rolling:
// t(i+1) = d * (t(i) - txt[i] * d^(m-1) ) + txt[i+m]

//%q to store in a integer. a prime number, bcz ascii value are big

// used for multple pattern searching

#define d 256

void RBSearching(char txt[], char pat[], int q)
{
    
    // compute d^(m-1)%q
    int N =strlen(txt);
    int M = strlen(pat);
    int p = 0, t = 0, j, i;
    int h = 1;
    for (int i = 1; i <= M - 1; i++)
        h = (h * d) % q;

    // compute p and t0
    for (int i = 0; i < M; i++)
    {
        p = (p * d + pat[i]) % q;
        t = (t * d + txt[i]) % q;
    }
    for (i = 0; i <= N - M; i++)
    {
        // check for spurious hit
        if (p == t)
        {
            // bool flag = true;
            for (j = 0; j < M; j++)
                if (txt[i + j] != pat[j])
                {
                    // flag = false;
                    break;
                }
            // if (flag == true)
            if (j == M)
                cout << i << " ";
        }

        // compute t(i+1) using ti
        if (i < N - M)
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
            if (t < 0)
                t = (t + q);
        }
    }
}

int main()
{
    char txt[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";
    int q = INT_MAX;
    RBSearching(txt, pat, q);
    return 0;
}

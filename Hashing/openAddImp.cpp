// MyHash mh(7);
// mh.insert(49)
// mh.insert(56)
// mh.insert(72)
// if(mh.search(56)==true)
// print(yes)
// else
// print(no)
// mh.erase(56)
// if(mh.search(56)==true)
// print(yes)
// else
// print(no)

// 49 56 72 -1 -1 -1
// erase(56)
// 49 -2 72 -1 -1 -1

struct MyHash
{
    int *arr;
    int cap, size;

    MyHash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
            arr[i] = -1;
    }

    int hash(int key)
    {
        return key % cap;
    }

    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
                return true;
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
        return false;
    }

    bool insert(int key)
    {
        if (size == cap)
            return false;
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            i = (i + 1) % cap;
        if (arr[i] == key)
        {
            return false;
        }
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
        return false;
    }
};

//how to handle the cases when -1 and -2 are input keys?
//library impl. empty checked by null (pointer and references)
//for deleted : create a dummy node and and when deleted its pointer or reference is stored
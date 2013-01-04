#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <memory>

#include "object.h"
#include "test.h"

void test(bool qwe)
{
    static int n = 0;
    n++;
    if (qwe) {
        std::cout << "TEST" << n << ": PASSED\n";
    } else {
        std::cout << "TEST" << n << ": FAILED\n";
    }
}

int main()
{
    TTest test;
    test.SayAddr();


    /*
    TObject obj;
    obj["key"] = "value";

    std::string str = obj["key"];

    test(str == "value");
    test(obj.Has("key"));

    obj["key"] = 10;

    test(obj["key"] == 10);

    test(!(obj["key"] == 20));

    obj["key"] = 30;
    test(obj["key"] == 30);

    srand(time(NULL));

    {
        size_t n = rand() % 100;
        obj["key"] = n;
        test(obj["key"] == n);
    }
    {
        size_t n = rand() % 100;
        obj["key"] = n;
        test(!(obj["key"] == n + rand()%10 + 1));
    }

    {
        TObject lol;
        size_t n = (rand() % 30) + 5;
        lol["hoho"] = n;
        TObject obj;
        obj["asd"] = 10;
        obj["qwe"] = lol;
        test(obj["qwe"]["hoho"] == n);
        test(!(obj["qwe"]["hoho"] == n - rand()%3 - 1));

        test(obj[std::string("qwe")][std::string("hoho")] == n);
        test(!(obj[std::string("qwe")][std::string("hoho")] == n - rand()%3 - 1));
    }

    {
        TObject troll;
        troll["test"].Add(10);
        troll["test"].Add(20);
        test(troll["test"][1] == 20);

        troll["test"].Add(obj);
        test(troll["test"][2] == obj);
    }

    {
        /*
        TObject o;
        o["Key"] = 10;

        std::string str = o.Serialize();

        TObject v;
        v.Deserialize(str);
        test(v["Key"] == 10);
        */
    //}

    return 0;
}


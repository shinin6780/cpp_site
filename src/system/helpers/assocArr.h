#ifndef ASSOCARR_H
#define ASSOCARR_H

#include <string>
using namespace std;

struct assoc {
    string name;
    string content;
    string type;
    assoc* prev;
    assoc* next;
    assoc* child;
};

class AssocArr {
    public:
        static void add(string name, string content, string type, assoc **arr);
        static void add(string name, string content, string type, assoc **arr, assoc *child);
};

#endif

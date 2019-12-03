/*! \file       main.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       2.12.2019
 *
 *  Sets
 */

#include <iostream>
#include <set>
#include <cassert>          // needed for assert macros

using std::cout;
using std::string;

typedef std::set<int> IntSet;


// /// Creates a set of some numbers
//IntSet makeSet1()
//{
//    IntSet s;
//    assert(s.size() == 0);
//}


/// Outputs a given set \a s to a stream \a ostr.
/// There is provided 2 implementations. Choose one.
void outputSet(std::ostream& ostr, const IntSet& s)
{
    // we have no indices for sets, so, can't use operator[]

    bool first = true;
    ostr << "{";


//    // variant 1: range-based for
//    for(int el : s)
//    {
//        if(!first)
//            ostr << ", ";
//        else
//            first = false;

//        ostr << el;
//    }

    // variant 2: using set's iterators
    for(IntSet::const_iterator it = s.begin();
        it != s.end();
        ++it)
    {
        if(!first)
            ostr << ", ";
        else
            first = false;

        ostr << *it;
    }

    ostr << "}";
}

/// Prints a given set \a s to the standard output.
/// Serves as a shortcut for outputSet()
inline void printSet(const IntSet& s)
{
    outputSet(std::cout, s);
}



int main()
{
    cout << "Hello world of sets!\n\n";

    //IntSet s1 = makeSet1();
    IntSet s;
    assert(s.size() == 0);
    assert(s.empty());

    cout << "Initital set: ";
    printSet(s);

    // add some numbers
    s.insert(10);
    s.insert(16);
    s.insert(12);
    s.insert(10);
    s.insert(15);
    s.insert(14);

    cout << "\nSet now: ";
    printSet(s);
    cout << ", its size: " << s.size();

    // checks, whether a number is in the set
    assert(s.find(10) != s.end());
    assert(s.find(12) != s.end());
    assert(s.find(20) == s.end());

    // now trying to remove element 10
    IntSet::iterator el15 = s.find(15);
    if(el15 != s.end())
        s.erase(el15);

    cout << "\nSet after removing element 15: ";
    printSet(s);
    cout << ", its size: " << s.size();



    cout << "\n\n";
    return 0;
}

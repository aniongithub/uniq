//==============================================================================
// Id • A class with id
//==============================================================================
#pragma once
#include "uniq.h"
namespace uniq {
//======================================================================= Id
struct Id {
  static map<string, Atomic<integer>> Ids;
  static mutex mutexIds;

  integer id;
  Id(string group = ""){ 
    lock_guard<mutex> lock(Id::mutexIds); // Mutex(Ids);
    auto r = &Ids[group];
    id = ++(*r);
    log(group, id);
  };

  inline operator integer() const { return id; }
  
  bool operator<(const Id &other) const { return id < other.id; };
  bool operator>(const Id &other) const { return id > other.id; };
  bool operator==(const Id &other) const { return id == other.id; };
};

map<string, Atomic<integer>> Id::Ids = {};
mutex Id::mutexIds = {};

// #define ID(x) Id(#x);

//========================================================================= test
void test_Id(){
  Id a("a"), b("a"), c;
  CHECK(b.id > 0);
  CHECK(b > 0);
  CHECK(a < b);
  CHECK(c.id == 1);
}
}// uniq • Released under GPL 3.0

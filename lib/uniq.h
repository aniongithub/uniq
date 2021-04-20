#pragma once
#include "std.h" // all std headers
#include "unistd.h" // posix functions like usleep

#include "numtypes.h" // basic numeric types
#include "call.h" // lazy call & lambda utilities
#include "utils.h" // rnd, format, join, repeat, trim ...
#include "terminal.h" // terminal printing with colors

#include "Time.h" // time primitive
#include "Atomic.h" // basic atomic types
#include "Name.h" // class with name
#include "Id.h" // incremental id
#include "State.h" // state machine 
#include "Actor.h" // common parent for active classes
#include "Log.h" // simple logger
#include "test.h" // unit testing

#include "queue.h" // the queue
#include "pool.h" // thread pool

// #include "Counter.h" // simple counter Actor;
#include "Event.h"
#include "EventEmitter.h"
#include "Set.h" // common interface for collections
#include "Vector.h" // std::vector with Set interface

#include "test.cc" // dependable tests

// #include "model.h" // UniQ classes mockup
#include "Worker.h" // worker thread
// #include "WorkerPool.h" // A Worker with helpers

#include "Profiler.h" // execution time recording
#include "Benchmark.h" // speed tests
#include "Node.h" // parent/children node using shared_ptr
// #include "Lazy.h" // lazy call
// #include "Json.h" // Json primitive
// #include "Digit.h" // big digit 
// #include "Number.h" // big number
// #include "Timer.h" // hi-precision timer
// #include "Any.h" // simpler std:any 

// #include "Color.h" // color primitive
// #include "sha256.h" // cryptographic function
// #include "fs.h" // filesystem utilities readFile, saveFile() ...

// UniQ • Released under GPL 3 licence
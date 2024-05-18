#ifndef __LOCKFREE_QUEUE_H__
#define __LOCKFREE_QUEUE_H__

// concurrentqueue
#include "blockingconcurrentqueue.h"
#include "concurrentqueue.h"
#include "lightweightsemaphore.h"

// readerwriterqueue
#include "atomicops.h"
#include "readerwritercircularbuffer.h"
#include "readerwriterqueue.h"

namespace lockfree {

namespace queue = moodycamel;

}

#endif

# Undefined Behavior in C++ Vector: Repeated Erasing and Pushing

This repository demonstrates a common, yet subtle, bug related to the usage of `std::vector` in C++. The issue arises from repeatedly erasing elements from the beginning of the vector and subsequently pushing new elements to the back.  While seemingly straightforward, this operation can lead to unexpected results and, in some cases, undefined behavior.

The `bug.cpp` file contains the problematic code, while `bugSolution.cpp` provides a corrected version that addresses the efficiency and potential undefined behavior.  The explanation below details the cause of the bug and the proposed solution.

**Cause of the Bug:**

The C++ `std::vector`'s `erase()` method removes elements but does *not* automatically shrink the underlying memory allocation. Therefore, after multiple `erase` operations, the vector might hold a large amount of unused allocated memory. Repeatedly pushing new elements might lead to memory overruns or other unexpected behavior because of the retained capacity.

**Solution:**

The best solution depends on the specific use case. In the example provided, it's more efficient to avoid repeatedly erasing at the beginning. If the goal is to keep the vector's size at a certain limit, consider using alternative data structures like `std::deque` or adjusting the algorithm to be more efficient.

# INTRO

STL -> Standard Template Library.

STL is a set of general-purpose templatized clases(data structures) and functions(algorithms) that can be used as a standard approach for storing and processing of data.

In simple words, 
> STL is a collection of generic classes and functions.

**The STL components are defined in the `namespace std`.**


# Components of STL

STL has 3 core components:
1. Containers.
2. Algorithms.
3. Iterators.

> _Algorithms_ employ _iterators_ to perform operations stored in _containers_.

## 1. Container

> A container is an object that actually stores data. It is a way data is organized in memory.

STL classes are implemented by template classes and can be easily customized to hold different types of data.

## 2. Algorithm

An algorithm is a procedure that is used to process the data contained in the containers.

> Algorithms are implemented by template functions.

## 3. Iterator

An iterator is an object(like a pointer) that points to an element in a container.

We can use iterators to move through the contents of containers.

> Iterators are handled just like pointers. We can increment or decrement them.

> Iterators connect algorithms with containers and play a key role in the manipulation of dta stored in the containers.

# 1. Containers
> Holds data!!

STL defines 10 containers:

|Container|Description|Header file|Iterator|
|:--------|:---------:|:---------:|-------:|
|vector|A dynamic array. Allows insertions and deletions at the back. Permits access to any element.|`<vector>`|Random access|
|list|A bidirectional, linear list. Allows insertions and deletions anywhere.|`<list>`|Bidirectional|
|deque|A double-ended queue. Allows insertions and deletions at both ends. Permits direct access to any element.|`<deque>`|Random access|
|set|An associate container for storing unique sets. Allows rapid lookup, no duplicates allowed.|`<set>`|Bidirectional|
|multiset|An associate container for storing non-unique sets.(Duplicates allowed).|`<set>`|Bidirectional|
|map|An assiciate container for storing unique key/value pairs. each key is assiciated with only one vlaue(One-to-one mapping). Allows key-based lookup.|`<map>`|Bidirectional|
|multimap|An associate container for storing key/value pairs in which one key may be associated with more than one vlaue(one-to-many mapping). Allows key-based lookup.|`<map>`|Bidirectional|
|stack|A standard stack. Last-in-first-out(LIFO).|`<stack>`|No iterator|
|queue|A standard queue. First-in-first-out(FIFO).|`<queue>`|No iterator|
|priority_queue|A priority queue. The first element out is always the highest priority element|`<queue>`|No iterator|


---

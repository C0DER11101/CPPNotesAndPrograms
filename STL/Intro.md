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

---
